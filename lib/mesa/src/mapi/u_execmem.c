/*
 * Mesa 3-D graphics library
 *
 * Copyright (C) 1999-2005  Brian Paul   All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */


/**
 * \file glapi_execmem.c
 *
 * Function for allocating executable memory for dispatch stubs.
 *
 * Copied from main/execmem.c and simplified for dispatch stubs.
 */


#include "c11/threads.h"
#include "util/u_call_once.h"
#include "u_execmem.h"


#define EXEC_MAP_SIZE (4*1024)

static mtx_t exec_mutex;

static unsigned int head = 0;

static unsigned char *exec_mem = (unsigned char *)0;

#if defined(__OpenBSD__)

static int
init_map(void)
{
  return 0;
}

#elif defined(__linux__) || defined(__NetBSD__) || defined(__sun) || defined(__HAIKU__)

#include <unistd.h>
#include <sys/mman.h>

#ifdef MESA_SELINUX
#include <selinux/selinux.h>
#endif


#ifndef MAP_ANONYMOUS
#define MAP_ANONYMOUS MAP_ANON
#endif


/*
 * Dispatch stubs are of fixed size and never freed. Thus, we do not need to
 * overlay a heap, we just mmap a page and manage through an index.
 */

static int
init_map(void)
{
#ifdef MESA_SELINUX
   if (is_selinux_enabled()) {
      if (!security_get_boolean_active("allow_execmem") ||
	  !security_get_boolean_pending("allow_execmem"))
         return 0;
   }
#endif

   exec_mem = mmap(NULL, EXEC_MAP_SIZE, PROT_EXEC | PROT_READ | PROT_WRITE,
                   MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

   return (exec_mem != MAP_FAILED);
}


#elif defined(_WIN32)

#include <windows.h>


/*
 * Avoid Data Execution Prevention.
 */

static int
init_map(void)
{
   exec_mem = VirtualAlloc(NULL, EXEC_MAP_SIZE, MEM_COMMIT, PAGE_EXECUTE_READWRITE);

   return (exec_mem != NULL);
}


#else

#include <stdlib.h>

static int
init_map(void)
{
   exec_mem = malloc(EXEC_MAP_SIZE);

   return (exec_mem != NULL);
}


#endif

static void
u_execmem_init_once(void)
{
   if (!init_map())
      exec_mem = NULL;
   mtx_init(&exec_mutex, mtx_plain);
}

void *
u_execmem_alloc(unsigned int size)
{
#ifndef MESA_EXECMEM
   (void)size;
   return NULL;
#else
   void *addr = NULL;
   static util_once_flag once = UTIL_ONCE_FLAG_INIT;
   util_call_once(&once, u_execmem_init_once);
   if (exec_mem == NULL)
      return NULL;

   mtx_lock(&exec_mutex);

   /* free space check, assumes no integer overflow */
   if (head + size > EXEC_MAP_SIZE)
      goto bail;

   /* allocation, assumes proper addr and size alignement */
   addr = exec_mem + head;
   head += size;

bail:
   mtx_unlock(&exec_mutex);

   return addr;
#endif /* MESA_EXECMEM */
}


