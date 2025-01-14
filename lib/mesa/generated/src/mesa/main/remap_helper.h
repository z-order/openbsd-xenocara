/* DO NOT EDIT - This file generated automatically by remap_helper.py (from Mesa) script */

/*
 * Copyright (C) 2009 Chia-I Wu <olv@0xlab.org>
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * Chia-I Wu,
 * AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "main/dispatch.h"
#include "main/remap.h"

/* this is internal to remap.c */
#ifndef need_MESA_remap_table
#error Only remap.c should include this file!
#endif /* need_MESA_remap_table */


static const char _mesa_function_pool[] =
   /* _mesa_function_pool[0]: NewList (dynamic) */
   "ii\0"
   "glNewList\0"
   "\0"
   /* _mesa_function_pool[14]: EndList (offset 1) */
   "\0"
   "glEndList\0"
   "\0"
   /* _mesa_function_pool[26]: CallList (offset 2) */
   "i\0"
   "glCallList\0"
   "\0"
   /* _mesa_function_pool[40]: CallLists (offset 3) */
   "iip\0"
   "glCallLists\0"
   "\0"
   /* _mesa_function_pool[57]: DeleteLists (offset 4) */
   "ii\0"
   "glDeleteLists\0"
   "\0"
   /* _mesa_function_pool[75]: GenLists (offset 5) */
   "i\0"
   "glGenLists\0"
   "\0"
   /* _mesa_function_pool[89]: ListBase (offset 6) */
   "i\0"
   "glListBase\0"
   "\0"
   /* _mesa_function_pool[103]: Begin (offset 7) */
   "i\0"
   "glBegin\0"
   "\0"
   /* _mesa_function_pool[114]: Bitmap (offset 8) */
   "iiffffp\0"
   "glBitmap\0"
   "\0"
   /* _mesa_function_pool[132]: Color3b (offset 9) */
   "iii\0"
   "glColor3b\0"
   "\0"
   /* _mesa_function_pool[147]: Color3bv (offset 10) */
   "p\0"
   "glColor3bv\0"
   "\0"
   /* _mesa_function_pool[161]: Color3d (offset 11) */
   "ddd\0"
   "glColor3d\0"
   "\0"
   /* _mesa_function_pool[176]: Color3dv (offset 12) */
   "p\0"
   "glColor3dv\0"
   "\0"
   /* _mesa_function_pool[190]: Color3f (offset 13) */
   "fff\0"
   "glColor3f\0"
   "\0"
   /* _mesa_function_pool[205]: Color3fv (offset 14) */
   "p\0"
   "glColor3fv\0"
   "\0"
   /* _mesa_function_pool[219]: Color3i (offset 15) */
   "iii\0"
   "glColor3i\0"
   "\0"
   /* _mesa_function_pool[234]: Color3iv (offset 16) */
   "p\0"
   "glColor3iv\0"
   "\0"
   /* _mesa_function_pool[248]: Color3s (offset 17) */
   "iii\0"
   "glColor3s\0"
   "\0"
   /* _mesa_function_pool[263]: Color3sv (offset 18) */
   "p\0"
   "glColor3sv\0"
   "\0"
   /* _mesa_function_pool[277]: Color3ub (offset 19) */
   "iii\0"
   "glColor3ub\0"
   "\0"
   /* _mesa_function_pool[293]: Color3ubv (offset 20) */
   "p\0"
   "glColor3ubv\0"
   "\0"
   /* _mesa_function_pool[308]: Color3ui (offset 21) */
   "iii\0"
   "glColor3ui\0"
   "\0"
   /* _mesa_function_pool[324]: Color3uiv (offset 22) */
   "p\0"
   "glColor3uiv\0"
   "\0"
   /* _mesa_function_pool[339]: Color3us (offset 23) */
   "iii\0"
   "glColor3us\0"
   "\0"
   /* _mesa_function_pool[355]: Color3usv (offset 24) */
   "p\0"
   "glColor3usv\0"
   "\0"
   /* _mesa_function_pool[370]: Color4b (offset 25) */
   "iiii\0"
   "glColor4b\0"
   "\0"
   /* _mesa_function_pool[386]: Color4bv (offset 26) */
   "p\0"
   "glColor4bv\0"
   "\0"
   /* _mesa_function_pool[400]: Color4d (offset 27) */
   "dddd\0"
   "glColor4d\0"
   "\0"
   /* _mesa_function_pool[416]: Color4dv (offset 28) */
   "p\0"
   "glColor4dv\0"
   "\0"
   /* _mesa_function_pool[430]: Color4f (offset 29) */
   "ffff\0"
   "glColor4f\0"
   "\0"
   /* _mesa_function_pool[446]: Color4fv (offset 30) */
   "p\0"
   "glColor4fv\0"
   "\0"
   /* _mesa_function_pool[460]: Color4i (offset 31) */
   "iiii\0"
   "glColor4i\0"
   "\0"
   /* _mesa_function_pool[476]: Color4iv (offset 32) */
   "p\0"
   "glColor4iv\0"
   "\0"
   /* _mesa_function_pool[490]: Color4s (offset 33) */
   "iiii\0"
   "glColor4s\0"
   "\0"
   /* _mesa_function_pool[506]: Color4sv (offset 34) */
   "p\0"
   "glColor4sv\0"
   "\0"
   /* _mesa_function_pool[520]: Color4ub (offset 35) */
   "iiii\0"
   "glColor4ub\0"
   "\0"
   /* _mesa_function_pool[537]: Color4ubv (offset 36) */
   "p\0"
   "glColor4ubv\0"
   "\0"
   /* _mesa_function_pool[552]: Color4ui (offset 37) */
   "iiii\0"
   "glColor4ui\0"
   "\0"
   /* _mesa_function_pool[569]: Color4uiv (offset 38) */
   "p\0"
   "glColor4uiv\0"
   "\0"
   /* _mesa_function_pool[584]: Color4us (offset 39) */
   "iiii\0"
   "glColor4us\0"
   "\0"
   /* _mesa_function_pool[601]: Color4usv (offset 40) */
   "p\0"
   "glColor4usv\0"
   "\0"
   /* _mesa_function_pool[616]: EdgeFlag (offset 41) */
   "i\0"
   "glEdgeFlag\0"
   "\0"
   /* _mesa_function_pool[630]: EdgeFlagv (offset 42) */
   "p\0"
   "glEdgeFlagv\0"
   "\0"
   /* _mesa_function_pool[645]: End (offset 43) */
   "\0"
   "glEnd\0"
   "\0"
   /* _mesa_function_pool[653]: Indexd (offset 44) */
   "d\0"
   "glIndexd\0"
   "\0"
   /* _mesa_function_pool[665]: Indexdv (offset 45) */
   "p\0"
   "glIndexdv\0"
   "\0"
   /* _mesa_function_pool[678]: Indexf (offset 46) */
   "f\0"
   "glIndexf\0"
   "\0"
   /* _mesa_function_pool[690]: Indexfv (offset 47) */
   "p\0"
   "glIndexfv\0"
   "\0"
   /* _mesa_function_pool[703]: Indexi (offset 48) */
   "i\0"
   "glIndexi\0"
   "\0"
   /* _mesa_function_pool[715]: Indexiv (offset 49) */
   "p\0"
   "glIndexiv\0"
   "\0"
   /* _mesa_function_pool[728]: Indexs (offset 50) */
   "i\0"
   "glIndexs\0"
   "\0"
   /* _mesa_function_pool[740]: Indexsv (offset 51) */
   "p\0"
   "glIndexsv\0"
   "\0"
   /* _mesa_function_pool[753]: Normal3b (offset 52) */
   "iii\0"
   "glNormal3b\0"
   "\0"
   /* _mesa_function_pool[769]: Normal3bv (offset 53) */
   "p\0"
   "glNormal3bv\0"
   "\0"
   /* _mesa_function_pool[784]: Normal3d (offset 54) */
   "ddd\0"
   "glNormal3d\0"
   "\0"
   /* _mesa_function_pool[800]: Normal3dv (offset 55) */
   "p\0"
   "glNormal3dv\0"
   "\0"
   /* _mesa_function_pool[815]: Normal3f (offset 56) */
   "fff\0"
   "glNormal3f\0"
   "\0"
   /* _mesa_function_pool[831]: Normal3fv (offset 57) */
   "p\0"
   "glNormal3fv\0"
   "\0"
   /* _mesa_function_pool[846]: Normal3i (offset 58) */
   "iii\0"
   "glNormal3i\0"
   "\0"
   /* _mesa_function_pool[862]: Normal3iv (offset 59) */
   "p\0"
   "glNormal3iv\0"
   "\0"
   /* _mesa_function_pool[877]: Normal3s (offset 60) */
   "iii\0"
   "glNormal3s\0"
   "\0"
   /* _mesa_function_pool[893]: Normal3sv (offset 61) */
   "p\0"
   "glNormal3sv\0"
   "\0"
   /* _mesa_function_pool[908]: RasterPos2d (offset 62) */
   "dd\0"
   "glRasterPos2d\0"
   "\0"
   /* _mesa_function_pool[926]: RasterPos2dv (offset 63) */
   "p\0"
   "glRasterPos2dv\0"
   "\0"
   /* _mesa_function_pool[944]: RasterPos2f (offset 64) */
   "ff\0"
   "glRasterPos2f\0"
   "\0"
   /* _mesa_function_pool[962]: RasterPos2fv (offset 65) */
   "p\0"
   "glRasterPos2fv\0"
   "\0"
   /* _mesa_function_pool[980]: RasterPos2i (offset 66) */
   "ii\0"
   "glRasterPos2i\0"
   "\0"
   /* _mesa_function_pool[998]: RasterPos2iv (offset 67) */
   "p\0"
   "glRasterPos2iv\0"
   "\0"
   /* _mesa_function_pool[1016]: RasterPos2s (offset 68) */
   "ii\0"
   "glRasterPos2s\0"
   "\0"
   /* _mesa_function_pool[1034]: RasterPos2sv (offset 69) */
   "p\0"
   "glRasterPos2sv\0"
   "\0"
   /* _mesa_function_pool[1052]: RasterPos3d (offset 70) */
   "ddd\0"
   "glRasterPos3d\0"
   "\0"
   /* _mesa_function_pool[1071]: RasterPos3dv (offset 71) */
   "p\0"
   "glRasterPos3dv\0"
   "\0"
   /* _mesa_function_pool[1089]: RasterPos3f (offset 72) */
   "fff\0"
   "glRasterPos3f\0"
   "\0"
   /* _mesa_function_pool[1108]: RasterPos3fv (offset 73) */
   "p\0"
   "glRasterPos3fv\0"
   "\0"
   /* _mesa_function_pool[1126]: RasterPos3i (offset 74) */
   "iii\0"
   "glRasterPos3i\0"
   "\0"
   /* _mesa_function_pool[1145]: RasterPos3iv (offset 75) */
   "p\0"
   "glRasterPos3iv\0"
   "\0"
   /* _mesa_function_pool[1163]: RasterPos3s (offset 76) */
   "iii\0"
   "glRasterPos3s\0"
   "\0"
   /* _mesa_function_pool[1182]: RasterPos3sv (offset 77) */
   "p\0"
   "glRasterPos3sv\0"
   "\0"
   /* _mesa_function_pool[1200]: RasterPos4d (offset 78) */
   "dddd\0"
   "glRasterPos4d\0"
   "\0"
   /* _mesa_function_pool[1220]: RasterPos4dv (offset 79) */
   "p\0"
   "glRasterPos4dv\0"
   "\0"
   /* _mesa_function_pool[1238]: RasterPos4f (offset 80) */
   "ffff\0"
   "glRasterPos4f\0"
   "\0"
   /* _mesa_function_pool[1258]: RasterPos4fv (offset 81) */
   "p\0"
   "glRasterPos4fv\0"
   "\0"
   /* _mesa_function_pool[1276]: RasterPos4i (offset 82) */
   "iiii\0"
   "glRasterPos4i\0"
   "\0"
   /* _mesa_function_pool[1296]: RasterPos4iv (offset 83) */
   "p\0"
   "glRasterPos4iv\0"
   "\0"
   /* _mesa_function_pool[1314]: RasterPos4s (offset 84) */
   "iiii\0"
   "glRasterPos4s\0"
   "\0"
   /* _mesa_function_pool[1334]: RasterPos4sv (offset 85) */
   "p\0"
   "glRasterPos4sv\0"
   "\0"
   /* _mesa_function_pool[1352]: Rectd (offset 86) */
   "dddd\0"
   "glRectd\0"
   "\0"
   /* _mesa_function_pool[1366]: Rectdv (offset 87) */
   "pp\0"
   "glRectdv\0"
   "\0"
   /* _mesa_function_pool[1379]: Rectf (offset 88) */
   "ffff\0"
   "glRectf\0"
   "\0"
   /* _mesa_function_pool[1393]: Rectfv (offset 89) */
   "pp\0"
   "glRectfv\0"
   "\0"
   /* _mesa_function_pool[1406]: Recti (offset 90) */
   "iiii\0"
   "glRecti\0"
   "\0"
   /* _mesa_function_pool[1420]: Rectiv (offset 91) */
   "pp\0"
   "glRectiv\0"
   "\0"
   /* _mesa_function_pool[1433]: Rects (offset 92) */
   "iiii\0"
   "glRects\0"
   "\0"
   /* _mesa_function_pool[1447]: Rectsv (offset 93) */
   "pp\0"
   "glRectsv\0"
   "\0"
   /* _mesa_function_pool[1460]: TexCoord1d (offset 94) */
   "d\0"
   "glTexCoord1d\0"
   "\0"
   /* _mesa_function_pool[1476]: TexCoord1dv (offset 95) */
   "p\0"
   "glTexCoord1dv\0"
   "\0"
   /* _mesa_function_pool[1493]: TexCoord1f (offset 96) */
   "f\0"
   "glTexCoord1f\0"
   "\0"
   /* _mesa_function_pool[1509]: TexCoord1fv (offset 97) */
   "p\0"
   "glTexCoord1fv\0"
   "\0"
   /* _mesa_function_pool[1526]: TexCoord1i (offset 98) */
   "i\0"
   "glTexCoord1i\0"
   "\0"
   /* _mesa_function_pool[1542]: TexCoord1iv (offset 99) */
   "p\0"
   "glTexCoord1iv\0"
   "\0"
   /* _mesa_function_pool[1559]: TexCoord1s (offset 100) */
   "i\0"
   "glTexCoord1s\0"
   "\0"
   /* _mesa_function_pool[1575]: TexCoord1sv (offset 101) */
   "p\0"
   "glTexCoord1sv\0"
   "\0"
   /* _mesa_function_pool[1592]: TexCoord2d (offset 102) */
   "dd\0"
   "glTexCoord2d\0"
   "\0"
   /* _mesa_function_pool[1609]: TexCoord2dv (offset 103) */
   "p\0"
   "glTexCoord2dv\0"
   "\0"
   /* _mesa_function_pool[1626]: TexCoord2f (offset 104) */
   "ff\0"
   "glTexCoord2f\0"
   "\0"
   /* _mesa_function_pool[1643]: TexCoord2fv (offset 105) */
   "p\0"
   "glTexCoord2fv\0"
   "\0"
   /* _mesa_function_pool[1660]: TexCoord2i (offset 106) */
   "ii\0"
   "glTexCoord2i\0"
   "\0"
   /* _mesa_function_pool[1677]: TexCoord2iv (offset 107) */
   "p\0"
   "glTexCoord2iv\0"
   "\0"
   /* _mesa_function_pool[1694]: TexCoord2s (offset 108) */
   "ii\0"
   "glTexCoord2s\0"
   "\0"
   /* _mesa_function_pool[1711]: TexCoord2sv (offset 109) */
   "p\0"
   "glTexCoord2sv\0"
   "\0"
   /* _mesa_function_pool[1728]: TexCoord3d (offset 110) */
   "ddd\0"
   "glTexCoord3d\0"
   "\0"
   /* _mesa_function_pool[1746]: TexCoord3dv (offset 111) */
   "p\0"
   "glTexCoord3dv\0"
   "\0"
   /* _mesa_function_pool[1763]: TexCoord3f (offset 112) */
   "fff\0"
   "glTexCoord3f\0"
   "\0"
   /* _mesa_function_pool[1781]: TexCoord3fv (offset 113) */
   "p\0"
   "glTexCoord3fv\0"
   "\0"
   /* _mesa_function_pool[1798]: TexCoord3i (offset 114) */
   "iii\0"
   "glTexCoord3i\0"
   "\0"
   /* _mesa_function_pool[1816]: TexCoord3iv (offset 115) */
   "p\0"
   "glTexCoord3iv\0"
   "\0"
   /* _mesa_function_pool[1833]: TexCoord3s (offset 116) */
   "iii\0"
   "glTexCoord3s\0"
   "\0"
   /* _mesa_function_pool[1851]: TexCoord3sv (offset 117) */
   "p\0"
   "glTexCoord3sv\0"
   "\0"
   /* _mesa_function_pool[1868]: TexCoord4d (offset 118) */
   "dddd\0"
   "glTexCoord4d\0"
   "\0"
   /* _mesa_function_pool[1887]: TexCoord4dv (offset 119) */
   "p\0"
   "glTexCoord4dv\0"
   "\0"
   /* _mesa_function_pool[1904]: TexCoord4f (offset 120) */
   "ffff\0"
   "glTexCoord4f\0"
   "\0"
   /* _mesa_function_pool[1923]: TexCoord4fv (offset 121) */
   "p\0"
   "glTexCoord4fv\0"
   "\0"
   /* _mesa_function_pool[1940]: TexCoord4i (offset 122) */
   "iiii\0"
   "glTexCoord4i\0"
   "\0"
   /* _mesa_function_pool[1959]: TexCoord4iv (offset 123) */
   "p\0"
   "glTexCoord4iv\0"
   "\0"
   /* _mesa_function_pool[1976]: TexCoord4s (offset 124) */
   "iiii\0"
   "glTexCoord4s\0"
   "\0"
   /* _mesa_function_pool[1995]: TexCoord4sv (offset 125) */
   "p\0"
   "glTexCoord4sv\0"
   "\0"
   /* _mesa_function_pool[2012]: Vertex2d (offset 126) */
   "dd\0"
   "glVertex2d\0"
   "\0"
   /* _mesa_function_pool[2027]: Vertex2dv (offset 127) */
   "p\0"
   "glVertex2dv\0"
   "\0"
   /* _mesa_function_pool[2042]: Vertex2f (offset 128) */
   "ff\0"
   "glVertex2f\0"
   "\0"
   /* _mesa_function_pool[2057]: Vertex2fv (offset 129) */
   "p\0"
   "glVertex2fv\0"
   "\0"
   /* _mesa_function_pool[2072]: Vertex2i (offset 130) */
   "ii\0"
   "glVertex2i\0"
   "\0"
   /* _mesa_function_pool[2087]: Vertex2iv (offset 131) */
   "p\0"
   "glVertex2iv\0"
   "\0"
   /* _mesa_function_pool[2102]: Vertex2s (offset 132) */
   "ii\0"
   "glVertex2s\0"
   "\0"
   /* _mesa_function_pool[2117]: Vertex2sv (offset 133) */
   "p\0"
   "glVertex2sv\0"
   "\0"
   /* _mesa_function_pool[2132]: Vertex3d (offset 134) */
   "ddd\0"
   "glVertex3d\0"
   "\0"
   /* _mesa_function_pool[2148]: Vertex3dv (offset 135) */
   "p\0"
   "glVertex3dv\0"
   "\0"
   /* _mesa_function_pool[2163]: Vertex3f (offset 136) */
   "fff\0"
   "glVertex3f\0"
   "\0"
   /* _mesa_function_pool[2179]: Vertex3fv (offset 137) */
   "p\0"
   "glVertex3fv\0"
   "\0"
   /* _mesa_function_pool[2194]: Vertex3i (offset 138) */
   "iii\0"
   "glVertex3i\0"
   "\0"
   /* _mesa_function_pool[2210]: Vertex3iv (offset 139) */
   "p\0"
   "glVertex3iv\0"
   "\0"
   /* _mesa_function_pool[2225]: Vertex3s (offset 140) */
   "iii\0"
   "glVertex3s\0"
   "\0"
   /* _mesa_function_pool[2241]: Vertex3sv (offset 141) */
   "p\0"
   "glVertex3sv\0"
   "\0"
   /* _mesa_function_pool[2256]: Vertex4d (offset 142) */
   "dddd\0"
   "glVertex4d\0"
   "\0"
   /* _mesa_function_pool[2273]: Vertex4dv (offset 143) */
   "p\0"
   "glVertex4dv\0"
   "\0"
   /* _mesa_function_pool[2288]: Vertex4f (offset 144) */
   "ffff\0"
   "glVertex4f\0"
   "\0"
   /* _mesa_function_pool[2305]: Vertex4fv (offset 145) */
   "p\0"
   "glVertex4fv\0"
   "\0"
   /* _mesa_function_pool[2320]: Vertex4i (offset 146) */
   "iiii\0"
   "glVertex4i\0"
   "\0"
   /* _mesa_function_pool[2337]: Vertex4iv (offset 147) */
   "p\0"
   "glVertex4iv\0"
   "\0"
   /* _mesa_function_pool[2352]: Vertex4s (offset 148) */
   "iiii\0"
   "glVertex4s\0"
   "\0"
   /* _mesa_function_pool[2369]: Vertex4sv (offset 149) */
   "p\0"
   "glVertex4sv\0"
   "\0"
   /* _mesa_function_pool[2384]: ClipPlane (offset 150) */
   "ip\0"
   "glClipPlane\0"
   "\0"
   /* _mesa_function_pool[2400]: ColorMaterial (offset 151) */
   "ii\0"
   "glColorMaterial\0"
   "\0"
   /* _mesa_function_pool[2420]: CullFace (offset 152) */
   "i\0"
   "glCullFace\0"
   "\0"
   /* _mesa_function_pool[2434]: Fogf (offset 153) */
   "if\0"
   "glFogf\0"
   "\0"
   /* _mesa_function_pool[2445]: Fogfv (offset 154) */
   "ip\0"
   "glFogfv\0"
   "\0"
   /* _mesa_function_pool[2457]: Fogi (offset 155) */
   "ii\0"
   "glFogi\0"
   "\0"
   /* _mesa_function_pool[2468]: Fogiv (offset 156) */
   "ip\0"
   "glFogiv\0"
   "\0"
   /* _mesa_function_pool[2480]: FrontFace (offset 157) */
   "i\0"
   "glFrontFace\0"
   "\0"
   /* _mesa_function_pool[2495]: Hint (offset 158) */
   "ii\0"
   "glHint\0"
   "\0"
   /* _mesa_function_pool[2506]: Lightf (offset 159) */
   "iif\0"
   "glLightf\0"
   "\0"
   /* _mesa_function_pool[2520]: Lightfv (offset 160) */
   "iip\0"
   "glLightfv\0"
   "\0"
   /* _mesa_function_pool[2535]: Lighti (offset 161) */
   "iii\0"
   "glLighti\0"
   "\0"
   /* _mesa_function_pool[2549]: Lightiv (offset 162) */
   "iip\0"
   "glLightiv\0"
   "\0"
   /* _mesa_function_pool[2564]: LightModelf (offset 163) */
   "if\0"
   "glLightModelf\0"
   "\0"
   /* _mesa_function_pool[2582]: LightModelfv (offset 164) */
   "ip\0"
   "glLightModelfv\0"
   "\0"
   /* _mesa_function_pool[2601]: LightModeli (offset 165) */
   "ii\0"
   "glLightModeli\0"
   "\0"
   /* _mesa_function_pool[2619]: LightModeliv (offset 166) */
   "ip\0"
   "glLightModeliv\0"
   "\0"
   /* _mesa_function_pool[2638]: LineStipple (offset 167) */
   "ii\0"
   "glLineStipple\0"
   "\0"
   /* _mesa_function_pool[2656]: LineWidth (offset 168) */
   "f\0"
   "glLineWidth\0"
   "\0"
   /* _mesa_function_pool[2671]: Materialf (offset 169) */
   "iif\0"
   "glMaterialf\0"
   "\0"
   /* _mesa_function_pool[2688]: Materialfv (offset 170) */
   "iip\0"
   "glMaterialfv\0"
   "\0"
   /* _mesa_function_pool[2706]: Materiali (offset 171) */
   "iii\0"
   "glMateriali\0"
   "\0"
   /* _mesa_function_pool[2723]: Materialiv (offset 172) */
   "iip\0"
   "glMaterialiv\0"
   "\0"
   /* _mesa_function_pool[2741]: PointSize (offset 173) */
   "f\0"
   "glPointSize\0"
   "\0"
   /* _mesa_function_pool[2756]: PolygonMode (offset 174) */
   "ii\0"
   "glPolygonMode\0"
   "\0"
   /* _mesa_function_pool[2774]: PolygonStipple (offset 175) */
   "p\0"
   "glPolygonStipple\0"
   "\0"
   /* _mesa_function_pool[2794]: Scissor (offset 176) */
   "iiii\0"
   "glScissor\0"
   "\0"
   /* _mesa_function_pool[2810]: ShadeModel (offset 177) */
   "i\0"
   "glShadeModel\0"
   "\0"
   /* _mesa_function_pool[2826]: TexParameterf (offset 178) */
   "iif\0"
   "glTexParameterf\0"
   "\0"
   /* _mesa_function_pool[2847]: TexParameterfv (offset 179) */
   "iip\0"
   "glTexParameterfv\0"
   "\0"
   /* _mesa_function_pool[2869]: TexParameteri (offset 180) */
   "iii\0"
   "glTexParameteri\0"
   "\0"
   /* _mesa_function_pool[2890]: TexParameteriv (offset 181) */
   "iip\0"
   "glTexParameteriv\0"
   "\0"
   /* _mesa_function_pool[2912]: TexImage1D (offset 182) */
   "iiiiiiip\0"
   "glTexImage1D\0"
   "\0"
   /* _mesa_function_pool[2935]: TexImage2D (offset 183) */
   "iiiiiiiip\0"
   "glTexImage2D\0"
   "\0"
   /* _mesa_function_pool[2959]: TexEnvf (offset 184) */
   "iif\0"
   "glTexEnvf\0"
   "\0"
   /* _mesa_function_pool[2974]: TexEnvfv (offset 185) */
   "iip\0"
   "glTexEnvfv\0"
   "\0"
   /* _mesa_function_pool[2990]: TexEnvi (offset 186) */
   "iii\0"
   "glTexEnvi\0"
   "\0"
   /* _mesa_function_pool[3005]: TexEnviv (offset 187) */
   "iip\0"
   "glTexEnviv\0"
   "\0"
   /* _mesa_function_pool[3021]: TexGend (offset 188) */
   "iid\0"
   "glTexGend\0"
   "\0"
   /* _mesa_function_pool[3036]: TexGendv (offset 189) */
   "iip\0"
   "glTexGendv\0"
   "\0"
   /* _mesa_function_pool[3052]: TexGenf (offset 190) */
   "iif\0"
   "glTexGenf\0"
   "glTexGenfOES\0"
   "\0"
   /* _mesa_function_pool[3080]: TexGenfv (offset 191) */
   "iip\0"
   "glTexGenfv\0"
   "glTexGenfvOES\0"
   "\0"
   /* _mesa_function_pool[3110]: TexGeni (offset 192) */
   "iii\0"
   "glTexGeni\0"
   "glTexGeniOES\0"
   "\0"
   /* _mesa_function_pool[3138]: TexGeniv (offset 193) */
   "iip\0"
   "glTexGeniv\0"
   "glTexGenivOES\0"
   "\0"
   /* _mesa_function_pool[3168]: FeedbackBuffer (offset 194) */
   "iip\0"
   "glFeedbackBuffer\0"
   "\0"
   /* _mesa_function_pool[3190]: SelectBuffer (offset 195) */
   "ip\0"
   "glSelectBuffer\0"
   "\0"
   /* _mesa_function_pool[3209]: RenderMode (offset 196) */
   "i\0"
   "glRenderMode\0"
   "\0"
   /* _mesa_function_pool[3225]: InitNames (offset 197) */
   "\0"
   "glInitNames\0"
   "\0"
   /* _mesa_function_pool[3239]: LoadName (offset 198) */
   "i\0"
   "glLoadName\0"
   "\0"
   /* _mesa_function_pool[3253]: PassThrough (offset 199) */
   "f\0"
   "glPassThrough\0"
   "\0"
   /* _mesa_function_pool[3270]: PopName (offset 200) */
   "\0"
   "glPopName\0"
   "\0"
   /* _mesa_function_pool[3282]: PushName (offset 201) */
   "i\0"
   "glPushName\0"
   "\0"
   /* _mesa_function_pool[3296]: DrawBuffer (offset 202) */
   "i\0"
   "glDrawBuffer\0"
   "\0"
   /* _mesa_function_pool[3312]: Clear (offset 203) */
   "i\0"
   "glClear\0"
   "\0"
   /* _mesa_function_pool[3323]: ClearAccum (offset 204) */
   "ffff\0"
   "glClearAccum\0"
   "\0"
   /* _mesa_function_pool[3342]: ClearIndex (offset 205) */
   "f\0"
   "glClearIndex\0"
   "\0"
   /* _mesa_function_pool[3358]: ClearColor (offset 206) */
   "ffff\0"
   "glClearColor\0"
   "\0"
   /* _mesa_function_pool[3377]: ClearStencil (offset 207) */
   "i\0"
   "glClearStencil\0"
   "\0"
   /* _mesa_function_pool[3395]: ClearDepth (offset 208) */
   "d\0"
   "glClearDepth\0"
   "\0"
   /* _mesa_function_pool[3411]: StencilMask (offset 209) */
   "i\0"
   "glStencilMask\0"
   "\0"
   /* _mesa_function_pool[3428]: ColorMask (offset 210) */
   "iiii\0"
   "glColorMask\0"
   "\0"
   /* _mesa_function_pool[3446]: DepthMask (offset 211) */
   "i\0"
   "glDepthMask\0"
   "\0"
   /* _mesa_function_pool[3461]: IndexMask (offset 212) */
   "i\0"
   "glIndexMask\0"
   "\0"
   /* _mesa_function_pool[3476]: Accum (offset 213) */
   "if\0"
   "glAccum\0"
   "\0"
   /* _mesa_function_pool[3488]: Disable (offset 214) */
   "i\0"
   "glDisable\0"
   "\0"
   /* _mesa_function_pool[3501]: Enable (offset 215) */
   "i\0"
   "glEnable\0"
   "\0"
   /* _mesa_function_pool[3513]: Finish (offset 216) */
   "\0"
   "glFinish\0"
   "\0"
   /* _mesa_function_pool[3524]: Flush (offset 217) */
   "\0"
   "glFlush\0"
   "\0"
   /* _mesa_function_pool[3534]: PopAttrib (offset 218) */
   "\0"
   "glPopAttrib\0"
   "\0"
   /* _mesa_function_pool[3548]: PushAttrib (offset 219) */
   "i\0"
   "glPushAttrib\0"
   "\0"
   /* _mesa_function_pool[3564]: Map1d (offset 220) */
   "iddiip\0"
   "glMap1d\0"
   "\0"
   /* _mesa_function_pool[3580]: Map1f (offset 221) */
   "iffiip\0"
   "glMap1f\0"
   "\0"
   /* _mesa_function_pool[3596]: Map2d (offset 222) */
   "iddiiddiip\0"
   "glMap2d\0"
   "\0"
   /* _mesa_function_pool[3616]: Map2f (offset 223) */
   "iffiiffiip\0"
   "glMap2f\0"
   "\0"
   /* _mesa_function_pool[3636]: MapGrid1d (offset 224) */
   "idd\0"
   "glMapGrid1d\0"
   "\0"
   /* _mesa_function_pool[3653]: MapGrid1f (offset 225) */
   "iff\0"
   "glMapGrid1f\0"
   "\0"
   /* _mesa_function_pool[3670]: MapGrid2d (offset 226) */
   "iddidd\0"
   "glMapGrid2d\0"
   "\0"
   /* _mesa_function_pool[3690]: MapGrid2f (offset 227) */
   "iffiff\0"
   "glMapGrid2f\0"
   "\0"
   /* _mesa_function_pool[3710]: EvalCoord1d (offset 228) */
   "d\0"
   "glEvalCoord1d\0"
   "\0"
   /* _mesa_function_pool[3727]: EvalCoord1dv (offset 229) */
   "p\0"
   "glEvalCoord1dv\0"
   "\0"
   /* _mesa_function_pool[3745]: EvalCoord1f (offset 230) */
   "f\0"
   "glEvalCoord1f\0"
   "\0"
   /* _mesa_function_pool[3762]: EvalCoord1fv (offset 231) */
   "p\0"
   "glEvalCoord1fv\0"
   "\0"
   /* _mesa_function_pool[3780]: EvalCoord2d (offset 232) */
   "dd\0"
   "glEvalCoord2d\0"
   "\0"
   /* _mesa_function_pool[3798]: EvalCoord2dv (offset 233) */
   "p\0"
   "glEvalCoord2dv\0"
   "\0"
   /* _mesa_function_pool[3816]: EvalCoord2f (offset 234) */
   "ff\0"
   "glEvalCoord2f\0"
   "\0"
   /* _mesa_function_pool[3834]: EvalCoord2fv (offset 235) */
   "p\0"
   "glEvalCoord2fv\0"
   "\0"
   /* _mesa_function_pool[3852]: EvalMesh1 (offset 236) */
   "iii\0"
   "glEvalMesh1\0"
   "\0"
   /* _mesa_function_pool[3869]: EvalPoint1 (offset 237) */
   "i\0"
   "glEvalPoint1\0"
   "\0"
   /* _mesa_function_pool[3885]: EvalMesh2 (offset 238) */
   "iiiii\0"
   "glEvalMesh2\0"
   "\0"
   /* _mesa_function_pool[3904]: EvalPoint2 (offset 239) */
   "ii\0"
   "glEvalPoint2\0"
   "\0"
   /* _mesa_function_pool[3921]: AlphaFunc (offset 240) */
   "if\0"
   "glAlphaFunc\0"
   "\0"
   /* _mesa_function_pool[3937]: BlendFunc (offset 241) */
   "ii\0"
   "glBlendFunc\0"
   "\0"
   /* _mesa_function_pool[3953]: LogicOp (offset 242) */
   "i\0"
   "glLogicOp\0"
   "\0"
   /* _mesa_function_pool[3966]: StencilFunc (offset 243) */
   "iii\0"
   "glStencilFunc\0"
   "\0"
   /* _mesa_function_pool[3985]: StencilOp (offset 244) */
   "iii\0"
   "glStencilOp\0"
   "\0"
   /* _mesa_function_pool[4002]: DepthFunc (offset 245) */
   "i\0"
   "glDepthFunc\0"
   "\0"
   /* _mesa_function_pool[4017]: PixelZoom (offset 246) */
   "ff\0"
   "glPixelZoom\0"
   "\0"
   /* _mesa_function_pool[4033]: PixelTransferf (offset 247) */
   "if\0"
   "glPixelTransferf\0"
   "\0"
   /* _mesa_function_pool[4054]: PixelTransferi (offset 248) */
   "ii\0"
   "glPixelTransferi\0"
   "\0"
   /* _mesa_function_pool[4075]: PixelStoref (offset 249) */
   "if\0"
   "glPixelStoref\0"
   "\0"
   /* _mesa_function_pool[4093]: PixelStorei (offset 250) */
   "ii\0"
   "glPixelStorei\0"
   "\0"
   /* _mesa_function_pool[4111]: PixelMapfv (offset 251) */
   "iip\0"
   "glPixelMapfv\0"
   "\0"
   /* _mesa_function_pool[4129]: PixelMapuiv (offset 252) */
   "iip\0"
   "glPixelMapuiv\0"
   "\0"
   /* _mesa_function_pool[4148]: PixelMapusv (offset 253) */
   "iip\0"
   "glPixelMapusv\0"
   "\0"
   /* _mesa_function_pool[4167]: ReadBuffer (offset 254) */
   "i\0"
   "glReadBuffer\0"
   "glReadBufferNV\0"
   "\0"
   /* _mesa_function_pool[4198]: CopyPixels (offset 255) */
   "iiiii\0"
   "glCopyPixels\0"
   "\0"
   /* _mesa_function_pool[4218]: ReadPixels (offset 256) */
   "iiiiiip\0"
   "glReadPixels\0"
   "\0"
   /* _mesa_function_pool[4240]: DrawPixels (offset 257) */
   "iiiip\0"
   "glDrawPixels\0"
   "\0"
   /* _mesa_function_pool[4260]: GetBooleanv (offset 258) */
   "ip\0"
   "glGetBooleanv\0"
   "\0"
   /* _mesa_function_pool[4278]: GetClipPlane (offset 259) */
   "ip\0"
   "glGetClipPlane\0"
   "\0"
   /* _mesa_function_pool[4297]: GetDoublev (offset 260) */
   "ip\0"
   "glGetDoublev\0"
   "\0"
   /* _mesa_function_pool[4314]: GetError (offset 261) */
   "\0"
   "glGetError\0"
   "\0"
   /* _mesa_function_pool[4327]: GetFloatv (offset 262) */
   "ip\0"
   "glGetFloatv\0"
   "\0"
   /* _mesa_function_pool[4343]: GetIntegerv (offset 263) */
   "ip\0"
   "glGetIntegerv\0"
   "\0"
   /* _mesa_function_pool[4361]: GetLightfv (offset 264) */
   "iip\0"
   "glGetLightfv\0"
   "\0"
   /* _mesa_function_pool[4379]: GetLightiv (offset 265) */
   "iip\0"
   "glGetLightiv\0"
   "\0"
   /* _mesa_function_pool[4397]: GetMapdv (offset 266) */
   "iip\0"
   "glGetMapdv\0"
   "\0"
   /* _mesa_function_pool[4413]: GetMapfv (offset 267) */
   "iip\0"
   "glGetMapfv\0"
   "\0"
   /* _mesa_function_pool[4429]: GetMapiv (offset 268) */
   "iip\0"
   "glGetMapiv\0"
   "\0"
   /* _mesa_function_pool[4445]: GetMaterialfv (offset 269) */
   "iip\0"
   "glGetMaterialfv\0"
   "\0"
   /* _mesa_function_pool[4466]: GetMaterialiv (offset 270) */
   "iip\0"
   "glGetMaterialiv\0"
   "\0"
   /* _mesa_function_pool[4487]: GetPixelMapfv (offset 271) */
   "ip\0"
   "glGetPixelMapfv\0"
   "\0"
   /* _mesa_function_pool[4507]: GetPixelMapuiv (offset 272) */
   "ip\0"
   "glGetPixelMapuiv\0"
   "\0"
   /* _mesa_function_pool[4528]: GetPixelMapusv (offset 273) */
   "ip\0"
   "glGetPixelMapusv\0"
   "\0"
   /* _mesa_function_pool[4549]: GetPolygonStipple (offset 274) */
   "p\0"
   "glGetPolygonStipple\0"
   "\0"
   /* _mesa_function_pool[4572]: GetString (offset 275) */
   "i\0"
   "glGetString\0"
   "\0"
   /* _mesa_function_pool[4587]: GetTexEnvfv (offset 276) */
   "iip\0"
   "glGetTexEnvfv\0"
   "\0"
   /* _mesa_function_pool[4606]: GetTexEnviv (offset 277) */
   "iip\0"
   "glGetTexEnviv\0"
   "\0"
   /* _mesa_function_pool[4625]: GetTexGendv (offset 278) */
   "iip\0"
   "glGetTexGendv\0"
   "\0"
   /* _mesa_function_pool[4644]: GetTexGenfv (offset 279) */
   "iip\0"
   "glGetTexGenfv\0"
   "glGetTexGenfvOES\0"
   "\0"
   /* _mesa_function_pool[4680]: GetTexGeniv (offset 280) */
   "iip\0"
   "glGetTexGeniv\0"
   "glGetTexGenivOES\0"
   "\0"
   /* _mesa_function_pool[4716]: GetTexImage (offset 281) */
   "iiiip\0"
   "glGetTexImage\0"
   "\0"
   /* _mesa_function_pool[4737]: GetTexParameterfv (offset 282) */
   "iip\0"
   "glGetTexParameterfv\0"
   "\0"
   /* _mesa_function_pool[4762]: GetTexParameteriv (offset 283) */
   "iip\0"
   "glGetTexParameteriv\0"
   "\0"
   /* _mesa_function_pool[4787]: GetTexLevelParameterfv (offset 284) */
   "iiip\0"
   "glGetTexLevelParameterfv\0"
   "\0"
   /* _mesa_function_pool[4818]: GetTexLevelParameteriv (offset 285) */
   "iiip\0"
   "glGetTexLevelParameteriv\0"
   "\0"
   /* _mesa_function_pool[4849]: IsEnabled (offset 286) */
   "i\0"
   "glIsEnabled\0"
   "\0"
   /* _mesa_function_pool[4864]: IsList (offset 287) */
   "i\0"
   "glIsList\0"
   "\0"
   /* _mesa_function_pool[4876]: DepthRange (offset 288) */
   "dd\0"
   "glDepthRange\0"
   "\0"
   /* _mesa_function_pool[4893]: Frustum (offset 289) */
   "dddddd\0"
   "glFrustum\0"
   "\0"
   /* _mesa_function_pool[4911]: LoadIdentity (offset 290) */
   "\0"
   "glLoadIdentity\0"
   "\0"
   /* _mesa_function_pool[4928]: LoadMatrixf (offset 291) */
   "p\0"
   "glLoadMatrixf\0"
   "\0"
   /* _mesa_function_pool[4945]: LoadMatrixd (offset 292) */
   "p\0"
   "glLoadMatrixd\0"
   "\0"
   /* _mesa_function_pool[4962]: MatrixMode (offset 293) */
   "i\0"
   "glMatrixMode\0"
   "\0"
   /* _mesa_function_pool[4978]: MultMatrixf (offset 294) */
   "p\0"
   "glMultMatrixf\0"
   "\0"
   /* _mesa_function_pool[4995]: MultMatrixd (offset 295) */
   "p\0"
   "glMultMatrixd\0"
   "\0"
   /* _mesa_function_pool[5012]: Ortho (offset 296) */
   "dddddd\0"
   "glOrtho\0"
   "\0"
   /* _mesa_function_pool[5028]: PopMatrix (offset 297) */
   "\0"
   "glPopMatrix\0"
   "\0"
   /* _mesa_function_pool[5042]: PushMatrix (offset 298) */
   "\0"
   "glPushMatrix\0"
   "\0"
   /* _mesa_function_pool[5057]: Rotated (offset 299) */
   "dddd\0"
   "glRotated\0"
   "\0"
   /* _mesa_function_pool[5073]: Rotatef (offset 300) */
   "ffff\0"
   "glRotatef\0"
   "\0"
   /* _mesa_function_pool[5089]: Scaled (offset 301) */
   "ddd\0"
   "glScaled\0"
   "\0"
   /* _mesa_function_pool[5103]: Scalef (offset 302) */
   "fff\0"
   "glScalef\0"
   "\0"
   /* _mesa_function_pool[5117]: Translated (offset 303) */
   "ddd\0"
   "glTranslated\0"
   "\0"
   /* _mesa_function_pool[5135]: Translatef (offset 304) */
   "fff\0"
   "glTranslatef\0"
   "\0"
   /* _mesa_function_pool[5153]: Viewport (offset 305) */
   "iiii\0"
   "glViewport\0"
   "\0"
   /* _mesa_function_pool[5170]: ArrayElement (offset 306) */
   "i\0"
   "glArrayElement\0"
   "glArrayElementEXT\0"
   "\0"
   /* _mesa_function_pool[5206]: ColorPointer (offset 308) */
   "iiip\0"
   "glColorPointer\0"
   "\0"
   /* _mesa_function_pool[5227]: DisableClientState (offset 309) */
   "i\0"
   "glDisableClientState\0"
   "\0"
   /* _mesa_function_pool[5251]: DrawArrays (offset 310) */
   "iii\0"
   "glDrawArrays\0"
   "glDrawArraysEXT\0"
   "\0"
   /* _mesa_function_pool[5285]: DrawElements (offset 311) */
   "iiip\0"
   "glDrawElements\0"
   "\0"
   /* _mesa_function_pool[5306]: EdgeFlagPointer (offset 312) */
   "ip\0"
   "glEdgeFlagPointer\0"
   "\0"
   /* _mesa_function_pool[5328]: EnableClientState (offset 313) */
   "i\0"
   "glEnableClientState\0"
   "\0"
   /* _mesa_function_pool[5351]: GetPointerv (offset 329) */
   "ip\0"
   "glGetPointerv\0"
   "glGetPointervKHR\0"
   "glGetPointervEXT\0"
   "\0"
   /* _mesa_function_pool[5403]: IndexPointer (offset 314) */
   "iip\0"
   "glIndexPointer\0"
   "\0"
   /* _mesa_function_pool[5423]: InterleavedArrays (offset 317) */
   "iip\0"
   "glInterleavedArrays\0"
   "\0"
   /* _mesa_function_pool[5448]: NormalPointer (offset 318) */
   "iip\0"
   "glNormalPointer\0"
   "\0"
   /* _mesa_function_pool[5469]: TexCoordPointer (offset 320) */
   "iiip\0"
   "glTexCoordPointer\0"
   "\0"
   /* _mesa_function_pool[5493]: VertexPointer (offset 321) */
   "iiip\0"
   "glVertexPointer\0"
   "\0"
   /* _mesa_function_pool[5515]: PolygonOffset (offset 319) */
   "ff\0"
   "glPolygonOffset\0"
   "\0"
   /* _mesa_function_pool[5535]: CopyTexImage1D (offset 323) */
   "iiiiiii\0"
   "glCopyTexImage1D\0"
   "glCopyTexImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[5581]: CopyTexImage2D (offset 324) */
   "iiiiiiii\0"
   "glCopyTexImage2D\0"
   "glCopyTexImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[5628]: CopyTexSubImage1D (offset 325) */
   "iiiiii\0"
   "glCopyTexSubImage1D\0"
   "glCopyTexSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[5679]: CopyTexSubImage2D (offset 326) */
   "iiiiiiii\0"
   "glCopyTexSubImage2D\0"
   "glCopyTexSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[5732]: TexSubImage1D (offset 332) */
   "iiiiiip\0"
   "glTexSubImage1D\0"
   "glTexSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[5776]: TexSubImage2D (offset 333) */
   "iiiiiiiip\0"
   "glTexSubImage2D\0"
   "glTexSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[5822]: AreTexturesResident (offset 322) */
   "ipp\0"
   "glAreTexturesResident\0"
   "glAreTexturesResidentEXT\0"
   "\0"
   /* _mesa_function_pool[5874]: BindTexture (offset 307) */
   "ii\0"
   "glBindTexture\0"
   "glBindTextureEXT\0"
   "\0"
   /* _mesa_function_pool[5909]: DeleteTextures (offset 327) */
   "ip\0"
   "glDeleteTextures\0"
   "glDeleteTexturesEXT\0"
   "\0"
   /* _mesa_function_pool[5950]: GenTextures (offset 328) */
   "ip\0"
   "glGenTextures\0"
   "glGenTexturesEXT\0"
   "\0"
   /* _mesa_function_pool[5985]: IsTexture (offset 330) */
   "i\0"
   "glIsTexture\0"
   "glIsTextureEXT\0"
   "\0"
   /* _mesa_function_pool[6015]: PrioritizeTextures (offset 331) */
   "ipp\0"
   "glPrioritizeTextures\0"
   "glPrioritizeTexturesEXT\0"
   "\0"
   /* _mesa_function_pool[6065]: Indexub (offset 315) */
   "i\0"
   "glIndexub\0"
   "\0"
   /* _mesa_function_pool[6078]: Indexubv (offset 316) */
   "p\0"
   "glIndexubv\0"
   "\0"
   /* _mesa_function_pool[6092]: PopClientAttrib (offset 334) */
   "\0"
   "glPopClientAttrib\0"
   "\0"
   /* _mesa_function_pool[6112]: PushClientAttrib (offset 335) */
   "i\0"
   "glPushClientAttrib\0"
   "\0"
   /* _mesa_function_pool[6134]: BlendColor (offset 336) */
   "ffff\0"
   "glBlendColor\0"
   "glBlendColorEXT\0"
   "\0"
   /* _mesa_function_pool[6169]: BlendEquation (offset 337) */
   "i\0"
   "glBlendEquation\0"
   "glBlendEquationEXT\0"
   "glBlendEquationOES\0"
   "\0"
   /* _mesa_function_pool[6226]: DrawRangeElements (offset 338) */
   "iiiiip\0"
   "glDrawRangeElements\0"
   "glDrawRangeElementsEXT\0"
   "\0"
   /* _mesa_function_pool[6277]: ColorTable (offset 339) */
   "iiiiip\0"
   "glColorTable\0"
   "\0"
   /* _mesa_function_pool[6298]: ColorTableParameterfv (offset 340) */
   "iip\0"
   "glColorTableParameterfv\0"
   "\0"
   /* _mesa_function_pool[6327]: ColorTableParameteriv (offset 341) */
   "iip\0"
   "glColorTableParameteriv\0"
   "\0"
   /* _mesa_function_pool[6356]: CopyColorTable (offset 342) */
   "iiiii\0"
   "glCopyColorTable\0"
   "\0"
   /* _mesa_function_pool[6380]: GetColorTable (offset 343) */
   "iiip\0"
   "glGetColorTable\0"
   "\0"
   /* _mesa_function_pool[6402]: GetColorTableParameterfv (offset 344) */
   "iip\0"
   "glGetColorTableParameterfv\0"
   "\0"
   /* _mesa_function_pool[6434]: GetColorTableParameteriv (offset 345) */
   "iip\0"
   "glGetColorTableParameteriv\0"
   "\0"
   /* _mesa_function_pool[6466]: ColorSubTable (offset 346) */
   "iiiiip\0"
   "glColorSubTable\0"
   "glColorSubTableEXT\0"
   "\0"
   /* _mesa_function_pool[6509]: CopyColorSubTable (offset 347) */
   "iiiii\0"
   "glCopyColorSubTable\0"
   "glCopyColorSubTableEXT\0"
   "\0"
   /* _mesa_function_pool[6559]: ConvolutionFilter1D (offset 348) */
   "iiiiip\0"
   "glConvolutionFilter1D\0"
   "\0"
   /* _mesa_function_pool[6589]: ConvolutionFilter2D (offset 349) */
   "iiiiiip\0"
   "glConvolutionFilter2D\0"
   "\0"
   /* _mesa_function_pool[6620]: ConvolutionParameterf (offset 350) */
   "iif\0"
   "glConvolutionParameterf\0"
   "\0"
   /* _mesa_function_pool[6649]: ConvolutionParameterfv (offset 351) */
   "iip\0"
   "glConvolutionParameterfv\0"
   "\0"
   /* _mesa_function_pool[6679]: ConvolutionParameteri (offset 352) */
   "iii\0"
   "glConvolutionParameteri\0"
   "\0"
   /* _mesa_function_pool[6708]: ConvolutionParameteriv (offset 353) */
   "iip\0"
   "glConvolutionParameteriv\0"
   "\0"
   /* _mesa_function_pool[6738]: CopyConvolutionFilter1D (offset 354) */
   "iiiii\0"
   "glCopyConvolutionFilter1D\0"
   "\0"
   /* _mesa_function_pool[6771]: CopyConvolutionFilter2D (offset 355) */
   "iiiiii\0"
   "glCopyConvolutionFilter2D\0"
   "\0"
   /* _mesa_function_pool[6805]: GetConvolutionFilter (offset 356) */
   "iiip\0"
   "glGetConvolutionFilter\0"
   "\0"
   /* _mesa_function_pool[6834]: GetConvolutionParameterfv (offset 357) */
   "iip\0"
   "glGetConvolutionParameterfv\0"
   "\0"
   /* _mesa_function_pool[6867]: GetConvolutionParameteriv (offset 358) */
   "iip\0"
   "glGetConvolutionParameteriv\0"
   "\0"
   /* _mesa_function_pool[6900]: GetSeparableFilter (offset 359) */
   "iiippp\0"
   "glGetSeparableFilter\0"
   "\0"
   /* _mesa_function_pool[6929]: SeparableFilter2D (offset 360) */
   "iiiiiipp\0"
   "glSeparableFilter2D\0"
   "\0"
   /* _mesa_function_pool[6959]: GetHistogram (offset 361) */
   "iiiip\0"
   "glGetHistogram\0"
   "\0"
   /* _mesa_function_pool[6981]: GetHistogramParameterfv (offset 362) */
   "iip\0"
   "glGetHistogramParameterfv\0"
   "\0"
   /* _mesa_function_pool[7012]: GetHistogramParameteriv (offset 363) */
   "iip\0"
   "glGetHistogramParameteriv\0"
   "\0"
   /* _mesa_function_pool[7043]: GetMinmax (offset 364) */
   "iiiip\0"
   "glGetMinmax\0"
   "\0"
   /* _mesa_function_pool[7062]: GetMinmaxParameterfv (offset 365) */
   "iip\0"
   "glGetMinmaxParameterfv\0"
   "\0"
   /* _mesa_function_pool[7090]: GetMinmaxParameteriv (offset 366) */
   "iip\0"
   "glGetMinmaxParameteriv\0"
   "\0"
   /* _mesa_function_pool[7118]: Histogram (offset 367) */
   "iiii\0"
   "glHistogram\0"
   "\0"
   /* _mesa_function_pool[7136]: Minmax (offset 368) */
   "iii\0"
   "glMinmax\0"
   "\0"
   /* _mesa_function_pool[7150]: ResetHistogram (offset 369) */
   "i\0"
   "glResetHistogram\0"
   "\0"
   /* _mesa_function_pool[7170]: ResetMinmax (offset 370) */
   "i\0"
   "glResetMinmax\0"
   "\0"
   /* _mesa_function_pool[7187]: TexImage3D (offset 371) */
   "iiiiiiiiip\0"
   "glTexImage3D\0"
   "glTexImage3DEXT\0"
   "glTexImage3DOES\0"
   "\0"
   /* _mesa_function_pool[7244]: TexSubImage3D (offset 372) */
   "iiiiiiiiiip\0"
   "glTexSubImage3D\0"
   "glTexSubImage3DEXT\0"
   "glTexSubImage3DOES\0"
   "\0"
   /* _mesa_function_pool[7311]: CopyTexSubImage3D (offset 373) */
   "iiiiiiiii\0"
   "glCopyTexSubImage3D\0"
   "glCopyTexSubImage3DEXT\0"
   "glCopyTexSubImage3DOES\0"
   "\0"
   /* _mesa_function_pool[7388]: ActiveTexture (offset 374) */
   "i\0"
   "glActiveTexture\0"
   "glActiveTextureARB\0"
   "\0"
   /* _mesa_function_pool[7426]: ClientActiveTexture (offset 375) */
   "i\0"
   "glClientActiveTexture\0"
   "glClientActiveTextureARB\0"
   "\0"
   /* _mesa_function_pool[7476]: MultiTexCoord1d (offset 376) */
   "id\0"
   "glMultiTexCoord1d\0"
   "glMultiTexCoord1dARB\0"
   "\0"
   /* _mesa_function_pool[7519]: MultiTexCoord1dv (offset 377) */
   "ip\0"
   "glMultiTexCoord1dv\0"
   "glMultiTexCoord1dvARB\0"
   "\0"
   /* _mesa_function_pool[7564]: MultiTexCoord1fARB (offset 378) */
   "if\0"
   "glMultiTexCoord1f\0"
   "glMultiTexCoord1fARB\0"
   "\0"
   /* _mesa_function_pool[7607]: MultiTexCoord1fvARB (offset 379) */
   "ip\0"
   "glMultiTexCoord1fv\0"
   "glMultiTexCoord1fvARB\0"
   "\0"
   /* _mesa_function_pool[7652]: MultiTexCoord1i (offset 380) */
   "ii\0"
   "glMultiTexCoord1i\0"
   "glMultiTexCoord1iARB\0"
   "\0"
   /* _mesa_function_pool[7695]: MultiTexCoord1iv (offset 381) */
   "ip\0"
   "glMultiTexCoord1iv\0"
   "glMultiTexCoord1ivARB\0"
   "\0"
   /* _mesa_function_pool[7740]: MultiTexCoord1s (offset 382) */
   "ii\0"
   "glMultiTexCoord1s\0"
   "glMultiTexCoord1sARB\0"
   "\0"
   /* _mesa_function_pool[7783]: MultiTexCoord1sv (offset 383) */
   "ip\0"
   "glMultiTexCoord1sv\0"
   "glMultiTexCoord1svARB\0"
   "\0"
   /* _mesa_function_pool[7828]: MultiTexCoord2d (offset 384) */
   "idd\0"
   "glMultiTexCoord2d\0"
   "glMultiTexCoord2dARB\0"
   "\0"
   /* _mesa_function_pool[7872]: MultiTexCoord2dv (offset 385) */
   "ip\0"
   "glMultiTexCoord2dv\0"
   "glMultiTexCoord2dvARB\0"
   "\0"
   /* _mesa_function_pool[7917]: MultiTexCoord2fARB (offset 386) */
   "iff\0"
   "glMultiTexCoord2f\0"
   "glMultiTexCoord2fARB\0"
   "\0"
   /* _mesa_function_pool[7961]: MultiTexCoord2fvARB (offset 387) */
   "ip\0"
   "glMultiTexCoord2fv\0"
   "glMultiTexCoord2fvARB\0"
   "\0"
   /* _mesa_function_pool[8006]: MultiTexCoord2i (offset 388) */
   "iii\0"
   "glMultiTexCoord2i\0"
   "glMultiTexCoord2iARB\0"
   "\0"
   /* _mesa_function_pool[8050]: MultiTexCoord2iv (offset 389) */
   "ip\0"
   "glMultiTexCoord2iv\0"
   "glMultiTexCoord2ivARB\0"
   "\0"
   /* _mesa_function_pool[8095]: MultiTexCoord2s (offset 390) */
   "iii\0"
   "glMultiTexCoord2s\0"
   "glMultiTexCoord2sARB\0"
   "\0"
   /* _mesa_function_pool[8139]: MultiTexCoord2sv (offset 391) */
   "ip\0"
   "glMultiTexCoord2sv\0"
   "glMultiTexCoord2svARB\0"
   "\0"
   /* _mesa_function_pool[8184]: MultiTexCoord3d (offset 392) */
   "iddd\0"
   "glMultiTexCoord3d\0"
   "glMultiTexCoord3dARB\0"
   "\0"
   /* _mesa_function_pool[8229]: MultiTexCoord3dv (offset 393) */
   "ip\0"
   "glMultiTexCoord3dv\0"
   "glMultiTexCoord3dvARB\0"
   "\0"
   /* _mesa_function_pool[8274]: MultiTexCoord3fARB (offset 394) */
   "ifff\0"
   "glMultiTexCoord3f\0"
   "glMultiTexCoord3fARB\0"
   "\0"
   /* _mesa_function_pool[8319]: MultiTexCoord3fvARB (offset 395) */
   "ip\0"
   "glMultiTexCoord3fv\0"
   "glMultiTexCoord3fvARB\0"
   "\0"
   /* _mesa_function_pool[8364]: MultiTexCoord3i (offset 396) */
   "iiii\0"
   "glMultiTexCoord3i\0"
   "glMultiTexCoord3iARB\0"
   "\0"
   /* _mesa_function_pool[8409]: MultiTexCoord3iv (offset 397) */
   "ip\0"
   "glMultiTexCoord3iv\0"
   "glMultiTexCoord3ivARB\0"
   "\0"
   /* _mesa_function_pool[8454]: MultiTexCoord3s (offset 398) */
   "iiii\0"
   "glMultiTexCoord3s\0"
   "glMultiTexCoord3sARB\0"
   "\0"
   /* _mesa_function_pool[8499]: MultiTexCoord3sv (offset 399) */
   "ip\0"
   "glMultiTexCoord3sv\0"
   "glMultiTexCoord3svARB\0"
   "\0"
   /* _mesa_function_pool[8544]: MultiTexCoord4d (offset 400) */
   "idddd\0"
   "glMultiTexCoord4d\0"
   "glMultiTexCoord4dARB\0"
   "\0"
   /* _mesa_function_pool[8590]: MultiTexCoord4dv (offset 401) */
   "ip\0"
   "glMultiTexCoord4dv\0"
   "glMultiTexCoord4dvARB\0"
   "\0"
   /* _mesa_function_pool[8635]: MultiTexCoord4fARB (offset 402) */
   "iffff\0"
   "glMultiTexCoord4f\0"
   "glMultiTexCoord4fARB\0"
   "\0"
   /* _mesa_function_pool[8681]: MultiTexCoord4fvARB (offset 403) */
   "ip\0"
   "glMultiTexCoord4fv\0"
   "glMultiTexCoord4fvARB\0"
   "\0"
   /* _mesa_function_pool[8726]: MultiTexCoord4i (offset 404) */
   "iiiii\0"
   "glMultiTexCoord4i\0"
   "glMultiTexCoord4iARB\0"
   "\0"
   /* _mesa_function_pool[8772]: MultiTexCoord4iv (offset 405) */
   "ip\0"
   "glMultiTexCoord4iv\0"
   "glMultiTexCoord4ivARB\0"
   "\0"
   /* _mesa_function_pool[8817]: MultiTexCoord4s (offset 406) */
   "iiiii\0"
   "glMultiTexCoord4s\0"
   "glMultiTexCoord4sARB\0"
   "\0"
   /* _mesa_function_pool[8863]: MultiTexCoord4sv (offset 407) */
   "ip\0"
   "glMultiTexCoord4sv\0"
   "glMultiTexCoord4svARB\0"
   "\0"
   /* _mesa_function_pool[8908]: LoadTransposeMatrixf (will be remapped) */
   "p\0"
   "glLoadTransposeMatrixf\0"
   "glLoadTransposeMatrixfARB\0"
   "\0"
   /* _mesa_function_pool[8960]: LoadTransposeMatrixd (will be remapped) */
   "p\0"
   "glLoadTransposeMatrixd\0"
   "glLoadTransposeMatrixdARB\0"
   "\0"
   /* _mesa_function_pool[9012]: MultTransposeMatrixf (will be remapped) */
   "p\0"
   "glMultTransposeMatrixf\0"
   "glMultTransposeMatrixfARB\0"
   "\0"
   /* _mesa_function_pool[9064]: MultTransposeMatrixd (will be remapped) */
   "p\0"
   "glMultTransposeMatrixd\0"
   "glMultTransposeMatrixdARB\0"
   "\0"
   /* _mesa_function_pool[9116]: SampleCoverage (will be remapped) */
   "fi\0"
   "glSampleCoverage\0"
   "glSampleCoverageARB\0"
   "\0"
   /* _mesa_function_pool[9157]: CompressedTexImage3D (will be remapped) */
   "iiiiiiiip\0"
   "glCompressedTexImage3D\0"
   "glCompressedTexImage3DARB\0"
   "glCompressedTexImage3DOES\0"
   "\0"
   /* _mesa_function_pool[9243]: CompressedTexImage2D (will be remapped) */
   "iiiiiiip\0"
   "glCompressedTexImage2D\0"
   "glCompressedTexImage2DARB\0"
   "\0"
   /* _mesa_function_pool[9302]: CompressedTexImage1D (will be remapped) */
   "iiiiiip\0"
   "glCompressedTexImage1D\0"
   "glCompressedTexImage1DARB\0"
   "\0"
   /* _mesa_function_pool[9360]: CompressedTexSubImage3D (will be remapped) */
   "iiiiiiiiiip\0"
   "glCompressedTexSubImage3D\0"
   "glCompressedTexSubImage3DARB\0"
   "glCompressedTexSubImage3DOES\0"
   "\0"
   /* _mesa_function_pool[9457]: CompressedTexSubImage2D (will be remapped) */
   "iiiiiiiip\0"
   "glCompressedTexSubImage2D\0"
   "glCompressedTexSubImage2DARB\0"
   "\0"
   /* _mesa_function_pool[9523]: CompressedTexSubImage1D (will be remapped) */
   "iiiiiip\0"
   "glCompressedTexSubImage1D\0"
   "glCompressedTexSubImage1DARB\0"
   "\0"
   /* _mesa_function_pool[9587]: GetCompressedTexImage (will be remapped) */
   "iip\0"
   "glGetCompressedTexImage\0"
   "glGetCompressedTexImageARB\0"
   "\0"
   /* _mesa_function_pool[9643]: BlendFuncSeparate (will be remapped) */
   "iiii\0"
   "glBlendFuncSeparate\0"
   "glBlendFuncSeparateEXT\0"
   "glBlendFuncSeparateINGR\0"
   "glBlendFuncSeparateOES\0"
   "\0"
   /* _mesa_function_pool[9739]: FogCoordfEXT (will be remapped) */
   "f\0"
   "glFogCoordf\0"
   "glFogCoordfEXT\0"
   "\0"
   /* _mesa_function_pool[9769]: FogCoordfvEXT (will be remapped) */
   "p\0"
   "glFogCoordfv\0"
   "glFogCoordfvEXT\0"
   "\0"
   /* _mesa_function_pool[9801]: FogCoordd (will be remapped) */
   "d\0"
   "glFogCoordd\0"
   "glFogCoorddEXT\0"
   "\0"
   /* _mesa_function_pool[9831]: FogCoorddv (will be remapped) */
   "p\0"
   "glFogCoorddv\0"
   "glFogCoorddvEXT\0"
   "\0"
   /* _mesa_function_pool[9863]: FogCoordPointer (will be remapped) */
   "iip\0"
   "glFogCoordPointer\0"
   "glFogCoordPointerEXT\0"
   "\0"
   /* _mesa_function_pool[9907]: MultiDrawArrays (will be remapped) */
   "ippi\0"
   "glMultiDrawArrays\0"
   "glMultiDrawArraysEXT\0"
   "\0"
   /* _mesa_function_pool[9952]: MultiDrawElements (will be remapped) */
   "ipipi\0"
   "glMultiDrawElementsEXT\0"
   "glMultiDrawElements\0"
   "\0"
   /* _mesa_function_pool[10002]: PointParameterf (will be remapped) */
   "if\0"
   "glPointParameterf\0"
   "glPointParameterfARB\0"
   "glPointParameterfEXT\0"
   "glPointParameterfSGIS\0"
   "\0"
   /* _mesa_function_pool[10088]: PointParameterfv (will be remapped) */
   "ip\0"
   "glPointParameterfv\0"
   "glPointParameterfvARB\0"
   "glPointParameterfvEXT\0"
   "glPointParameterfvSGIS\0"
   "\0"
   /* _mesa_function_pool[10178]: PointParameteri (will be remapped) */
   "ii\0"
   "glPointParameteri\0"
   "glPointParameteriNV\0"
   "\0"
   /* _mesa_function_pool[10220]: PointParameteriv (will be remapped) */
   "ip\0"
   "glPointParameteriv\0"
   "glPointParameterivNV\0"
   "\0"
   /* _mesa_function_pool[10264]: SecondaryColor3b (will be remapped) */
   "iii\0"
   "glSecondaryColor3b\0"
   "glSecondaryColor3bEXT\0"
   "\0"
   /* _mesa_function_pool[10310]: SecondaryColor3bv (will be remapped) */
   "p\0"
   "glSecondaryColor3bv\0"
   "glSecondaryColor3bvEXT\0"
   "\0"
   /* _mesa_function_pool[10356]: SecondaryColor3d (will be remapped) */
   "ddd\0"
   "glSecondaryColor3d\0"
   "glSecondaryColor3dEXT\0"
   "\0"
   /* _mesa_function_pool[10402]: SecondaryColor3dv (will be remapped) */
   "p\0"
   "glSecondaryColor3dv\0"
   "glSecondaryColor3dvEXT\0"
   "\0"
   /* _mesa_function_pool[10448]: SecondaryColor3fEXT (will be remapped) */
   "fff\0"
   "glSecondaryColor3f\0"
   "glSecondaryColor3fEXT\0"
   "\0"
   /* _mesa_function_pool[10494]: SecondaryColor3fvEXT (will be remapped) */
   "p\0"
   "glSecondaryColor3fv\0"
   "glSecondaryColor3fvEXT\0"
   "\0"
   /* _mesa_function_pool[10540]: SecondaryColor3i (will be remapped) */
   "iii\0"
   "glSecondaryColor3i\0"
   "glSecondaryColor3iEXT\0"
   "\0"
   /* _mesa_function_pool[10586]: SecondaryColor3iv (will be remapped) */
   "p\0"
   "glSecondaryColor3iv\0"
   "glSecondaryColor3ivEXT\0"
   "\0"
   /* _mesa_function_pool[10632]: SecondaryColor3s (will be remapped) */
   "iii\0"
   "glSecondaryColor3s\0"
   "glSecondaryColor3sEXT\0"
   "\0"
   /* _mesa_function_pool[10678]: SecondaryColor3sv (will be remapped) */
   "p\0"
   "glSecondaryColor3sv\0"
   "glSecondaryColor3svEXT\0"
   "\0"
   /* _mesa_function_pool[10724]: SecondaryColor3ub (will be remapped) */
   "iii\0"
   "glSecondaryColor3ub\0"
   "glSecondaryColor3ubEXT\0"
   "\0"
   /* _mesa_function_pool[10772]: SecondaryColor3ubv (will be remapped) */
   "p\0"
   "glSecondaryColor3ubv\0"
   "glSecondaryColor3ubvEXT\0"
   "\0"
   /* _mesa_function_pool[10820]: SecondaryColor3ui (will be remapped) */
   "iii\0"
   "glSecondaryColor3ui\0"
   "glSecondaryColor3uiEXT\0"
   "\0"
   /* _mesa_function_pool[10868]: SecondaryColor3uiv (will be remapped) */
   "p\0"
   "glSecondaryColor3uiv\0"
   "glSecondaryColor3uivEXT\0"
   "\0"
   /* _mesa_function_pool[10916]: SecondaryColor3us (will be remapped) */
   "iii\0"
   "glSecondaryColor3us\0"
   "glSecondaryColor3usEXT\0"
   "\0"
   /* _mesa_function_pool[10964]: SecondaryColor3usv (will be remapped) */
   "p\0"
   "glSecondaryColor3usv\0"
   "glSecondaryColor3usvEXT\0"
   "\0"
   /* _mesa_function_pool[11012]: SecondaryColorPointer (will be remapped) */
   "iiip\0"
   "glSecondaryColorPointer\0"
   "glSecondaryColorPointerEXT\0"
   "\0"
   /* _mesa_function_pool[11069]: WindowPos2d (will be remapped) */
   "dd\0"
   "glWindowPos2d\0"
   "glWindowPos2dARB\0"
   "glWindowPos2dMESA\0"
   "\0"
   /* _mesa_function_pool[11122]: WindowPos2dv (will be remapped) */
   "p\0"
   "glWindowPos2dv\0"
   "glWindowPos2dvARB\0"
   "glWindowPos2dvMESA\0"
   "\0"
   /* _mesa_function_pool[11177]: WindowPos2f (will be remapped) */
   "ff\0"
   "glWindowPos2f\0"
   "glWindowPos2fARB\0"
   "glWindowPos2fMESA\0"
   "\0"
   /* _mesa_function_pool[11230]: WindowPos2fv (will be remapped) */
   "p\0"
   "glWindowPos2fv\0"
   "glWindowPos2fvARB\0"
   "glWindowPos2fvMESA\0"
   "\0"
   /* _mesa_function_pool[11285]: WindowPos2i (will be remapped) */
   "ii\0"
   "glWindowPos2i\0"
   "glWindowPos2iARB\0"
   "glWindowPos2iMESA\0"
   "\0"
   /* _mesa_function_pool[11338]: WindowPos2iv (will be remapped) */
   "p\0"
   "glWindowPos2iv\0"
   "glWindowPos2ivARB\0"
   "glWindowPos2ivMESA\0"
   "\0"
   /* _mesa_function_pool[11393]: WindowPos2s (will be remapped) */
   "ii\0"
   "glWindowPos2s\0"
   "glWindowPos2sARB\0"
   "glWindowPos2sMESA\0"
   "\0"
   /* _mesa_function_pool[11446]: WindowPos2sv (will be remapped) */
   "p\0"
   "glWindowPos2sv\0"
   "glWindowPos2svARB\0"
   "glWindowPos2svMESA\0"
   "\0"
   /* _mesa_function_pool[11501]: WindowPos3d (will be remapped) */
   "ddd\0"
   "glWindowPos3d\0"
   "glWindowPos3dARB\0"
   "glWindowPos3dMESA\0"
   "\0"
   /* _mesa_function_pool[11555]: WindowPos3dv (will be remapped) */
   "p\0"
   "glWindowPos3dv\0"
   "glWindowPos3dvARB\0"
   "glWindowPos3dvMESA\0"
   "\0"
   /* _mesa_function_pool[11610]: WindowPos3f (will be remapped) */
   "fff\0"
   "glWindowPos3f\0"
   "glWindowPos3fARB\0"
   "glWindowPos3fMESA\0"
   "\0"
   /* _mesa_function_pool[11664]: WindowPos3fv (will be remapped) */
   "p\0"
   "glWindowPos3fv\0"
   "glWindowPos3fvARB\0"
   "glWindowPos3fvMESA\0"
   "\0"
   /* _mesa_function_pool[11719]: WindowPos3i (will be remapped) */
   "iii\0"
   "glWindowPos3i\0"
   "glWindowPos3iARB\0"
   "glWindowPos3iMESA\0"
   "\0"
   /* _mesa_function_pool[11773]: WindowPos3iv (will be remapped) */
   "p\0"
   "glWindowPos3iv\0"
   "glWindowPos3ivARB\0"
   "glWindowPos3ivMESA\0"
   "\0"
   /* _mesa_function_pool[11828]: WindowPos3s (will be remapped) */
   "iii\0"
   "glWindowPos3s\0"
   "glWindowPos3sARB\0"
   "glWindowPos3sMESA\0"
   "\0"
   /* _mesa_function_pool[11882]: WindowPos3sv (will be remapped) */
   "p\0"
   "glWindowPos3sv\0"
   "glWindowPos3svARB\0"
   "glWindowPos3svMESA\0"
   "\0"
   /* _mesa_function_pool[11937]: BindBuffer (will be remapped) */
   "ii\0"
   "glBindBuffer\0"
   "glBindBufferARB\0"
   "\0"
   /* _mesa_function_pool[11970]: BufferData (will be remapped) */
   "iipi\0"
   "glBufferData\0"
   "glBufferDataARB\0"
   "\0"
   /* _mesa_function_pool[12005]: BufferSubData (will be remapped) */
   "iiip\0"
   "glBufferSubData\0"
   "glBufferSubDataARB\0"
   "\0"
   /* _mesa_function_pool[12046]: DeleteBuffers (will be remapped) */
   "ip\0"
   "glDeleteBuffers\0"
   "glDeleteBuffersARB\0"
   "\0"
   /* _mesa_function_pool[12085]: GenBuffers (will be remapped) */
   "ip\0"
   "glGenBuffers\0"
   "glGenBuffersARB\0"
   "\0"
   /* _mesa_function_pool[12118]: GetBufferParameteriv (will be remapped) */
   "iip\0"
   "glGetBufferParameteriv\0"
   "glGetBufferParameterivARB\0"
   "\0"
   /* _mesa_function_pool[12172]: GetBufferPointerv (will be remapped) */
   "iip\0"
   "glGetBufferPointerv\0"
   "glGetBufferPointervARB\0"
   "glGetBufferPointervOES\0"
   "\0"
   /* _mesa_function_pool[12243]: GetBufferSubData (will be remapped) */
   "iiip\0"
   "glGetBufferSubData\0"
   "glGetBufferSubDataARB\0"
   "\0"
   /* _mesa_function_pool[12290]: IsBuffer (will be remapped) */
   "i\0"
   "glIsBuffer\0"
   "glIsBufferARB\0"
   "\0"
   /* _mesa_function_pool[12318]: MapBuffer (will be remapped) */
   "ii\0"
   "glMapBuffer\0"
   "glMapBufferARB\0"
   "glMapBufferOES\0"
   "\0"
   /* _mesa_function_pool[12364]: UnmapBuffer (will be remapped) */
   "i\0"
   "glUnmapBuffer\0"
   "glUnmapBufferARB\0"
   "glUnmapBufferOES\0"
   "\0"
   /* _mesa_function_pool[12415]: GenQueries (will be remapped) */
   "ip\0"
   "glGenQueries\0"
   "glGenQueriesARB\0"
   "glGenQueriesEXT\0"
   "\0"
   /* _mesa_function_pool[12464]: DeleteQueries (will be remapped) */
   "ip\0"
   "glDeleteQueries\0"
   "glDeleteQueriesARB\0"
   "glDeleteQueriesEXT\0"
   "\0"
   /* _mesa_function_pool[12522]: IsQuery (will be remapped) */
   "i\0"
   "glIsQuery\0"
   "glIsQueryARB\0"
   "glIsQueryEXT\0"
   "\0"
   /* _mesa_function_pool[12561]: BeginQuery (will be remapped) */
   "ii\0"
   "glBeginQuery\0"
   "glBeginQueryARB\0"
   "glBeginQueryEXT\0"
   "\0"
   /* _mesa_function_pool[12610]: EndQuery (will be remapped) */
   "i\0"
   "glEndQuery\0"
   "glEndQueryARB\0"
   "glEndQueryEXT\0"
   "\0"
   /* _mesa_function_pool[12652]: GetQueryiv (will be remapped) */
   "iip\0"
   "glGetQueryiv\0"
   "glGetQueryivARB\0"
   "glGetQueryivEXT\0"
   "\0"
   /* _mesa_function_pool[12702]: GetQueryObjectiv (will be remapped) */
   "iip\0"
   "glGetQueryObjectiv\0"
   "glGetQueryObjectivARB\0"
   "glGetQueryObjectivEXT\0"
   "\0"
   /* _mesa_function_pool[12770]: GetQueryObjectuiv (will be remapped) */
   "iip\0"
   "glGetQueryObjectuiv\0"
   "glGetQueryObjectuivARB\0"
   "glGetQueryObjectuivEXT\0"
   "\0"
   /* _mesa_function_pool[12841]: BlendEquationSeparate (will be remapped) */
   "ii\0"
   "glBlendEquationSeparate\0"
   "glBlendEquationSeparateEXT\0"
   "glBlendEquationSeparateATI\0"
   "glBlendEquationSeparateOES\0"
   "\0"
   /* _mesa_function_pool[12950]: DrawBuffers (will be remapped) */
   "ip\0"
   "glDrawBuffers\0"
   "glDrawBuffersARB\0"
   "glDrawBuffersATI\0"
   "glDrawBuffersNV\0"
   "glDrawBuffersEXT\0"
   "\0"
   /* _mesa_function_pool[13035]: StencilFuncSeparate (will be remapped) */
   "iiii\0"
   "glStencilFuncSeparate\0"
   "\0"
   /* _mesa_function_pool[13063]: StencilOpSeparate (will be remapped) */
   "iiii\0"
   "glStencilOpSeparate\0"
   "glStencilOpSeparateATI\0"
   "\0"
   /* _mesa_function_pool[13112]: StencilMaskSeparate (will be remapped) */
   "ii\0"
   "glStencilMaskSeparate\0"
   "\0"
   /* _mesa_function_pool[13138]: AttachShader (will be remapped) */
   "ii\0"
   "glAttachShader\0"
   "\0"
   /* _mesa_function_pool[13157]: BindAttribLocation (will be remapped) */
   "iip\0"
   "glBindAttribLocation\0"
   "glBindAttribLocationARB\0"
   "\0"
   /* _mesa_function_pool[13207]: CompileShader (will be remapped) */
   "i\0"
   "glCompileShader\0"
   "glCompileShaderARB\0"
   "\0"
   /* _mesa_function_pool[13245]: CreateProgram (will be remapped) */
   "\0"
   "glCreateProgram\0"
   "\0"
   /* _mesa_function_pool[13263]: CreateShader (will be remapped) */
   "i\0"
   "glCreateShader\0"
   "\0"
   /* _mesa_function_pool[13281]: DeleteProgram (will be remapped) */
   "i\0"
   "glDeleteProgram\0"
   "\0"
   /* _mesa_function_pool[13300]: DeleteShader (will be remapped) */
   "i\0"
   "glDeleteShader\0"
   "\0"
   /* _mesa_function_pool[13318]: DetachShader (will be remapped) */
   "ii\0"
   "glDetachShader\0"
   "\0"
   /* _mesa_function_pool[13337]: DisableVertexAttribArray (will be remapped) */
   "i\0"
   "glDisableVertexAttribArray\0"
   "glDisableVertexAttribArrayARB\0"
   "\0"
   /* _mesa_function_pool[13397]: EnableVertexAttribArray (will be remapped) */
   "i\0"
   "glEnableVertexAttribArray\0"
   "glEnableVertexAttribArrayARB\0"
   "\0"
   /* _mesa_function_pool[13455]: GetActiveAttrib (will be remapped) */
   "iiipppp\0"
   "glGetActiveAttrib\0"
   "glGetActiveAttribARB\0"
   "\0"
   /* _mesa_function_pool[13503]: GetActiveUniform (will be remapped) */
   "iiipppp\0"
   "glGetActiveUniform\0"
   "glGetActiveUniformARB\0"
   "\0"
   /* _mesa_function_pool[13553]: GetAttachedShaders (will be remapped) */
   "iipp\0"
   "glGetAttachedShaders\0"
   "\0"
   /* _mesa_function_pool[13580]: GetAttribLocation (will be remapped) */
   "ip\0"
   "glGetAttribLocation\0"
   "glGetAttribLocationARB\0"
   "\0"
   /* _mesa_function_pool[13627]: GetProgramiv (will be remapped) */
   "iip\0"
   "glGetProgramiv\0"
   "\0"
   /* _mesa_function_pool[13647]: GetProgramInfoLog (will be remapped) */
   "iipp\0"
   "glGetProgramInfoLog\0"
   "\0"
   /* _mesa_function_pool[13673]: GetShaderiv (will be remapped) */
   "iip\0"
   "glGetShaderiv\0"
   "\0"
   /* _mesa_function_pool[13692]: GetShaderInfoLog (will be remapped) */
   "iipp\0"
   "glGetShaderInfoLog\0"
   "\0"
   /* _mesa_function_pool[13717]: GetShaderSource (will be remapped) */
   "iipp\0"
   "glGetShaderSource\0"
   "glGetShaderSourceARB\0"
   "\0"
   /* _mesa_function_pool[13762]: GetUniformLocation (will be remapped) */
   "ip\0"
   "glGetUniformLocation\0"
   "glGetUniformLocationARB\0"
   "\0"
   /* _mesa_function_pool[13811]: GetUniformfv (will be remapped) */
   "iip\0"
   "glGetUniformfv\0"
   "glGetUniformfvARB\0"
   "\0"
   /* _mesa_function_pool[13849]: GetUniformiv (will be remapped) */
   "iip\0"
   "glGetUniformiv\0"
   "glGetUniformivARB\0"
   "\0"
   /* _mesa_function_pool[13887]: GetVertexAttribdv (will be remapped) */
   "iip\0"
   "glGetVertexAttribdv\0"
   "glGetVertexAttribdvARB\0"
   "\0"
   /* _mesa_function_pool[13935]: GetVertexAttribfv (will be remapped) */
   "iip\0"
   "glGetVertexAttribfv\0"
   "glGetVertexAttribfvARB\0"
   "\0"
   /* _mesa_function_pool[13983]: GetVertexAttribiv (will be remapped) */
   "iip\0"
   "glGetVertexAttribiv\0"
   "glGetVertexAttribivARB\0"
   "\0"
   /* _mesa_function_pool[14031]: GetVertexAttribPointerv (will be remapped) */
   "iip\0"
   "glGetVertexAttribPointerv\0"
   "glGetVertexAttribPointervARB\0"
   "glGetVertexAttribPointervNV\0"
   "\0"
   /* _mesa_function_pool[14119]: IsProgram (will be remapped) */
   "i\0"
   "glIsProgram\0"
   "\0"
   /* _mesa_function_pool[14134]: IsShader (will be remapped) */
   "i\0"
   "glIsShader\0"
   "\0"
   /* _mesa_function_pool[14148]: LinkProgram (will be remapped) */
   "i\0"
   "glLinkProgram\0"
   "glLinkProgramARB\0"
   "\0"
   /* _mesa_function_pool[14182]: ShaderSource (will be remapped) */
   "iipp\0"
   "glShaderSource\0"
   "glShaderSourceARB\0"
   "\0"
   /* _mesa_function_pool[14221]: UseProgram (will be remapped) */
   "i\0"
   "glUseProgram\0"
   "glUseProgramObjectARB\0"
   "\0"
   /* _mesa_function_pool[14259]: Uniform1f (will be remapped) */
   "if\0"
   "glUniform1f\0"
   "glUniform1fARB\0"
   "\0"
   /* _mesa_function_pool[14290]: Uniform2f (will be remapped) */
   "iff\0"
   "glUniform2f\0"
   "glUniform2fARB\0"
   "\0"
   /* _mesa_function_pool[14322]: Uniform3f (will be remapped) */
   "ifff\0"
   "glUniform3f\0"
   "glUniform3fARB\0"
   "\0"
   /* _mesa_function_pool[14355]: Uniform4f (will be remapped) */
   "iffff\0"
   "glUniform4f\0"
   "glUniform4fARB\0"
   "\0"
   /* _mesa_function_pool[14389]: Uniform1i (will be remapped) */
   "ii\0"
   "glUniform1i\0"
   "glUniform1iARB\0"
   "\0"
   /* _mesa_function_pool[14420]: Uniform2i (will be remapped) */
   "iii\0"
   "glUniform2i\0"
   "glUniform2iARB\0"
   "\0"
   /* _mesa_function_pool[14452]: Uniform3i (will be remapped) */
   "iiii\0"
   "glUniform3i\0"
   "glUniform3iARB\0"
   "\0"
   /* _mesa_function_pool[14485]: Uniform4i (will be remapped) */
   "iiiii\0"
   "glUniform4i\0"
   "glUniform4iARB\0"
   "\0"
   /* _mesa_function_pool[14519]: Uniform1fv (will be remapped) */
   "iip\0"
   "glUniform1fv\0"
   "glUniform1fvARB\0"
   "\0"
   /* _mesa_function_pool[14553]: Uniform2fv (will be remapped) */
   "iip\0"
   "glUniform2fv\0"
   "glUniform2fvARB\0"
   "\0"
   /* _mesa_function_pool[14587]: Uniform3fv (will be remapped) */
   "iip\0"
   "glUniform3fv\0"
   "glUniform3fvARB\0"
   "\0"
   /* _mesa_function_pool[14621]: Uniform4fv (will be remapped) */
   "iip\0"
   "glUniform4fv\0"
   "glUniform4fvARB\0"
   "\0"
   /* _mesa_function_pool[14655]: Uniform1iv (will be remapped) */
   "iip\0"
   "glUniform1iv\0"
   "glUniform1ivARB\0"
   "\0"
   /* _mesa_function_pool[14689]: Uniform2iv (will be remapped) */
   "iip\0"
   "glUniform2iv\0"
   "glUniform2ivARB\0"
   "\0"
   /* _mesa_function_pool[14723]: Uniform3iv (will be remapped) */
   "iip\0"
   "glUniform3iv\0"
   "glUniform3ivARB\0"
   "\0"
   /* _mesa_function_pool[14757]: Uniform4iv (will be remapped) */
   "iip\0"
   "glUniform4iv\0"
   "glUniform4ivARB\0"
   "\0"
   /* _mesa_function_pool[14791]: UniformMatrix2fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix2fv\0"
   "glUniformMatrix2fvARB\0"
   "\0"
   /* _mesa_function_pool[14838]: UniformMatrix3fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix3fv\0"
   "glUniformMatrix3fvARB\0"
   "\0"
   /* _mesa_function_pool[14885]: UniformMatrix4fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix4fv\0"
   "glUniformMatrix4fvARB\0"
   "\0"
   /* _mesa_function_pool[14932]: ValidateProgram (will be remapped) */
   "i\0"
   "glValidateProgram\0"
   "glValidateProgramARB\0"
   "\0"
   /* _mesa_function_pool[14974]: VertexAttrib1d (will be remapped) */
   "id\0"
   "glVertexAttrib1d\0"
   "glVertexAttrib1dARB\0"
   "\0"
   /* _mesa_function_pool[15015]: VertexAttrib1dv (will be remapped) */
   "ip\0"
   "glVertexAttrib1dv\0"
   "glVertexAttrib1dvARB\0"
   "\0"
   /* _mesa_function_pool[15058]: VertexAttrib1fARB (will be remapped) */
   "if\0"
   "glVertexAttrib1f\0"
   "glVertexAttrib1fARB\0"
   "\0"
   /* _mesa_function_pool[15099]: VertexAttrib1fvARB (will be remapped) */
   "ip\0"
   "glVertexAttrib1fv\0"
   "glVertexAttrib1fvARB\0"
   "\0"
   /* _mesa_function_pool[15142]: VertexAttrib1s (will be remapped) */
   "ii\0"
   "glVertexAttrib1s\0"
   "glVertexAttrib1sARB\0"
   "\0"
   /* _mesa_function_pool[15183]: VertexAttrib1sv (will be remapped) */
   "ip\0"
   "glVertexAttrib1sv\0"
   "glVertexAttrib1svARB\0"
   "\0"
   /* _mesa_function_pool[15226]: VertexAttrib2d (will be remapped) */
   "idd\0"
   "glVertexAttrib2d\0"
   "glVertexAttrib2dARB\0"
   "\0"
   /* _mesa_function_pool[15268]: VertexAttrib2dv (will be remapped) */
   "ip\0"
   "glVertexAttrib2dv\0"
   "glVertexAttrib2dvARB\0"
   "\0"
   /* _mesa_function_pool[15311]: VertexAttrib2fARB (will be remapped) */
   "iff\0"
   "glVertexAttrib2f\0"
   "glVertexAttrib2fARB\0"
   "\0"
   /* _mesa_function_pool[15353]: VertexAttrib2fvARB (will be remapped) */
   "ip\0"
   "glVertexAttrib2fv\0"
   "glVertexAttrib2fvARB\0"
   "\0"
   /* _mesa_function_pool[15396]: VertexAttrib2s (will be remapped) */
   "iii\0"
   "glVertexAttrib2s\0"
   "glVertexAttrib2sARB\0"
   "\0"
   /* _mesa_function_pool[15438]: VertexAttrib2sv (will be remapped) */
   "ip\0"
   "glVertexAttrib2sv\0"
   "glVertexAttrib2svARB\0"
   "\0"
   /* _mesa_function_pool[15481]: VertexAttrib3d (will be remapped) */
   "iddd\0"
   "glVertexAttrib3d\0"
   "glVertexAttrib3dARB\0"
   "\0"
   /* _mesa_function_pool[15524]: VertexAttrib3dv (will be remapped) */
   "ip\0"
   "glVertexAttrib3dv\0"
   "glVertexAttrib3dvARB\0"
   "\0"
   /* _mesa_function_pool[15567]: VertexAttrib3fARB (will be remapped) */
   "ifff\0"
   "glVertexAttrib3f\0"
   "glVertexAttrib3fARB\0"
   "\0"
   /* _mesa_function_pool[15610]: VertexAttrib3fvARB (will be remapped) */
   "ip\0"
   "glVertexAttrib3fv\0"
   "glVertexAttrib3fvARB\0"
   "\0"
   /* _mesa_function_pool[15653]: VertexAttrib3s (will be remapped) */
   "iiii\0"
   "glVertexAttrib3s\0"
   "glVertexAttrib3sARB\0"
   "\0"
   /* _mesa_function_pool[15696]: VertexAttrib3sv (will be remapped) */
   "ip\0"
   "glVertexAttrib3sv\0"
   "glVertexAttrib3svARB\0"
   "\0"
   /* _mesa_function_pool[15739]: VertexAttrib4Nbv (will be remapped) */
   "ip\0"
   "glVertexAttrib4Nbv\0"
   "glVertexAttrib4NbvARB\0"
   "\0"
   /* _mesa_function_pool[15784]: VertexAttrib4Niv (will be remapped) */
   "ip\0"
   "glVertexAttrib4Niv\0"
   "glVertexAttrib4NivARB\0"
   "\0"
   /* _mesa_function_pool[15829]: VertexAttrib4Nsv (will be remapped) */
   "ip\0"
   "glVertexAttrib4Nsv\0"
   "glVertexAttrib4NsvARB\0"
   "\0"
   /* _mesa_function_pool[15874]: VertexAttrib4Nub (will be remapped) */
   "iiiii\0"
   "glVertexAttrib4Nub\0"
   "glVertexAttrib4NubARB\0"
   "\0"
   /* _mesa_function_pool[15922]: VertexAttrib4Nubv (will be remapped) */
   "ip\0"
   "glVertexAttrib4Nubv\0"
   "glVertexAttrib4NubvARB\0"
   "\0"
   /* _mesa_function_pool[15969]: VertexAttrib4Nuiv (will be remapped) */
   "ip\0"
   "glVertexAttrib4Nuiv\0"
   "glVertexAttrib4NuivARB\0"
   "\0"
   /* _mesa_function_pool[16016]: VertexAttrib4Nusv (will be remapped) */
   "ip\0"
   "glVertexAttrib4Nusv\0"
   "glVertexAttrib4NusvARB\0"
   "\0"
   /* _mesa_function_pool[16063]: VertexAttrib4bv (will be remapped) */
   "ip\0"
   "glVertexAttrib4bv\0"
   "glVertexAttrib4bvARB\0"
   "\0"
   /* _mesa_function_pool[16106]: VertexAttrib4d (will be remapped) */
   "idddd\0"
   "glVertexAttrib4d\0"
   "glVertexAttrib4dARB\0"
   "\0"
   /* _mesa_function_pool[16150]: VertexAttrib4dv (will be remapped) */
   "ip\0"
   "glVertexAttrib4dv\0"
   "glVertexAttrib4dvARB\0"
   "\0"
   /* _mesa_function_pool[16193]: VertexAttrib4fARB (will be remapped) */
   "iffff\0"
   "glVertexAttrib4f\0"
   "glVertexAttrib4fARB\0"
   "\0"
   /* _mesa_function_pool[16237]: VertexAttrib4fvARB (will be remapped) */
   "ip\0"
   "glVertexAttrib4fv\0"
   "glVertexAttrib4fvARB\0"
   "\0"
   /* _mesa_function_pool[16280]: VertexAttrib4iv (will be remapped) */
   "ip\0"
   "glVertexAttrib4iv\0"
   "glVertexAttrib4ivARB\0"
   "\0"
   /* _mesa_function_pool[16323]: VertexAttrib4s (will be remapped) */
   "iiiii\0"
   "glVertexAttrib4s\0"
   "glVertexAttrib4sARB\0"
   "\0"
   /* _mesa_function_pool[16367]: VertexAttrib4sv (will be remapped) */
   "ip\0"
   "glVertexAttrib4sv\0"
   "glVertexAttrib4svARB\0"
   "\0"
   /* _mesa_function_pool[16410]: VertexAttrib4ubv (will be remapped) */
   "ip\0"
   "glVertexAttrib4ubv\0"
   "glVertexAttrib4ubvARB\0"
   "\0"
   /* _mesa_function_pool[16455]: VertexAttrib4uiv (will be remapped) */
   "ip\0"
   "glVertexAttrib4uiv\0"
   "glVertexAttrib4uivARB\0"
   "\0"
   /* _mesa_function_pool[16500]: VertexAttrib4usv (will be remapped) */
   "ip\0"
   "glVertexAttrib4usv\0"
   "glVertexAttrib4usvARB\0"
   "\0"
   /* _mesa_function_pool[16545]: VertexAttribPointer (will be remapped) */
   "iiiiip\0"
   "glVertexAttribPointer\0"
   "glVertexAttribPointerARB\0"
   "\0"
   /* _mesa_function_pool[16600]: UniformMatrix2x3fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix2x3fv\0"
   "\0"
   /* _mesa_function_pool[16627]: UniformMatrix3x2fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix3x2fv\0"
   "\0"
   /* _mesa_function_pool[16654]: UniformMatrix2x4fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix2x4fv\0"
   "\0"
   /* _mesa_function_pool[16681]: UniformMatrix4x2fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix4x2fv\0"
   "\0"
   /* _mesa_function_pool[16708]: UniformMatrix3x4fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix3x4fv\0"
   "\0"
   /* _mesa_function_pool[16735]: UniformMatrix4x3fv (will be remapped) */
   "iiip\0"
   "glUniformMatrix4x3fv\0"
   "\0"
   /* _mesa_function_pool[16762]: WeightbvARB (dynamic) */
   "ip\0"
   "glWeightbvARB\0"
   "\0"
   /* _mesa_function_pool[16780]: WeightsvARB (dynamic) */
   "ip\0"
   "glWeightsvARB\0"
   "\0"
   /* _mesa_function_pool[16798]: WeightivARB (dynamic) */
   "ip\0"
   "glWeightivARB\0"
   "\0"
   /* _mesa_function_pool[16816]: WeightfvARB (dynamic) */
   "ip\0"
   "glWeightfvARB\0"
   "\0"
   /* _mesa_function_pool[16834]: WeightdvARB (dynamic) */
   "ip\0"
   "glWeightdvARB\0"
   "\0"
   /* _mesa_function_pool[16852]: WeightubvARB (dynamic) */
   "ip\0"
   "glWeightubvARB\0"
   "\0"
   /* _mesa_function_pool[16871]: WeightusvARB (dynamic) */
   "ip\0"
   "glWeightusvARB\0"
   "\0"
   /* _mesa_function_pool[16890]: WeightuivARB (dynamic) */
   "ip\0"
   "glWeightuivARB\0"
   "\0"
   /* _mesa_function_pool[16909]: WeightPointerARB (dynamic) */
   "iiip\0"
   "glWeightPointerARB\0"
   "glWeightPointerOES\0"
   "\0"
   /* _mesa_function_pool[16953]: VertexBlendARB (dynamic) */
   "i\0"
   "glVertexBlendARB\0"
   "\0"
   /* _mesa_function_pool[16973]: CurrentPaletteMatrixARB (dynamic) */
   "i\0"
   "glCurrentPaletteMatrixARB\0"
   "glCurrentPaletteMatrixOES\0"
   "\0"
   /* _mesa_function_pool[17028]: MatrixIndexubvARB (dynamic) */
   "ip\0"
   "glMatrixIndexubvARB\0"
   "\0"
   /* _mesa_function_pool[17052]: MatrixIndexusvARB (dynamic) */
   "ip\0"
   "glMatrixIndexusvARB\0"
   "\0"
   /* _mesa_function_pool[17076]: MatrixIndexuivARB (dynamic) */
   "ip\0"
   "glMatrixIndexuivARB\0"
   "\0"
   /* _mesa_function_pool[17100]: MatrixIndexPointerARB (dynamic) */
   "iiip\0"
   "glMatrixIndexPointerARB\0"
   "glMatrixIndexPointerOES\0"
   "\0"
   /* _mesa_function_pool[17154]: ProgramStringARB (will be remapped) */
   "iiip\0"
   "glProgramStringARB\0"
   "\0"
   /* _mesa_function_pool[17179]: BindProgramARB (will be remapped) */
   "ii\0"
   "glBindProgramARB\0"
   "glBindProgramNV\0"
   "\0"
   /* _mesa_function_pool[17216]: DeleteProgramsARB (will be remapped) */
   "ip\0"
   "glDeleteProgramsARB\0"
   "glDeleteProgramsNV\0"
   "\0"
   /* _mesa_function_pool[17259]: GenProgramsARB (will be remapped) */
   "ip\0"
   "glGenProgramsARB\0"
   "glGenProgramsNV\0"
   "\0"
   /* _mesa_function_pool[17296]: IsProgramARB (will be remapped) */
   "i\0"
   "glIsProgramARB\0"
   "glIsProgramNV\0"
   "\0"
   /* _mesa_function_pool[17328]: ProgramEnvParameter4dARB (will be remapped) */
   "iidddd\0"
   "glProgramEnvParameter4dARB\0"
   "glProgramParameter4dNV\0"
   "\0"
   /* _mesa_function_pool[17386]: ProgramEnvParameter4dvARB (will be remapped) */
   "iip\0"
   "glProgramEnvParameter4dvARB\0"
   "glProgramParameter4dvNV\0"
   "\0"
   /* _mesa_function_pool[17443]: ProgramEnvParameter4fARB (will be remapped) */
   "iiffff\0"
   "glProgramEnvParameter4fARB\0"
   "glProgramParameter4fNV\0"
   "\0"
   /* _mesa_function_pool[17501]: ProgramEnvParameter4fvARB (will be remapped) */
   "iip\0"
   "glProgramEnvParameter4fvARB\0"
   "glProgramParameter4fvNV\0"
   "\0"
   /* _mesa_function_pool[17558]: ProgramLocalParameter4dARB (will be remapped) */
   "iidddd\0"
   "glProgramLocalParameter4dARB\0"
   "\0"
   /* _mesa_function_pool[17595]: ProgramLocalParameter4dvARB (will be remapped) */
   "iip\0"
   "glProgramLocalParameter4dvARB\0"
   "\0"
   /* _mesa_function_pool[17630]: ProgramLocalParameter4fARB (will be remapped) */
   "iiffff\0"
   "glProgramLocalParameter4fARB\0"
   "\0"
   /* _mesa_function_pool[17667]: ProgramLocalParameter4fvARB (will be remapped) */
   "iip\0"
   "glProgramLocalParameter4fvARB\0"
   "\0"
   /* _mesa_function_pool[17702]: GetProgramEnvParameterdvARB (will be remapped) */
   "iip\0"
   "glGetProgramEnvParameterdvARB\0"
   "\0"
   /* _mesa_function_pool[17737]: GetProgramEnvParameterfvARB (will be remapped) */
   "iip\0"
   "glGetProgramEnvParameterfvARB\0"
   "\0"
   /* _mesa_function_pool[17772]: GetProgramLocalParameterdvARB (will be remapped) */
   "iip\0"
   "glGetProgramLocalParameterdvARB\0"
   "\0"
   /* _mesa_function_pool[17809]: GetProgramLocalParameterfvARB (will be remapped) */
   "iip\0"
   "glGetProgramLocalParameterfvARB\0"
   "\0"
   /* _mesa_function_pool[17846]: GetProgramivARB (will be remapped) */
   "iip\0"
   "glGetProgramivARB\0"
   "\0"
   /* _mesa_function_pool[17869]: GetProgramStringARB (will be remapped) */
   "iip\0"
   "glGetProgramStringARB\0"
   "\0"
   /* _mesa_function_pool[17896]: DeleteObjectARB (will be remapped) */
   "i\0"
   "glDeleteObjectARB\0"
   "\0"
   /* _mesa_function_pool[17917]: GetHandleARB (will be remapped) */
   "i\0"
   "glGetHandleARB\0"
   "\0"
   /* _mesa_function_pool[17935]: DetachObjectARB (will be remapped) */
   "ii\0"
   "glDetachObjectARB\0"
   "\0"
   /* _mesa_function_pool[17957]: CreateShaderObjectARB (will be remapped) */
   "i\0"
   "glCreateShaderObjectARB\0"
   "\0"
   /* _mesa_function_pool[17984]: CreateProgramObjectARB (will be remapped) */
   "\0"
   "glCreateProgramObjectARB\0"
   "\0"
   /* _mesa_function_pool[18011]: AttachObjectARB (will be remapped) */
   "ii\0"
   "glAttachObjectARB\0"
   "\0"
   /* _mesa_function_pool[18033]: GetObjectParameterfvARB (will be remapped) */
   "iip\0"
   "glGetObjectParameterfvARB\0"
   "\0"
   /* _mesa_function_pool[18064]: GetObjectParameterivARB (will be remapped) */
   "iip\0"
   "glGetObjectParameterivARB\0"
   "\0"
   /* _mesa_function_pool[18095]: GetInfoLogARB (will be remapped) */
   "iipp\0"
   "glGetInfoLogARB\0"
   "\0"
   /* _mesa_function_pool[18117]: GetAttachedObjectsARB (will be remapped) */
   "iipp\0"
   "glGetAttachedObjectsARB\0"
   "\0"
   /* _mesa_function_pool[18147]: ClampColor (will be remapped) */
   "ii\0"
   "glClampColorARB\0"
   "glClampColor\0"
   "\0"
   /* _mesa_function_pool[18180]: DrawArraysInstanced (will be remapped) */
   "iiii\0"
   "glDrawArraysInstanced\0"
   "glDrawArraysInstancedEXT\0"
   "glDrawArraysInstancedARB\0"
   "\0"
   /* _mesa_function_pool[18258]: DrawElementsInstanced (will be remapped) */
   "iiipi\0"
   "glDrawElementsInstanced\0"
   "glDrawElementsInstancedEXT\0"
   "glDrawElementsInstancedARB\0"
   "\0"
   /* _mesa_function_pool[18343]: IsRenderbuffer (will be remapped) */
   "i\0"
   "glIsRenderbuffer\0"
   "glIsRenderbufferEXT\0"
   "glIsRenderbufferOES\0"
   "\0"
   /* _mesa_function_pool[18403]: BindRenderbuffer (will be remapped) */
   "ii\0"
   "glBindRenderbuffer\0"
   "glBindRenderbufferOES\0"
   "\0"
   /* _mesa_function_pool[18448]: DeleteRenderbuffers (will be remapped) */
   "ip\0"
   "glDeleteRenderbuffers\0"
   "glDeleteRenderbuffersEXT\0"
   "glDeleteRenderbuffersOES\0"
   "\0"
   /* _mesa_function_pool[18524]: GenRenderbuffers (will be remapped) */
   "ip\0"
   "glGenRenderbuffers\0"
   "glGenRenderbuffersEXT\0"
   "glGenRenderbuffersOES\0"
   "\0"
   /* _mesa_function_pool[18591]: RenderbufferStorage (will be remapped) */
   "iiii\0"
   "glRenderbufferStorage\0"
   "glRenderbufferStorageEXT\0"
   "glRenderbufferStorageOES\0"
   "\0"
   /* _mesa_function_pool[18669]: RenderbufferStorageMultisample (will be remapped) */
   "iiiii\0"
   "glRenderbufferStorageMultisample\0"
   "glRenderbufferStorageMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[18745]: GetRenderbufferParameteriv (will be remapped) */
   "iip\0"
   "glGetRenderbufferParameteriv\0"
   "glGetRenderbufferParameterivEXT\0"
   "glGetRenderbufferParameterivOES\0"
   "\0"
   /* _mesa_function_pool[18843]: IsFramebuffer (will be remapped) */
   "i\0"
   "glIsFramebuffer\0"
   "glIsFramebufferEXT\0"
   "glIsFramebufferOES\0"
   "\0"
   /* _mesa_function_pool[18900]: BindFramebuffer (will be remapped) */
   "ii\0"
   "glBindFramebuffer\0"
   "glBindFramebufferOES\0"
   "\0"
   /* _mesa_function_pool[18943]: DeleteFramebuffers (will be remapped) */
   "ip\0"
   "glDeleteFramebuffers\0"
   "glDeleteFramebuffersEXT\0"
   "glDeleteFramebuffersOES\0"
   "\0"
   /* _mesa_function_pool[19016]: GenFramebuffers (will be remapped) */
   "ip\0"
   "glGenFramebuffers\0"
   "glGenFramebuffersEXT\0"
   "glGenFramebuffersOES\0"
   "\0"
   /* _mesa_function_pool[19080]: CheckFramebufferStatus (will be remapped) */
   "i\0"
   "glCheckFramebufferStatus\0"
   "glCheckFramebufferStatusEXT\0"
   "glCheckFramebufferStatusOES\0"
   "\0"
   /* _mesa_function_pool[19164]: FramebufferTexture1D (will be remapped) */
   "iiiii\0"
   "glFramebufferTexture1D\0"
   "glFramebufferTexture1DEXT\0"
   "\0"
   /* _mesa_function_pool[19220]: FramebufferTexture2D (will be remapped) */
   "iiiii\0"
   "glFramebufferTexture2D\0"
   "glFramebufferTexture2DEXT\0"
   "glFramebufferTexture2DOES\0"
   "\0"
   /* _mesa_function_pool[19302]: FramebufferTexture3D (will be remapped) */
   "iiiiii\0"
   "glFramebufferTexture3D\0"
   "glFramebufferTexture3DEXT\0"
   "glFramebufferTexture3DOES\0"
   "\0"
   /* _mesa_function_pool[19385]: FramebufferTextureLayer (will be remapped) */
   "iiiii\0"
   "glFramebufferTextureLayer\0"
   "glFramebufferTextureLayerEXT\0"
   "\0"
   /* _mesa_function_pool[19447]: FramebufferRenderbuffer (will be remapped) */
   "iiii\0"
   "glFramebufferRenderbuffer\0"
   "glFramebufferRenderbufferEXT\0"
   "glFramebufferRenderbufferOES\0"
   "\0"
   /* _mesa_function_pool[19537]: GetFramebufferAttachmentParameteriv (will be remapped) */
   "iiip\0"
   "glGetFramebufferAttachmentParameteriv\0"
   "glGetFramebufferAttachmentParameterivEXT\0"
   "glGetFramebufferAttachmentParameterivOES\0"
   "\0"
   /* _mesa_function_pool[19663]: BlitFramebuffer (will be remapped) */
   "iiiiiiiiii\0"
   "glBlitFramebuffer\0"
   "glBlitFramebufferEXT\0"
   "\0"
   /* _mesa_function_pool[19714]: GenerateMipmap (will be remapped) */
   "i\0"
   "glGenerateMipmap\0"
   "glGenerateMipmapEXT\0"
   "glGenerateMipmapOES\0"
   "\0"
   /* _mesa_function_pool[19774]: VertexAttribDivisor (will be remapped) */
   "ii\0"
   "glVertexAttribDivisorARB\0"
   "glVertexAttribDivisorEXT\0"
   "glVertexAttribDivisor\0"
   "\0"
   /* _mesa_function_pool[19850]: VertexArrayVertexAttribDivisorEXT (will be remapped) */
   "iii\0"
   "glVertexArrayVertexAttribDivisorEXT\0"
   "\0"
   /* _mesa_function_pool[19891]: MapBufferRange (will be remapped) */
   "iiii\0"
   "glMapBufferRange\0"
   "glMapBufferRangeEXT\0"
   "\0"
   /* _mesa_function_pool[19934]: FlushMappedBufferRange (will be remapped) */
   "iii\0"
   "glFlushMappedBufferRange\0"
   "glFlushMappedBufferRangeEXT\0"
   "\0"
   /* _mesa_function_pool[19992]: TexBuffer (will be remapped) */
   "iii\0"
   "glTexBufferARB\0"
   "glTexBuffer\0"
   "glTexBufferEXT\0"
   "glTexBufferOES\0"
   "\0"
   /* _mesa_function_pool[20054]: BindVertexArray (will be remapped) */
   "i\0"
   "glBindVertexArray\0"
   "glBindVertexArrayOES\0"
   "\0"
   /* _mesa_function_pool[20096]: DeleteVertexArrays (will be remapped) */
   "ip\0"
   "glDeleteVertexArrays\0"
   "glDeleteVertexArraysOES\0"
   "\0"
   /* _mesa_function_pool[20145]: GenVertexArrays (will be remapped) */
   "ip\0"
   "glGenVertexArrays\0"
   "glGenVertexArraysOES\0"
   "\0"
   /* _mesa_function_pool[20188]: IsVertexArray (will be remapped) */
   "i\0"
   "glIsVertexArray\0"
   "glIsVertexArrayOES\0"
   "\0"
   /* _mesa_function_pool[20226]: GetUniformIndices (will be remapped) */
   "iipp\0"
   "glGetUniformIndices\0"
   "\0"
   /* _mesa_function_pool[20252]: GetActiveUniformsiv (will be remapped) */
   "iipip\0"
   "glGetActiveUniformsiv\0"
   "\0"
   /* _mesa_function_pool[20281]: GetActiveUniformName (will be remapped) */
   "iiipp\0"
   "glGetActiveUniformName\0"
   "\0"
   /* _mesa_function_pool[20311]: GetUniformBlockIndex (will be remapped) */
   "ip\0"
   "glGetUniformBlockIndex\0"
   "\0"
   /* _mesa_function_pool[20338]: GetActiveUniformBlockiv (will be remapped) */
   "iiip\0"
   "glGetActiveUniformBlockiv\0"
   "\0"
   /* _mesa_function_pool[20370]: GetActiveUniformBlockName (will be remapped) */
   "iiipp\0"
   "glGetActiveUniformBlockName\0"
   "\0"
   /* _mesa_function_pool[20405]: UniformBlockBinding (will be remapped) */
   "iii\0"
   "glUniformBlockBinding\0"
   "\0"
   /* _mesa_function_pool[20432]: CopyBufferSubData (will be remapped) */
   "iiiii\0"
   "glCopyBufferSubData\0"
   "\0"
   /* _mesa_function_pool[20459]: DrawElementsBaseVertex (will be remapped) */
   "iiipi\0"
   "glDrawElementsBaseVertex\0"
   "glDrawElementsBaseVertexEXT\0"
   "glDrawElementsBaseVertexOES\0"
   "\0"
   /* _mesa_function_pool[20547]: DrawRangeElementsBaseVertex (will be remapped) */
   "iiiiipi\0"
   "glDrawRangeElementsBaseVertex\0"
   "glInternalDrawRangeElementsBaseVertex\0"
   "glDrawRangeElementsBaseVertexEXT\0"
   "glDrawRangeElementsBaseVertexOES\0"
   "\0"
   /* _mesa_function_pool[20690]: MultiDrawElementsBaseVertex (will be remapped) */
   "ipipip\0"
   "glMultiDrawElementsBaseVertex\0"
   "glInternalMultiDrawElementsBaseVertex\0"
   "glMultiDrawElementsBaseVertexEXT\0"
   "\0"
   /* _mesa_function_pool[20799]: DrawElementsInstancedBaseVertex (will be remapped) */
   "iiipii\0"
   "glDrawElementsInstancedBaseVertex\0"
   "glDrawElementsInstancedBaseVertexEXT\0"
   "glDrawElementsInstancedBaseVertexOES\0"
   "\0"
   /* _mesa_function_pool[20915]: FenceSync (will be remapped) */
   "ii\0"
   "glFenceSync\0"
   "\0"
   /* _mesa_function_pool[20931]: IsSync (will be remapped) */
   "i\0"
   "glIsSync\0"
   "\0"
   /* _mesa_function_pool[20943]: DeleteSync (will be remapped) */
   "i\0"
   "glDeleteSync\0"
   "\0"
   /* _mesa_function_pool[20959]: ClientWaitSync (will be remapped) */
   "iii\0"
   "glClientWaitSync\0"
   "\0"
   /* _mesa_function_pool[20981]: WaitSync (will be remapped) */
   "iii\0"
   "glWaitSync\0"
   "\0"
   /* _mesa_function_pool[20997]: GetInteger64v (will be remapped) */
   "ip\0"
   "glGetInteger64v\0"
   "glGetInteger64vEXT\0"
   "\0"
   /* _mesa_function_pool[21036]: GetSynciv (will be remapped) */
   "iiipp\0"
   "glGetSynciv\0"
   "\0"
   /* _mesa_function_pool[21055]: TexImage2DMultisample (will be remapped) */
   "iiiiii\0"
   "glTexImage2DMultisample\0"
   "\0"
   /* _mesa_function_pool[21087]: TexImage3DMultisample (will be remapped) */
   "iiiiiii\0"
   "glTexImage3DMultisample\0"
   "\0"
   /* _mesa_function_pool[21120]: GetMultisamplefv (will be remapped) */
   "iip\0"
   "glGetMultisamplefv\0"
   "\0"
   /* _mesa_function_pool[21144]: SampleMaski (will be remapped) */
   "ii\0"
   "glSampleMaski\0"
   "\0"
   /* _mesa_function_pool[21162]: BlendEquationiARB (will be remapped) */
   "ii\0"
   "glBlendEquationiARB\0"
   "glBlendEquationIndexedAMD\0"
   "glBlendEquationi\0"
   "glBlendEquationiEXT\0"
   "glBlendEquationiOES\0"
   "\0"
   /* _mesa_function_pool[21269]: BlendEquationSeparateiARB (will be remapped) */
   "iii\0"
   "glBlendEquationSeparateiARB\0"
   "glBlendEquationSeparateIndexedAMD\0"
   "glBlendEquationSeparatei\0"
   "glBlendEquationSeparateiEXT\0"
   "glBlendEquationSeparateiOES\0"
   "\0"
   /* _mesa_function_pool[21417]: BlendFunciARB (will be remapped) */
   "iii\0"
   "glBlendFunciARB\0"
   "glBlendFuncIndexedAMD\0"
   "glBlendFunci\0"
   "glBlendFunciEXT\0"
   "glBlendFunciOES\0"
   "\0"
   /* _mesa_function_pool[21505]: BlendFuncSeparateiARB (will be remapped) */
   "iiiii\0"
   "glBlendFuncSeparateiARB\0"
   "glBlendFuncSeparateIndexedAMD\0"
   "glBlendFuncSeparatei\0"
   "glBlendFuncSeparateiEXT\0"
   "glBlendFuncSeparateiOES\0"
   "\0"
   /* _mesa_function_pool[21635]: MinSampleShading (will be remapped) */
   "f\0"
   "glMinSampleShadingARB\0"
   "glMinSampleShading\0"
   "glMinSampleShadingOES\0"
   "\0"
   /* _mesa_function_pool[21701]: NamedStringARB (will be remapped) */
   "iipip\0"
   "glNamedStringARB\0"
   "\0"
   /* _mesa_function_pool[21725]: DeleteNamedStringARB (will be remapped) */
   "ip\0"
   "glDeleteNamedStringARB\0"
   "\0"
   /* _mesa_function_pool[21752]: CompileShaderIncludeARB (will be remapped) */
   "iipp\0"
   "glCompileShaderIncludeARB\0"
   "\0"
   /* _mesa_function_pool[21784]: IsNamedStringARB (will be remapped) */
   "ip\0"
   "glIsNamedStringARB\0"
   "\0"
   /* _mesa_function_pool[21807]: GetNamedStringARB (will be remapped) */
   "ipipp\0"
   "glGetNamedStringARB\0"
   "\0"
   /* _mesa_function_pool[21834]: GetNamedStringivARB (will be remapped) */
   "ipip\0"
   "glGetNamedStringivARB\0"
   "\0"
   /* _mesa_function_pool[21862]: BindFragDataLocationIndexed (will be remapped) */
   "iiip\0"
   "glBindFragDataLocationIndexed\0"
   "glBindFragDataLocationIndexedEXT\0"
   "\0"
   /* _mesa_function_pool[21931]: GetFragDataIndex (will be remapped) */
   "ip\0"
   "glGetFragDataIndex\0"
   "glGetFragDataIndexEXT\0"
   "\0"
   /* _mesa_function_pool[21976]: GenSamplers (will be remapped) */
   "ip\0"
   "glGenSamplers\0"
   "\0"
   /* _mesa_function_pool[21994]: DeleteSamplers (will be remapped) */
   "ip\0"
   "glDeleteSamplers\0"
   "\0"
   /* _mesa_function_pool[22015]: IsSampler (will be remapped) */
   "i\0"
   "glIsSampler\0"
   "\0"
   /* _mesa_function_pool[22030]: BindSampler (will be remapped) */
   "ii\0"
   "glBindSampler\0"
   "\0"
   /* _mesa_function_pool[22048]: SamplerParameteri (will be remapped) */
   "iii\0"
   "glSamplerParameteri\0"
   "\0"
   /* _mesa_function_pool[22073]: SamplerParameterf (will be remapped) */
   "iif\0"
   "glSamplerParameterf\0"
   "\0"
   /* _mesa_function_pool[22098]: SamplerParameteriv (will be remapped) */
   "iip\0"
   "glSamplerParameteriv\0"
   "\0"
   /* _mesa_function_pool[22124]: SamplerParameterfv (will be remapped) */
   "iip\0"
   "glSamplerParameterfv\0"
   "\0"
   /* _mesa_function_pool[22150]: SamplerParameterIiv (will be remapped) */
   "iip\0"
   "glSamplerParameterIiv\0"
   "glSamplerParameterIivEXT\0"
   "glSamplerParameterIivOES\0"
   "\0"
   /* _mesa_function_pool[22227]: SamplerParameterIuiv (will be remapped) */
   "iip\0"
   "glSamplerParameterIuiv\0"
   "glSamplerParameterIuivEXT\0"
   "glSamplerParameterIuivOES\0"
   "\0"
   /* _mesa_function_pool[22307]: GetSamplerParameteriv (will be remapped) */
   "iip\0"
   "glGetSamplerParameteriv\0"
   "\0"
   /* _mesa_function_pool[22336]: GetSamplerParameterfv (will be remapped) */
   "iip\0"
   "glGetSamplerParameterfv\0"
   "\0"
   /* _mesa_function_pool[22365]: GetSamplerParameterIiv (will be remapped) */
   "iip\0"
   "glGetSamplerParameterIiv\0"
   "glGetSamplerParameterIivEXT\0"
   "glGetSamplerParameterIivOES\0"
   "\0"
   /* _mesa_function_pool[22451]: GetSamplerParameterIuiv (will be remapped) */
   "iip\0"
   "glGetSamplerParameterIuiv\0"
   "glGetSamplerParameterIuivEXT\0"
   "glGetSamplerParameterIuivOES\0"
   "\0"
   /* _mesa_function_pool[22540]: GetQueryObjecti64v (will be remapped) */
   "iip\0"
   "glGetQueryObjecti64v\0"
   "glGetQueryObjecti64vEXT\0"
   "\0"
   /* _mesa_function_pool[22590]: GetQueryObjectui64v (will be remapped) */
   "iip\0"
   "glGetQueryObjectui64v\0"
   "glGetQueryObjectui64vEXT\0"
   "\0"
   /* _mesa_function_pool[22642]: QueryCounter (will be remapped) */
   "ii\0"
   "glQueryCounter\0"
   "glQueryCounterEXT\0"
   "\0"
   /* _mesa_function_pool[22679]: VertexP2ui (will be remapped) */
   "ii\0"
   "glVertexP2ui\0"
   "\0"
   /* _mesa_function_pool[22696]: VertexP3ui (will be remapped) */
   "ii\0"
   "glVertexP3ui\0"
   "\0"
   /* _mesa_function_pool[22713]: VertexP4ui (will be remapped) */
   "ii\0"
   "glVertexP4ui\0"
   "\0"
   /* _mesa_function_pool[22730]: VertexP2uiv (will be remapped) */
   "ip\0"
   "glVertexP2uiv\0"
   "\0"
   /* _mesa_function_pool[22748]: VertexP3uiv (will be remapped) */
   "ip\0"
   "glVertexP3uiv\0"
   "\0"
   /* _mesa_function_pool[22766]: VertexP4uiv (will be remapped) */
   "ip\0"
   "glVertexP4uiv\0"
   "\0"
   /* _mesa_function_pool[22784]: TexCoordP1ui (will be remapped) */
   "ii\0"
   "glTexCoordP1ui\0"
   "\0"
   /* _mesa_function_pool[22803]: TexCoordP2ui (will be remapped) */
   "ii\0"
   "glTexCoordP2ui\0"
   "\0"
   /* _mesa_function_pool[22822]: TexCoordP3ui (will be remapped) */
   "ii\0"
   "glTexCoordP3ui\0"
   "\0"
   /* _mesa_function_pool[22841]: TexCoordP4ui (will be remapped) */
   "ii\0"
   "glTexCoordP4ui\0"
   "\0"
   /* _mesa_function_pool[22860]: TexCoordP1uiv (will be remapped) */
   "ip\0"
   "glTexCoordP1uiv\0"
   "\0"
   /* _mesa_function_pool[22880]: TexCoordP2uiv (will be remapped) */
   "ip\0"
   "glTexCoordP2uiv\0"
   "\0"
   /* _mesa_function_pool[22900]: TexCoordP3uiv (will be remapped) */
   "ip\0"
   "glTexCoordP3uiv\0"
   "\0"
   /* _mesa_function_pool[22920]: TexCoordP4uiv (will be remapped) */
   "ip\0"
   "glTexCoordP4uiv\0"
   "\0"
   /* _mesa_function_pool[22940]: MultiTexCoordP1ui (will be remapped) */
   "iii\0"
   "glMultiTexCoordP1ui\0"
   "\0"
   /* _mesa_function_pool[22965]: MultiTexCoordP2ui (will be remapped) */
   "iii\0"
   "glMultiTexCoordP2ui\0"
   "\0"
   /* _mesa_function_pool[22990]: MultiTexCoordP3ui (will be remapped) */
   "iii\0"
   "glMultiTexCoordP3ui\0"
   "\0"
   /* _mesa_function_pool[23015]: MultiTexCoordP4ui (will be remapped) */
   "iii\0"
   "glMultiTexCoordP4ui\0"
   "\0"
   /* _mesa_function_pool[23040]: MultiTexCoordP1uiv (will be remapped) */
   "iip\0"
   "glMultiTexCoordP1uiv\0"
   "\0"
   /* _mesa_function_pool[23066]: MultiTexCoordP2uiv (will be remapped) */
   "iip\0"
   "glMultiTexCoordP2uiv\0"
   "\0"
   /* _mesa_function_pool[23092]: MultiTexCoordP3uiv (will be remapped) */
   "iip\0"
   "glMultiTexCoordP3uiv\0"
   "\0"
   /* _mesa_function_pool[23118]: MultiTexCoordP4uiv (will be remapped) */
   "iip\0"
   "glMultiTexCoordP4uiv\0"
   "\0"
   /* _mesa_function_pool[23144]: NormalP3ui (will be remapped) */
   "ii\0"
   "glNormalP3ui\0"
   "\0"
   /* _mesa_function_pool[23161]: NormalP3uiv (will be remapped) */
   "ip\0"
   "glNormalP3uiv\0"
   "\0"
   /* _mesa_function_pool[23179]: ColorP3ui (will be remapped) */
   "ii\0"
   "glColorP3ui\0"
   "\0"
   /* _mesa_function_pool[23195]: ColorP4ui (will be remapped) */
   "ii\0"
   "glColorP4ui\0"
   "\0"
   /* _mesa_function_pool[23211]: ColorP3uiv (will be remapped) */
   "ip\0"
   "glColorP3uiv\0"
   "\0"
   /* _mesa_function_pool[23228]: ColorP4uiv (will be remapped) */
   "ip\0"
   "glColorP4uiv\0"
   "\0"
   /* _mesa_function_pool[23245]: SecondaryColorP3ui (will be remapped) */
   "ii\0"
   "glSecondaryColorP3ui\0"
   "\0"
   /* _mesa_function_pool[23270]: SecondaryColorP3uiv (will be remapped) */
   "ip\0"
   "glSecondaryColorP3uiv\0"
   "\0"
   /* _mesa_function_pool[23296]: VertexAttribP1ui (will be remapped) */
   "iiii\0"
   "glVertexAttribP1ui\0"
   "\0"
   /* _mesa_function_pool[23321]: VertexAttribP2ui (will be remapped) */
   "iiii\0"
   "glVertexAttribP2ui\0"
   "\0"
   /* _mesa_function_pool[23346]: VertexAttribP3ui (will be remapped) */
   "iiii\0"
   "glVertexAttribP3ui\0"
   "\0"
   /* _mesa_function_pool[23371]: VertexAttribP4ui (will be remapped) */
   "iiii\0"
   "glVertexAttribP4ui\0"
   "\0"
   /* _mesa_function_pool[23396]: VertexAttribP1uiv (will be remapped) */
   "iiip\0"
   "glVertexAttribP1uiv\0"
   "\0"
   /* _mesa_function_pool[23422]: VertexAttribP2uiv (will be remapped) */
   "iiip\0"
   "glVertexAttribP2uiv\0"
   "\0"
   /* _mesa_function_pool[23448]: VertexAttribP3uiv (will be remapped) */
   "iiip\0"
   "glVertexAttribP3uiv\0"
   "\0"
   /* _mesa_function_pool[23474]: VertexAttribP4uiv (will be remapped) */
   "iiip\0"
   "glVertexAttribP4uiv\0"
   "\0"
   /* _mesa_function_pool[23500]: GetSubroutineUniformLocation (will be remapped) */
   "iip\0"
   "glGetSubroutineUniformLocation\0"
   "\0"
   /* _mesa_function_pool[23536]: GetSubroutineIndex (will be remapped) */
   "iip\0"
   "glGetSubroutineIndex\0"
   "\0"
   /* _mesa_function_pool[23562]: GetActiveSubroutineUniformiv (will be remapped) */
   "iiiip\0"
   "glGetActiveSubroutineUniformiv\0"
   "\0"
   /* _mesa_function_pool[23600]: GetActiveSubroutineUniformName (will be remapped) */
   "iiiipp\0"
   "glGetActiveSubroutineUniformName\0"
   "\0"
   /* _mesa_function_pool[23641]: GetActiveSubroutineName (will be remapped) */
   "iiiipp\0"
   "glGetActiveSubroutineName\0"
   "\0"
   /* _mesa_function_pool[23675]: UniformSubroutinesuiv (will be remapped) */
   "iip\0"
   "glUniformSubroutinesuiv\0"
   "\0"
   /* _mesa_function_pool[23704]: GetUniformSubroutineuiv (will be remapped) */
   "iip\0"
   "glGetUniformSubroutineuiv\0"
   "\0"
   /* _mesa_function_pool[23735]: GetProgramStageiv (will be remapped) */
   "iiip\0"
   "glGetProgramStageiv\0"
   "\0"
   /* _mesa_function_pool[23761]: PatchParameteri (will be remapped) */
   "ii\0"
   "glPatchParameteri\0"
   "glPatchParameteriEXT\0"
   "glPatchParameteriOES\0"
   "\0"
   /* _mesa_function_pool[23825]: PatchParameterfv (will be remapped) */
   "ip\0"
   "glPatchParameterfv\0"
   "\0"
   /* _mesa_function_pool[23848]: DrawArraysIndirect (will be remapped) */
   "ip\0"
   "glDrawArraysIndirect\0"
   "\0"
   /* _mesa_function_pool[23873]: DrawElementsIndirect (will be remapped) */
   "iip\0"
   "glDrawElementsIndirect\0"
   "\0"
   /* _mesa_function_pool[23901]: MultiDrawArraysIndirect (will be remapped) */
   "ipii\0"
   "glMultiDrawArraysIndirect\0"
   "glMultiDrawArraysIndirectAMD\0"
   "\0"
   /* _mesa_function_pool[23962]: MultiDrawElementsIndirect (will be remapped) */
   "iipii\0"
   "glMultiDrawElementsIndirect\0"
   "glMultiDrawElementsIndirectAMD\0"
   "\0"
   /* _mesa_function_pool[24028]: Uniform1d (will be remapped) */
   "id\0"
   "glUniform1d\0"
   "\0"
   /* _mesa_function_pool[24044]: Uniform2d (will be remapped) */
   "idd\0"
   "glUniform2d\0"
   "\0"
   /* _mesa_function_pool[24061]: Uniform3d (will be remapped) */
   "iddd\0"
   "glUniform3d\0"
   "\0"
   /* _mesa_function_pool[24079]: Uniform4d (will be remapped) */
   "idddd\0"
   "glUniform4d\0"
   "\0"
   /* _mesa_function_pool[24098]: Uniform1dv (will be remapped) */
   "iip\0"
   "glUniform1dv\0"
   "\0"
   /* _mesa_function_pool[24116]: Uniform2dv (will be remapped) */
   "iip\0"
   "glUniform2dv\0"
   "\0"
   /* _mesa_function_pool[24134]: Uniform3dv (will be remapped) */
   "iip\0"
   "glUniform3dv\0"
   "\0"
   /* _mesa_function_pool[24152]: Uniform4dv (will be remapped) */
   "iip\0"
   "glUniform4dv\0"
   "\0"
   /* _mesa_function_pool[24170]: UniformMatrix2dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix2dv\0"
   "\0"
   /* _mesa_function_pool[24195]: UniformMatrix3dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix3dv\0"
   "\0"
   /* _mesa_function_pool[24220]: UniformMatrix4dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix4dv\0"
   "\0"
   /* _mesa_function_pool[24245]: UniformMatrix2x3dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix2x3dv\0"
   "\0"
   /* _mesa_function_pool[24272]: UniformMatrix2x4dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix2x4dv\0"
   "\0"
   /* _mesa_function_pool[24299]: UniformMatrix3x2dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix3x2dv\0"
   "\0"
   /* _mesa_function_pool[24326]: UniformMatrix3x4dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix3x4dv\0"
   "\0"
   /* _mesa_function_pool[24353]: UniformMatrix4x2dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix4x2dv\0"
   "\0"
   /* _mesa_function_pool[24380]: UniformMatrix4x3dv (will be remapped) */
   "iiip\0"
   "glUniformMatrix4x3dv\0"
   "\0"
   /* _mesa_function_pool[24407]: GetUniformdv (will be remapped) */
   "iip\0"
   "glGetUniformdv\0"
   "\0"
   /* _mesa_function_pool[24427]: ProgramUniform1d (will be remapped) */
   "iid\0"
   "glProgramUniform1dEXT\0"
   "glProgramUniform1d\0"
   "\0"
   /* _mesa_function_pool[24473]: ProgramUniform2d (will be remapped) */
   "iidd\0"
   "glProgramUniform2dEXT\0"
   "glProgramUniform2d\0"
   "\0"
   /* _mesa_function_pool[24520]: ProgramUniform3d (will be remapped) */
   "iiddd\0"
   "glProgramUniform3dEXT\0"
   "glProgramUniform3d\0"
   "\0"
   /* _mesa_function_pool[24568]: ProgramUniform4d (will be remapped) */
   "iidddd\0"
   "glProgramUniform4dEXT\0"
   "glProgramUniform4d\0"
   "\0"
   /* _mesa_function_pool[24617]: ProgramUniform1dv (will be remapped) */
   "iiip\0"
   "glProgramUniform1dvEXT\0"
   "glProgramUniform1dv\0"
   "\0"
   /* _mesa_function_pool[24666]: ProgramUniform2dv (will be remapped) */
   "iiip\0"
   "glProgramUniform2dvEXT\0"
   "glProgramUniform2dv\0"
   "\0"
   /* _mesa_function_pool[24715]: ProgramUniform3dv (will be remapped) */
   "iiip\0"
   "glProgramUniform3dvEXT\0"
   "glProgramUniform3dv\0"
   "\0"
   /* _mesa_function_pool[24764]: ProgramUniform4dv (will be remapped) */
   "iiip\0"
   "glProgramUniform4dvEXT\0"
   "glProgramUniform4dv\0"
   "\0"
   /* _mesa_function_pool[24813]: ProgramUniformMatrix2dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix2dvEXT\0"
   "glProgramUniformMatrix2dv\0"
   "\0"
   /* _mesa_function_pool[24875]: ProgramUniformMatrix3dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix3dvEXT\0"
   "glProgramUniformMatrix3dv\0"
   "\0"
   /* _mesa_function_pool[24937]: ProgramUniformMatrix4dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix4dvEXT\0"
   "glProgramUniformMatrix4dv\0"
   "\0"
   /* _mesa_function_pool[24999]: ProgramUniformMatrix2x3dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix2x3dvEXT\0"
   "glProgramUniformMatrix2x3dv\0"
   "\0"
   /* _mesa_function_pool[25065]: ProgramUniformMatrix2x4dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix2x4dvEXT\0"
   "glProgramUniformMatrix2x4dv\0"
   "\0"
   /* _mesa_function_pool[25131]: ProgramUniformMatrix3x2dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix3x2dvEXT\0"
   "glProgramUniformMatrix3x2dv\0"
   "\0"
   /* _mesa_function_pool[25197]: ProgramUniformMatrix3x4dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix3x4dvEXT\0"
   "glProgramUniformMatrix3x4dv\0"
   "\0"
   /* _mesa_function_pool[25263]: ProgramUniformMatrix4x2dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix4x2dvEXT\0"
   "glProgramUniformMatrix4x2dv\0"
   "\0"
   /* _mesa_function_pool[25329]: ProgramUniformMatrix4x3dv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix4x3dvEXT\0"
   "glProgramUniformMatrix4x3dv\0"
   "\0"
   /* _mesa_function_pool[25395]: DrawTransformFeedbackStream (will be remapped) */
   "iii\0"
   "glDrawTransformFeedbackStream\0"
   "\0"
   /* _mesa_function_pool[25430]: BeginQueryIndexed (will be remapped) */
   "iii\0"
   "glBeginQueryIndexed\0"
   "\0"
   /* _mesa_function_pool[25455]: EndQueryIndexed (will be remapped) */
   "ii\0"
   "glEndQueryIndexed\0"
   "\0"
   /* _mesa_function_pool[25477]: GetQueryIndexediv (will be remapped) */
   "iiip\0"
   "glGetQueryIndexediv\0"
   "\0"
   /* _mesa_function_pool[25503]: UseProgramStages (will be remapped) */
   "iii\0"
   "glUseProgramStages\0"
   "glUseProgramStagesEXT\0"
   "\0"
   /* _mesa_function_pool[25549]: ActiveShaderProgram (will be remapped) */
   "ii\0"
   "glActiveShaderProgram\0"
   "glActiveShaderProgramEXT\0"
   "\0"
   /* _mesa_function_pool[25600]: CreateShaderProgramv (will be remapped) */
   "iip\0"
   "glCreateShaderProgramv\0"
   "glCreateShaderProgramvEXT\0"
   "\0"
   /* _mesa_function_pool[25654]: BindProgramPipeline (will be remapped) */
   "i\0"
   "glBindProgramPipeline\0"
   "glBindProgramPipelineEXT\0"
   "\0"
   /* _mesa_function_pool[25704]: DeleteProgramPipelines (will be remapped) */
   "ip\0"
   "glDeleteProgramPipelines\0"
   "glDeleteProgramPipelinesEXT\0"
   "\0"
   /* _mesa_function_pool[25761]: GenProgramPipelines (will be remapped) */
   "ip\0"
   "glGenProgramPipelines\0"
   "glGenProgramPipelinesEXT\0"
   "\0"
   /* _mesa_function_pool[25812]: IsProgramPipeline (will be remapped) */
   "i\0"
   "glIsProgramPipeline\0"
   "glIsProgramPipelineEXT\0"
   "\0"
   /* _mesa_function_pool[25858]: GetProgramPipelineiv (will be remapped) */
   "iip\0"
   "glGetProgramPipelineiv\0"
   "glGetProgramPipelineivEXT\0"
   "\0"
   /* _mesa_function_pool[25912]: ProgramUniform1i (will be remapped) */
   "iii\0"
   "glProgramUniform1i\0"
   "glProgramUniform1iEXT\0"
   "\0"
   /* _mesa_function_pool[25958]: ProgramUniform2i (will be remapped) */
   "iiii\0"
   "glProgramUniform2i\0"
   "glProgramUniform2iEXT\0"
   "\0"
   /* _mesa_function_pool[26005]: ProgramUniform3i (will be remapped) */
   "iiiii\0"
   "glProgramUniform3i\0"
   "glProgramUniform3iEXT\0"
   "\0"
   /* _mesa_function_pool[26053]: ProgramUniform4i (will be remapped) */
   "iiiiii\0"
   "glProgramUniform4i\0"
   "glProgramUniform4iEXT\0"
   "\0"
   /* _mesa_function_pool[26102]: ProgramUniform1ui (will be remapped) */
   "iii\0"
   "glProgramUniform1ui\0"
   "glProgramUniform1uiEXT\0"
   "\0"
   /* _mesa_function_pool[26150]: ProgramUniform2ui (will be remapped) */
   "iiii\0"
   "glProgramUniform2ui\0"
   "glProgramUniform2uiEXT\0"
   "\0"
   /* _mesa_function_pool[26199]: ProgramUniform3ui (will be remapped) */
   "iiiii\0"
   "glProgramUniform3ui\0"
   "glProgramUniform3uiEXT\0"
   "\0"
   /* _mesa_function_pool[26249]: ProgramUniform4ui (will be remapped) */
   "iiiiii\0"
   "glProgramUniform4ui\0"
   "glProgramUniform4uiEXT\0"
   "\0"
   /* _mesa_function_pool[26300]: ProgramUniform1f (will be remapped) */
   "iif\0"
   "glProgramUniform1f\0"
   "glProgramUniform1fEXT\0"
   "\0"
   /* _mesa_function_pool[26346]: ProgramUniform2f (will be remapped) */
   "iiff\0"
   "glProgramUniform2f\0"
   "glProgramUniform2fEXT\0"
   "\0"
   /* _mesa_function_pool[26393]: ProgramUniform3f (will be remapped) */
   "iifff\0"
   "glProgramUniform3f\0"
   "glProgramUniform3fEXT\0"
   "\0"
   /* _mesa_function_pool[26441]: ProgramUniform4f (will be remapped) */
   "iiffff\0"
   "glProgramUniform4f\0"
   "glProgramUniform4fEXT\0"
   "\0"
   /* _mesa_function_pool[26490]: ProgramUniform1iv (will be remapped) */
   "iiip\0"
   "glProgramUniform1iv\0"
   "glProgramUniform1ivEXT\0"
   "\0"
   /* _mesa_function_pool[26539]: ProgramUniform2iv (will be remapped) */
   "iiip\0"
   "glProgramUniform2iv\0"
   "glProgramUniform2ivEXT\0"
   "\0"
   /* _mesa_function_pool[26588]: ProgramUniform3iv (will be remapped) */
   "iiip\0"
   "glProgramUniform3iv\0"
   "glProgramUniform3ivEXT\0"
   "\0"
   /* _mesa_function_pool[26637]: ProgramUniform4iv (will be remapped) */
   "iiip\0"
   "glProgramUniform4iv\0"
   "glProgramUniform4ivEXT\0"
   "\0"
   /* _mesa_function_pool[26686]: ProgramUniform1uiv (will be remapped) */
   "iiip\0"
   "glProgramUniform1uiv\0"
   "glProgramUniform1uivEXT\0"
   "\0"
   /* _mesa_function_pool[26737]: ProgramUniform2uiv (will be remapped) */
   "iiip\0"
   "glProgramUniform2uiv\0"
   "glProgramUniform2uivEXT\0"
   "\0"
   /* _mesa_function_pool[26788]: ProgramUniform3uiv (will be remapped) */
   "iiip\0"
   "glProgramUniform3uiv\0"
   "glProgramUniform3uivEXT\0"
   "\0"
   /* _mesa_function_pool[26839]: ProgramUniform4uiv (will be remapped) */
   "iiip\0"
   "glProgramUniform4uiv\0"
   "glProgramUniform4uivEXT\0"
   "\0"
   /* _mesa_function_pool[26890]: ProgramUniform1fv (will be remapped) */
   "iiip\0"
   "glProgramUniform1fv\0"
   "glProgramUniform1fvEXT\0"
   "\0"
   /* _mesa_function_pool[26939]: ProgramUniform2fv (will be remapped) */
   "iiip\0"
   "glProgramUniform2fv\0"
   "glProgramUniform2fvEXT\0"
   "\0"
   /* _mesa_function_pool[26988]: ProgramUniform3fv (will be remapped) */
   "iiip\0"
   "glProgramUniform3fv\0"
   "glProgramUniform3fvEXT\0"
   "\0"
   /* _mesa_function_pool[27037]: ProgramUniform4fv (will be remapped) */
   "iiip\0"
   "glProgramUniform4fv\0"
   "glProgramUniform4fvEXT\0"
   "\0"
   /* _mesa_function_pool[27086]: ProgramUniformMatrix2fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix2fv\0"
   "glProgramUniformMatrix2fvEXT\0"
   "\0"
   /* _mesa_function_pool[27148]: ProgramUniformMatrix3fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix3fv\0"
   "glProgramUniformMatrix3fvEXT\0"
   "\0"
   /* _mesa_function_pool[27210]: ProgramUniformMatrix4fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix4fv\0"
   "glProgramUniformMatrix4fvEXT\0"
   "\0"
   /* _mesa_function_pool[27272]: ProgramUniformMatrix2x3fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix2x3fv\0"
   "glProgramUniformMatrix2x3fvEXT\0"
   "\0"
   /* _mesa_function_pool[27338]: ProgramUniformMatrix3x2fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix3x2fv\0"
   "glProgramUniformMatrix3x2fvEXT\0"
   "\0"
   /* _mesa_function_pool[27404]: ProgramUniformMatrix2x4fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix2x4fv\0"
   "glProgramUniformMatrix2x4fvEXT\0"
   "\0"
   /* _mesa_function_pool[27470]: ProgramUniformMatrix4x2fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix4x2fv\0"
   "glProgramUniformMatrix4x2fvEXT\0"
   "\0"
   /* _mesa_function_pool[27536]: ProgramUniformMatrix3x4fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix3x4fv\0"
   "glProgramUniformMatrix3x4fvEXT\0"
   "\0"
   /* _mesa_function_pool[27602]: ProgramUniformMatrix4x3fv (will be remapped) */
   "iiiip\0"
   "glProgramUniformMatrix4x3fv\0"
   "glProgramUniformMatrix4x3fvEXT\0"
   "\0"
   /* _mesa_function_pool[27668]: ValidateProgramPipeline (will be remapped) */
   "i\0"
   "glValidateProgramPipeline\0"
   "glValidateProgramPipelineEXT\0"
   "\0"
   /* _mesa_function_pool[27726]: GetProgramPipelineInfoLog (will be remapped) */
   "iipp\0"
   "glGetProgramPipelineInfoLog\0"
   "glGetProgramPipelineInfoLogEXT\0"
   "\0"
   /* _mesa_function_pool[27791]: VertexAttribL1d (will be remapped) */
   "id\0"
   "glVertexAttribL1d\0"
   "glVertexAttribL1dEXT\0"
   "\0"
   /* _mesa_function_pool[27834]: VertexAttribL2d (will be remapped) */
   "idd\0"
   "glVertexAttribL2d\0"
   "glVertexAttribL2dEXT\0"
   "\0"
   /* _mesa_function_pool[27878]: VertexAttribL3d (will be remapped) */
   "iddd\0"
   "glVertexAttribL3d\0"
   "glVertexAttribL3dEXT\0"
   "\0"
   /* _mesa_function_pool[27923]: VertexAttribL4d (will be remapped) */
   "idddd\0"
   "glVertexAttribL4d\0"
   "glVertexAttribL4dEXT\0"
   "\0"
   /* _mesa_function_pool[27969]: VertexAttribL1dv (will be remapped) */
   "ip\0"
   "glVertexAttribL1dv\0"
   "glVertexAttribL1dvEXT\0"
   "\0"
   /* _mesa_function_pool[28014]: VertexAttribL2dv (will be remapped) */
   "ip\0"
   "glVertexAttribL2dv\0"
   "glVertexAttribL2dvEXT\0"
   "\0"
   /* _mesa_function_pool[28059]: VertexAttribL3dv (will be remapped) */
   "ip\0"
   "glVertexAttribL3dv\0"
   "glVertexAttribL3dvEXT\0"
   "\0"
   /* _mesa_function_pool[28104]: VertexAttribL4dv (will be remapped) */
   "ip\0"
   "glVertexAttribL4dv\0"
   "glVertexAttribL4dvEXT\0"
   "\0"
   /* _mesa_function_pool[28149]: VertexAttribLPointer (will be remapped) */
   "iiiip\0"
   "glVertexAttribLPointer\0"
   "glVertexAttribLPointerEXT\0"
   "\0"
   /* _mesa_function_pool[28205]: GetVertexAttribLdv (will be remapped) */
   "iip\0"
   "glGetVertexAttribLdv\0"
   "glGetVertexAttribLdvEXT\0"
   "\0"
   /* _mesa_function_pool[28255]: VertexArrayVertexAttribLOffsetEXT (will be remapped) */
   "iiiiiii\0"
   "glVertexArrayVertexAttribLOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[28300]: GetShaderPrecisionFormat (will be remapped) */
   "iipp\0"
   "glGetShaderPrecisionFormat\0"
   "\0"
   /* _mesa_function_pool[28333]: ReleaseShaderCompiler (will be remapped) */
   "\0"
   "glReleaseShaderCompiler\0"
   "\0"
   /* _mesa_function_pool[28359]: ShaderBinary (will be remapped) */
   "ipipi\0"
   "glShaderBinary\0"
   "\0"
   /* _mesa_function_pool[28381]: ClearDepthf (will be remapped) */
   "f\0"
   "glClearDepthf\0"
   "glClearDepthfOES\0"
   "\0"
   /* _mesa_function_pool[28415]: DepthRangef (will be remapped) */
   "ff\0"
   "glDepthRangef\0"
   "glDepthRangefOES\0"
   "\0"
   /* _mesa_function_pool[28450]: GetProgramBinary (will be remapped) */
   "iippp\0"
   "glGetProgramBinary\0"
   "glGetProgramBinaryOES\0"
   "\0"
   /* _mesa_function_pool[28498]: ProgramBinary (will be remapped) */
   "iipi\0"
   "glProgramBinary\0"
   "glProgramBinaryOES\0"
   "\0"
   /* _mesa_function_pool[28539]: ProgramParameteri (will be remapped) */
   "iii\0"
   "glProgramParameteri\0"
   "glProgramParameteriEXT\0"
   "\0"
   /* _mesa_function_pool[28587]: DebugMessageControl (will be remapped) */
   "iiiipi\0"
   "glDebugMessageControlARB\0"
   "glDebugMessageControl\0"
   "glDebugMessageControlKHR\0"
   "\0"
   /* _mesa_function_pool[28667]: DebugMessageInsert (will be remapped) */
   "iiiiip\0"
   "glDebugMessageInsertARB\0"
   "glDebugMessageInsert\0"
   "glDebugMessageInsertKHR\0"
   "\0"
   /* _mesa_function_pool[28744]: DebugMessageCallback (will be remapped) */
   "pp\0"
   "glDebugMessageCallbackARB\0"
   "glDebugMessageCallback\0"
   "glDebugMessageCallbackKHR\0"
   "\0"
   /* _mesa_function_pool[28823]: GetDebugMessageLog (will be remapped) */
   "iipppppp\0"
   "glGetDebugMessageLogARB\0"
   "glGetDebugMessageLog\0"
   "glGetDebugMessageLogKHR\0"
   "\0"
   /* _mesa_function_pool[28902]: GetGraphicsResetStatusARB (will be remapped) */
   "\0"
   "glGetGraphicsResetStatusARB\0"
   "glGetGraphicsResetStatus\0"
   "glGetGraphicsResetStatusKHR\0"
   "glGetGraphicsResetStatusEXT\0"
   "\0"
   /* _mesa_function_pool[29013]: GetnMapdvARB (will be remapped) */
   "iiip\0"
   "glGetnMapdvARB\0"
   "\0"
   /* _mesa_function_pool[29034]: GetnMapfvARB (will be remapped) */
   "iiip\0"
   "glGetnMapfvARB\0"
   "\0"
   /* _mesa_function_pool[29055]: GetnMapivARB (will be remapped) */
   "iiip\0"
   "glGetnMapivARB\0"
   "\0"
   /* _mesa_function_pool[29076]: GetnPixelMapfvARB (will be remapped) */
   "iip\0"
   "glGetnPixelMapfvARB\0"
   "\0"
   /* _mesa_function_pool[29101]: GetnPixelMapuivARB (will be remapped) */
   "iip\0"
   "glGetnPixelMapuivARB\0"
   "\0"
   /* _mesa_function_pool[29127]: GetnPixelMapusvARB (will be remapped) */
   "iip\0"
   "glGetnPixelMapusvARB\0"
   "\0"
   /* _mesa_function_pool[29153]: GetnPolygonStippleARB (will be remapped) */
   "ip\0"
   "glGetnPolygonStippleARB\0"
   "\0"
   /* _mesa_function_pool[29181]: GetnTexImageARB (will be remapped) */
   "iiiiip\0"
   "glGetnTexImageARB\0"
   "\0"
   /* _mesa_function_pool[29207]: ReadnPixelsARB (will be remapped) */
   "iiiiiiip\0"
   "glReadnPixelsARB\0"
   "glReadnPixels\0"
   "glReadnPixelsKHR\0"
   "glReadnPixelsEXT\0"
   "\0"
   /* _mesa_function_pool[29282]: GetnColorTableARB (will be remapped) */
   "iiiip\0"
   "glGetnColorTableARB\0"
   "\0"
   /* _mesa_function_pool[29309]: GetnConvolutionFilterARB (will be remapped) */
   "iiiip\0"
   "glGetnConvolutionFilterARB\0"
   "\0"
   /* _mesa_function_pool[29343]: GetnSeparableFilterARB (will be remapped) */
   "iiiipipp\0"
   "glGetnSeparableFilterARB\0"
   "\0"
   /* _mesa_function_pool[29378]: GetnHistogramARB (will be remapped) */
   "iiiiip\0"
   "glGetnHistogramARB\0"
   "\0"
   /* _mesa_function_pool[29405]: GetnMinmaxARB (will be remapped) */
   "iiiiip\0"
   "glGetnMinmaxARB\0"
   "\0"
   /* _mesa_function_pool[29429]: GetnCompressedTexImageARB (will be remapped) */
   "iiip\0"
   "glGetnCompressedTexImageARB\0"
   "\0"
   /* _mesa_function_pool[29463]: GetnUniformfvARB (will be remapped) */
   "iiip\0"
   "glGetnUniformfvARB\0"
   "glGetnUniformfv\0"
   "glGetnUniformfvKHR\0"
   "glGetnUniformfvEXT\0"
   "\0"
   /* _mesa_function_pool[29542]: GetnUniformivARB (will be remapped) */
   "iiip\0"
   "glGetnUniformivARB\0"
   "glGetnUniformiv\0"
   "glGetnUniformivKHR\0"
   "glGetnUniformivEXT\0"
   "\0"
   /* _mesa_function_pool[29621]: GetnUniformuivARB (will be remapped) */
   "iiip\0"
   "glGetnUniformuivARB\0"
   "glGetnUniformuiv\0"
   "glGetnUniformuivKHR\0"
   "\0"
   /* _mesa_function_pool[29684]: GetnUniformdvARB (will be remapped) */
   "iiip\0"
   "glGetnUniformdvARB\0"
   "\0"
   /* _mesa_function_pool[29709]: DrawArraysInstancedBaseInstance (will be remapped) */
   "iiiii\0"
   "glDrawArraysInstancedBaseInstance\0"
   "glInternalDrawArraysInstancedBaseInstance\0"
   "glDrawArraysInstancedBaseInstanceEXT\0"
   "\0"
   /* _mesa_function_pool[29829]: DrawElementsInstancedBaseInstance (will be remapped) */
   "iiipii\0"
   "glDrawElementsInstancedBaseInstance\0"
   "glDrawElementsInstancedBaseInstanceEXT\0"
   "\0"
   /* _mesa_function_pool[29912]: DrawElementsInstancedBaseVertexBaseInstance (will be remapped) */
   "iiipiii\0"
   "glDrawElementsInstancedBaseVertexBaseInstance\0"
   "glInternalDrawElementsInstancedBaseVertexBaseInstance\0"
   "glDrawElementsInstancedBaseVertexBaseInstanceEXT\0"
   "\0"
   /* _mesa_function_pool[30070]: DrawTransformFeedbackInstanced (will be remapped) */
   "iii\0"
   "glDrawTransformFeedbackInstanced\0"
   "\0"
   /* _mesa_function_pool[30108]: DrawTransformFeedbackStreamInstanced (will be remapped) */
   "iiii\0"
   "glDrawTransformFeedbackStreamInstanced\0"
   "\0"
   /* _mesa_function_pool[30153]: GetInternalformativ (will be remapped) */
   "iiiip\0"
   "glGetInternalformativ\0"
   "\0"
   /* _mesa_function_pool[30182]: GetActiveAtomicCounterBufferiv (will be remapped) */
   "iiip\0"
   "glGetActiveAtomicCounterBufferiv\0"
   "\0"
   /* _mesa_function_pool[30221]: BindImageTexture (will be remapped) */
   "iiiiiii\0"
   "glBindImageTexture\0"
   "\0"
   /* _mesa_function_pool[30249]: MemoryBarrier (will be remapped) */
   "i\0"
   "glMemoryBarrier\0"
   "glMemoryBarrierEXT\0"
   "\0"
   /* _mesa_function_pool[30287]: TexStorage1D (will be remapped) */
   "iiii\0"
   "glTexStorage1D\0"
   "\0"
   /* _mesa_function_pool[30308]: TexStorage2D (will be remapped) */
   "iiiii\0"
   "glTexStorage2D\0"
   "\0"
   /* _mesa_function_pool[30330]: TexStorage3D (will be remapped) */
   "iiiiii\0"
   "glTexStorage3D\0"
   "\0"
   /* _mesa_function_pool[30353]: TextureStorage1DEXT (will be remapped) */
   "iiiii\0"
   "glTextureStorage1DEXT\0"
   "\0"
   /* _mesa_function_pool[30382]: TextureStorage2DEXT (will be remapped) */
   "iiiiii\0"
   "glTextureStorage2DEXT\0"
   "\0"
   /* _mesa_function_pool[30412]: TextureStorage3DEXT (will be remapped) */
   "iiiiiii\0"
   "glTextureStorage3DEXT\0"
   "\0"
   /* _mesa_function_pool[30443]: PushDebugGroup (will be remapped) */
   "iiip\0"
   "glPushDebugGroup\0"
   "glPushDebugGroupKHR\0"
   "\0"
   /* _mesa_function_pool[30486]: PopDebugGroup (will be remapped) */
   "\0"
   "glPopDebugGroup\0"
   "glPopDebugGroupKHR\0"
   "\0"
   /* _mesa_function_pool[30523]: ObjectLabel (will be remapped) */
   "iiip\0"
   "glObjectLabel\0"
   "glObjectLabelKHR\0"
   "\0"
   /* _mesa_function_pool[30560]: GetObjectLabel (will be remapped) */
   "iiipp\0"
   "glGetObjectLabel\0"
   "glGetObjectLabelKHR\0"
   "\0"
   /* _mesa_function_pool[30604]: ObjectPtrLabel (will be remapped) */
   "pip\0"
   "glObjectPtrLabel\0"
   "glObjectPtrLabelKHR\0"
   "\0"
   /* _mesa_function_pool[30646]: GetObjectPtrLabel (will be remapped) */
   "pipp\0"
   "glGetObjectPtrLabel\0"
   "glGetObjectPtrLabelKHR\0"
   "\0"
   /* _mesa_function_pool[30695]: ClearBufferData (will be remapped) */
   "iiiip\0"
   "glClearBufferData\0"
   "\0"
   /* _mesa_function_pool[30720]: ClearBufferSubData (will be remapped) */
   "iiiiiip\0"
   "glClearBufferSubData\0"
   "\0"
   /* _mesa_function_pool[30750]: ClearNamedBufferDataEXT (will be remapped) */
   "iiiip\0"
   "glClearNamedBufferDataEXT\0"
   "\0"
   /* _mesa_function_pool[30783]: ClearNamedBufferSubDataEXT (will be remapped) */
   "iiiiiip\0"
   "glClearNamedBufferSubDataEXT\0"
   "\0"
   /* _mesa_function_pool[30821]: DispatchCompute (will be remapped) */
   "iii\0"
   "glDispatchCompute\0"
   "\0"
   /* _mesa_function_pool[30844]: DispatchComputeIndirect (will be remapped) */
   "i\0"
   "glDispatchComputeIndirect\0"
   "\0"
   /* _mesa_function_pool[30873]: CopyImageSubData (will be remapped) */
   "iiiiiiiiiiiiiii\0"
   "glCopyImageSubData\0"
   "glCopyImageSubDataEXT\0"
   "glCopyImageSubDataOES\0"
   "\0"
   /* _mesa_function_pool[30953]: TextureView (will be remapped) */
   "iiiiiiii\0"
   "glTextureView\0"
   "glTextureViewOES\0"
   "glTextureViewEXT\0"
   "\0"
   /* _mesa_function_pool[31011]: BindVertexBuffer (will be remapped) */
   "iiii\0"
   "glBindVertexBuffer\0"
   "\0"
   /* _mesa_function_pool[31036]: VertexAttribFormat (will be remapped) */
   "iiiii\0"
   "glVertexAttribFormat\0"
   "\0"
   /* _mesa_function_pool[31064]: VertexAttribIFormat (will be remapped) */
   "iiii\0"
   "glVertexAttribIFormat\0"
   "\0"
   /* _mesa_function_pool[31092]: VertexAttribLFormat (will be remapped) */
   "iiii\0"
   "glVertexAttribLFormat\0"
   "\0"
   /* _mesa_function_pool[31120]: VertexAttribBinding (will be remapped) */
   "ii\0"
   "glVertexAttribBinding\0"
   "\0"
   /* _mesa_function_pool[31146]: VertexBindingDivisor (will be remapped) */
   "ii\0"
   "glVertexBindingDivisor\0"
   "\0"
   /* _mesa_function_pool[31173]: VertexArrayBindVertexBufferEXT (will be remapped) */
   "iiiii\0"
   "glVertexArrayBindVertexBufferEXT\0"
   "\0"
   /* _mesa_function_pool[31213]: VertexArrayVertexAttribFormatEXT (will be remapped) */
   "iiiiii\0"
   "glVertexArrayVertexAttribFormatEXT\0"
   "\0"
   /* _mesa_function_pool[31256]: VertexArrayVertexAttribIFormatEXT (will be remapped) */
   "iiiii\0"
   "glVertexArrayVertexAttribIFormatEXT\0"
   "\0"
   /* _mesa_function_pool[31299]: VertexArrayVertexAttribLFormatEXT (will be remapped) */
   "iiiii\0"
   "glVertexArrayVertexAttribLFormatEXT\0"
   "\0"
   /* _mesa_function_pool[31342]: VertexArrayVertexAttribBindingEXT (will be remapped) */
   "iii\0"
   "glVertexArrayVertexAttribBindingEXT\0"
   "\0"
   /* _mesa_function_pool[31383]: VertexArrayVertexBindingDivisorEXT (will be remapped) */
   "iii\0"
   "glVertexArrayVertexBindingDivisorEXT\0"
   "\0"
   /* _mesa_function_pool[31425]: FramebufferParameteri (will be remapped) */
   "iii\0"
   "glFramebufferParameteri\0"
   "\0"
   /* _mesa_function_pool[31454]: GetFramebufferParameteriv (will be remapped) */
   "iip\0"
   "glGetFramebufferParameteriv\0"
   "\0"
   /* _mesa_function_pool[31487]: NamedFramebufferParameteriEXT (will be remapped) */
   "iii\0"
   "glNamedFramebufferParameteriEXT\0"
   "\0"
   /* _mesa_function_pool[31524]: GetNamedFramebufferParameterivEXT (will be remapped) */
   "iip\0"
   "glGetNamedFramebufferParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[31565]: GetInternalformati64v (will be remapped) */
   "iiiip\0"
   "glGetInternalformati64v\0"
   "\0"
   /* _mesa_function_pool[31596]: InvalidateTexSubImage (will be remapped) */
   "iiiiiiii\0"
   "glInvalidateTexSubImage\0"
   "\0"
   /* _mesa_function_pool[31630]: InvalidateTexImage (will be remapped) */
   "ii\0"
   "glInvalidateTexImage\0"
   "\0"
   /* _mesa_function_pool[31655]: InvalidateBufferSubData (will be remapped) */
   "iii\0"
   "glInvalidateBufferSubData\0"
   "\0"
   /* _mesa_function_pool[31686]: InvalidateBufferData (will be remapped) */
   "i\0"
   "glInvalidateBufferData\0"
   "\0"
   /* _mesa_function_pool[31712]: InvalidateSubFramebuffer (will be remapped) */
   "iipiiii\0"
   "glInvalidateSubFramebuffer\0"
   "\0"
   /* _mesa_function_pool[31748]: InvalidateFramebuffer (will be remapped) */
   "iip\0"
   "glInvalidateFramebuffer\0"
   "\0"
   /* _mesa_function_pool[31777]: GetProgramInterfaceiv (will be remapped) */
   "iiip\0"
   "glGetProgramInterfaceiv\0"
   "\0"
   /* _mesa_function_pool[31807]: GetProgramResourceIndex (will be remapped) */
   "iip\0"
   "glGetProgramResourceIndex\0"
   "\0"
   /* _mesa_function_pool[31838]: GetProgramResourceName (will be remapped) */
   "iiiipp\0"
   "glGetProgramResourceName\0"
   "\0"
   /* _mesa_function_pool[31871]: GetProgramResourceiv (will be remapped) */
   "iiiipipp\0"
   "glGetProgramResourceiv\0"
   "\0"
   /* _mesa_function_pool[31904]: GetProgramResourceLocation (will be remapped) */
   "iip\0"
   "glGetProgramResourceLocation\0"
   "\0"
   /* _mesa_function_pool[31938]: GetProgramResourceLocationIndex (will be remapped) */
   "iip\0"
   "glGetProgramResourceLocationIndex\0"
   "glGetProgramResourceLocationIndexEXT\0"
   "\0"
   /* _mesa_function_pool[32014]: ShaderStorageBlockBinding (will be remapped) */
   "iii\0"
   "glShaderStorageBlockBinding\0"
   "\0"
   /* _mesa_function_pool[32047]: TexBufferRange (will be remapped) */
   "iiiii\0"
   "glTexBufferRange\0"
   "glTexBufferRangeEXT\0"
   "glTexBufferRangeOES\0"
   "\0"
   /* _mesa_function_pool[32111]: TextureBufferRangeEXT (will be remapped) */
   "iiiiii\0"
   "glTextureBufferRangeEXT\0"
   "\0"
   /* _mesa_function_pool[32143]: TexStorage2DMultisample (will be remapped) */
   "iiiiii\0"
   "glTexStorage2DMultisample\0"
   "\0"
   /* _mesa_function_pool[32177]: TexStorage3DMultisample (will be remapped) */
   "iiiiiii\0"
   "glTexStorage3DMultisample\0"
   "glTexStorage3DMultisampleOES\0"
   "\0"
   /* _mesa_function_pool[32241]: TextureStorage2DMultisampleEXT (will be remapped) */
   "iiiiiii\0"
   "glTextureStorage2DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[32283]: TextureStorage3DMultisampleEXT (will be remapped) */
   "iiiiiiii\0"
   "glTextureStorage3DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[32326]: BufferStorage (will be remapped) */
   "iipi\0"
   "glBufferStorage\0"
   "glBufferStorageEXT\0"
   "\0"
   /* _mesa_function_pool[32367]: NamedBufferStorageEXT (will be remapped) */
   "iipi\0"
   "glNamedBufferStorageEXT\0"
   "\0"
   /* _mesa_function_pool[32397]: ClearTexImage (will be remapped) */
   "iiiip\0"
   "glClearTexImage\0"
   "glClearTexImageEXT\0"
   "\0"
   /* _mesa_function_pool[32439]: ClearTexSubImage (will be remapped) */
   "iiiiiiiiiip\0"
   "glClearTexSubImage\0"
   "glClearTexSubImageEXT\0"
   "\0"
   /* _mesa_function_pool[32493]: BindBuffersBase (will be remapped) */
   "iiip\0"
   "glBindBuffersBase\0"
   "\0"
   /* _mesa_function_pool[32517]: BindBuffersRange (will be remapped) */
   "iiippp\0"
   "glBindBuffersRange\0"
   "\0"
   /* _mesa_function_pool[32544]: BindTextures (will be remapped) */
   "iip\0"
   "glBindTextures\0"
   "\0"
   /* _mesa_function_pool[32564]: BindSamplers (will be remapped) */
   "iip\0"
   "glBindSamplers\0"
   "\0"
   /* _mesa_function_pool[32584]: BindImageTextures (will be remapped) */
   "iip\0"
   "glBindImageTextures\0"
   "\0"
   /* _mesa_function_pool[32609]: BindVertexBuffers (will be remapped) */
   "iippp\0"
   "glBindVertexBuffers\0"
   "\0"
   /* _mesa_function_pool[32636]: GetTextureHandleARB (will be remapped) */
   "i\0"
   "glGetTextureHandleARB\0"
   "\0"
   /* _mesa_function_pool[32661]: GetTextureSamplerHandleARB (will be remapped) */
   "ii\0"
   "glGetTextureSamplerHandleARB\0"
   "\0"
   /* _mesa_function_pool[32694]: MakeTextureHandleResidentARB (will be remapped) */
   "i\0"
   "glMakeTextureHandleResidentARB\0"
   "\0"
   /* _mesa_function_pool[32728]: MakeTextureHandleNonResidentARB (will be remapped) */
   "i\0"
   "glMakeTextureHandleNonResidentARB\0"
   "\0"
   /* _mesa_function_pool[32765]: GetImageHandleARB (will be remapped) */
   "iiiii\0"
   "glGetImageHandleARB\0"
   "\0"
   /* _mesa_function_pool[32792]: MakeImageHandleResidentARB (will be remapped) */
   "ii\0"
   "glMakeImageHandleResidentARB\0"
   "\0"
   /* _mesa_function_pool[32825]: MakeImageHandleNonResidentARB (will be remapped) */
   "i\0"
   "glMakeImageHandleNonResidentARB\0"
   "\0"
   /* _mesa_function_pool[32860]: UniformHandleui64ARB (will be remapped) */
   "ii\0"
   "glUniformHandleui64ARB\0"
   "\0"
   /* _mesa_function_pool[32887]: UniformHandleui64vARB (will be remapped) */
   "iip\0"
   "glUniformHandleui64vARB\0"
   "\0"
   /* _mesa_function_pool[32916]: ProgramUniformHandleui64ARB (will be remapped) */
   "iii\0"
   "glProgramUniformHandleui64ARB\0"
   "\0"
   /* _mesa_function_pool[32951]: ProgramUniformHandleui64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniformHandleui64vARB\0"
   "\0"
   /* _mesa_function_pool[32988]: IsTextureHandleResidentARB (will be remapped) */
   "i\0"
   "glIsTextureHandleResidentARB\0"
   "\0"
   /* _mesa_function_pool[33020]: IsImageHandleResidentARB (will be remapped) */
   "i\0"
   "glIsImageHandleResidentARB\0"
   "\0"
   /* _mesa_function_pool[33050]: VertexAttribL1ui64ARB (will be remapped) */
   "ii\0"
   "glVertexAttribL1ui64ARB\0"
   "\0"
   /* _mesa_function_pool[33078]: VertexAttribL1ui64vARB (will be remapped) */
   "ip\0"
   "glVertexAttribL1ui64vARB\0"
   "\0"
   /* _mesa_function_pool[33107]: GetVertexAttribLui64vARB (will be remapped) */
   "iip\0"
   "glGetVertexAttribLui64vARB\0"
   "\0"
   /* _mesa_function_pool[33139]: DispatchComputeGroupSizeARB (will be remapped) */
   "iiiiii\0"
   "glDispatchComputeGroupSizeARB\0"
   "\0"
   /* _mesa_function_pool[33177]: MultiDrawArraysIndirectCountARB (will be remapped) */
   "iiiii\0"
   "glMultiDrawArraysIndirectCountARB\0"
   "glMultiDrawArraysIndirectCount\0"
   "\0"
   /* _mesa_function_pool[33249]: MultiDrawElementsIndirectCountARB (will be remapped) */
   "iiiiii\0"
   "glMultiDrawElementsIndirectCountARB\0"
   "glMultiDrawElementsIndirectCount\0"
   "\0"
   /* _mesa_function_pool[33326]: TexPageCommitmentARB (will be remapped) */
   "iiiiiiiii\0"
   "glTexPageCommitmentARB\0"
   "\0"
   /* _mesa_function_pool[33360]: TexturePageCommitmentEXT (will be remapped) */
   "iiiiiiiii\0"
   "glTexturePageCommitmentEXT\0"
   "\0"
   /* _mesa_function_pool[33398]: ClipControl (will be remapped) */
   "ii\0"
   "glClipControl\0"
   "glClipControlEXT\0"
   "\0"
   /* _mesa_function_pool[33433]: CreateTransformFeedbacks (will be remapped) */
   "ip\0"
   "glCreateTransformFeedbacks\0"
   "\0"
   /* _mesa_function_pool[33464]: TransformFeedbackBufferBase (will be remapped) */
   "iii\0"
   "glTransformFeedbackBufferBase\0"
   "\0"
   /* _mesa_function_pool[33499]: TransformFeedbackBufferRange (will be remapped) */
   "iiiii\0"
   "glTransformFeedbackBufferRange\0"
   "\0"
   /* _mesa_function_pool[33537]: GetTransformFeedbackiv (will be remapped) */
   "iip\0"
   "glGetTransformFeedbackiv\0"
   "\0"
   /* _mesa_function_pool[33567]: GetTransformFeedbacki_v (will be remapped) */
   "iiip\0"
   "glGetTransformFeedbacki_v\0"
   "\0"
   /* _mesa_function_pool[33599]: GetTransformFeedbacki64_v (will be remapped) */
   "iiip\0"
   "glGetTransformFeedbacki64_v\0"
   "\0"
   /* _mesa_function_pool[33633]: CreateBuffers (will be remapped) */
   "ip\0"
   "glCreateBuffers\0"
   "\0"
   /* _mesa_function_pool[33653]: NamedBufferStorage (will be remapped) */
   "iipi\0"
   "glNamedBufferStorage\0"
   "\0"
   /* _mesa_function_pool[33680]: NamedBufferData (will be remapped) */
   "iipi\0"
   "glNamedBufferData\0"
   "\0"
   /* _mesa_function_pool[33704]: NamedBufferSubData (will be remapped) */
   "iiip\0"
   "glNamedBufferSubData\0"
   "\0"
   /* _mesa_function_pool[33731]: CopyNamedBufferSubData (will be remapped) */
   "iiiii\0"
   "glCopyNamedBufferSubData\0"
   "\0"
   /* _mesa_function_pool[33763]: ClearNamedBufferData (will be remapped) */
   "iiiip\0"
   "glClearNamedBufferData\0"
   "\0"
   /* _mesa_function_pool[33793]: ClearNamedBufferSubData (will be remapped) */
   "iiiiiip\0"
   "glClearNamedBufferSubData\0"
   "\0"
   /* _mesa_function_pool[33828]: MapNamedBuffer (will be remapped) */
   "ii\0"
   "glMapNamedBuffer\0"
   "\0"
   /* _mesa_function_pool[33849]: MapNamedBufferRange (will be remapped) */
   "iiii\0"
   "glMapNamedBufferRange\0"
   "\0"
   /* _mesa_function_pool[33877]: UnmapNamedBufferEXT (will be remapped) */
   "i\0"
   "glUnmapNamedBuffer\0"
   "glUnmapNamedBufferEXT\0"
   "\0"
   /* _mesa_function_pool[33921]: FlushMappedNamedBufferRange (will be remapped) */
   "iii\0"
   "glFlushMappedNamedBufferRange\0"
   "\0"
   /* _mesa_function_pool[33956]: GetNamedBufferParameteriv (will be remapped) */
   "iip\0"
   "glGetNamedBufferParameteriv\0"
   "\0"
   /* _mesa_function_pool[33989]: GetNamedBufferParameteri64v (will be remapped) */
   "iip\0"
   "glGetNamedBufferParameteri64v\0"
   "\0"
   /* _mesa_function_pool[34024]: GetNamedBufferPointerv (will be remapped) */
   "iip\0"
   "glGetNamedBufferPointerv\0"
   "\0"
   /* _mesa_function_pool[34054]: GetNamedBufferSubData (will be remapped) */
   "iiip\0"
   "glGetNamedBufferSubData\0"
   "\0"
   /* _mesa_function_pool[34084]: CreateFramebuffers (will be remapped) */
   "ip\0"
   "glCreateFramebuffers\0"
   "\0"
   /* _mesa_function_pool[34109]: NamedFramebufferRenderbuffer (will be remapped) */
   "iiii\0"
   "glNamedFramebufferRenderbuffer\0"
   "\0"
   /* _mesa_function_pool[34146]: NamedFramebufferParameteri (will be remapped) */
   "iii\0"
   "glNamedFramebufferParameteri\0"
   "\0"
   /* _mesa_function_pool[34180]: NamedFramebufferTexture (will be remapped) */
   "iiii\0"
   "glNamedFramebufferTexture\0"
   "\0"
   /* _mesa_function_pool[34212]: NamedFramebufferTextureLayer (will be remapped) */
   "iiiii\0"
   "glNamedFramebufferTextureLayer\0"
   "\0"
   /* _mesa_function_pool[34250]: NamedFramebufferDrawBuffer (will be remapped) */
   "ii\0"
   "glNamedFramebufferDrawBuffer\0"
   "\0"
   /* _mesa_function_pool[34283]: NamedFramebufferDrawBuffers (will be remapped) */
   "iip\0"
   "glNamedFramebufferDrawBuffers\0"
   "\0"
   /* _mesa_function_pool[34318]: NamedFramebufferReadBuffer (will be remapped) */
   "ii\0"
   "glNamedFramebufferReadBuffer\0"
   "\0"
   /* _mesa_function_pool[34351]: InvalidateNamedFramebufferData (will be remapped) */
   "iip\0"
   "glInvalidateNamedFramebufferData\0"
   "\0"
   /* _mesa_function_pool[34389]: InvalidateNamedFramebufferSubData (will be remapped) */
   "iipiiii\0"
   "glInvalidateNamedFramebufferSubData\0"
   "\0"
   /* _mesa_function_pool[34434]: ClearNamedFramebufferiv (will be remapped) */
   "iiip\0"
   "glClearNamedFramebufferiv\0"
   "\0"
   /* _mesa_function_pool[34466]: ClearNamedFramebufferuiv (will be remapped) */
   "iiip\0"
   "glClearNamedFramebufferuiv\0"
   "\0"
   /* _mesa_function_pool[34499]: ClearNamedFramebufferfv (will be remapped) */
   "iiip\0"
   "glClearNamedFramebufferfv\0"
   "\0"
   /* _mesa_function_pool[34531]: ClearNamedFramebufferfi (will be remapped) */
   "iiifi\0"
   "glClearNamedFramebufferfi\0"
   "\0"
   /* _mesa_function_pool[34564]: BlitNamedFramebuffer (will be remapped) */
   "iiiiiiiiiiii\0"
   "glBlitNamedFramebuffer\0"
   "\0"
   /* _mesa_function_pool[34601]: CheckNamedFramebufferStatus (will be remapped) */
   "ii\0"
   "glCheckNamedFramebufferStatus\0"
   "\0"
   /* _mesa_function_pool[34635]: GetNamedFramebufferParameteriv (will be remapped) */
   "iip\0"
   "glGetNamedFramebufferParameteriv\0"
   "\0"
   /* _mesa_function_pool[34673]: GetNamedFramebufferAttachmentParameteriv (will be remapped) */
   "iiip\0"
   "glGetNamedFramebufferAttachmentParameteriv\0"
   "\0"
   /* _mesa_function_pool[34722]: CreateRenderbuffers (will be remapped) */
   "ip\0"
   "glCreateRenderbuffers\0"
   "\0"
   /* _mesa_function_pool[34748]: NamedRenderbufferStorage (will be remapped) */
   "iiii\0"
   "glNamedRenderbufferStorage\0"
   "\0"
   /* _mesa_function_pool[34781]: NamedRenderbufferStorageMultisample (will be remapped) */
   "iiiii\0"
   "glNamedRenderbufferStorageMultisample\0"
   "\0"
   /* _mesa_function_pool[34826]: GetNamedRenderbufferParameteriv (will be remapped) */
   "iip\0"
   "glGetNamedRenderbufferParameteriv\0"
   "\0"
   /* _mesa_function_pool[34865]: CreateTextures (will be remapped) */
   "iip\0"
   "glCreateTextures\0"
   "\0"
   /* _mesa_function_pool[34887]: TextureBuffer (will be remapped) */
   "iii\0"
   "glTextureBuffer\0"
   "\0"
   /* _mesa_function_pool[34908]: TextureBufferRange (will be remapped) */
   "iiiii\0"
   "glTextureBufferRange\0"
   "\0"
   /* _mesa_function_pool[34936]: TextureStorage1D (will be remapped) */
   "iiii\0"
   "glTextureStorage1D\0"
   "\0"
   /* _mesa_function_pool[34961]: TextureStorage2D (will be remapped) */
   "iiiii\0"
   "glTextureStorage2D\0"
   "\0"
   /* _mesa_function_pool[34987]: TextureStorage3D (will be remapped) */
   "iiiiii\0"
   "glTextureStorage3D\0"
   "\0"
   /* _mesa_function_pool[35014]: TextureStorage2DMultisample (will be remapped) */
   "iiiiii\0"
   "glTextureStorage2DMultisample\0"
   "\0"
   /* _mesa_function_pool[35052]: TextureStorage3DMultisample (will be remapped) */
   "iiiiiii\0"
   "glTextureStorage3DMultisample\0"
   "\0"
   /* _mesa_function_pool[35091]: TextureSubImage1D (will be remapped) */
   "iiiiiip\0"
   "glTextureSubImage1D\0"
   "\0"
   /* _mesa_function_pool[35120]: TextureSubImage2D (will be remapped) */
   "iiiiiiiip\0"
   "glTextureSubImage2D\0"
   "\0"
   /* _mesa_function_pool[35151]: TextureSubImage3D (will be remapped) */
   "iiiiiiiiiip\0"
   "glTextureSubImage3D\0"
   "\0"
   /* _mesa_function_pool[35184]: CompressedTextureSubImage1D (will be remapped) */
   "iiiiiip\0"
   "glCompressedTextureSubImage1D\0"
   "\0"
   /* _mesa_function_pool[35223]: CompressedTextureSubImage2D (will be remapped) */
   "iiiiiiiip\0"
   "glCompressedTextureSubImage2D\0"
   "\0"
   /* _mesa_function_pool[35264]: CompressedTextureSubImage3D (will be remapped) */
   "iiiiiiiiiip\0"
   "glCompressedTextureSubImage3D\0"
   "\0"
   /* _mesa_function_pool[35307]: CopyTextureSubImage1D (will be remapped) */
   "iiiiii\0"
   "glCopyTextureSubImage1D\0"
   "\0"
   /* _mesa_function_pool[35339]: CopyTextureSubImage2D (will be remapped) */
   "iiiiiiii\0"
   "glCopyTextureSubImage2D\0"
   "\0"
   /* _mesa_function_pool[35373]: CopyTextureSubImage3D (will be remapped) */
   "iiiiiiiii\0"
   "glCopyTextureSubImage3D\0"
   "\0"
   /* _mesa_function_pool[35408]: TextureParameterf (will be remapped) */
   "iif\0"
   "glTextureParameterf\0"
   "\0"
   /* _mesa_function_pool[35433]: TextureParameterfv (will be remapped) */
   "iip\0"
   "glTextureParameterfv\0"
   "\0"
   /* _mesa_function_pool[35459]: TextureParameteri (will be remapped) */
   "iii\0"
   "glTextureParameteri\0"
   "\0"
   /* _mesa_function_pool[35484]: TextureParameterIiv (will be remapped) */
   "iip\0"
   "glTextureParameterIiv\0"
   "\0"
   /* _mesa_function_pool[35511]: TextureParameterIuiv (will be remapped) */
   "iip\0"
   "glTextureParameterIuiv\0"
   "\0"
   /* _mesa_function_pool[35539]: TextureParameteriv (will be remapped) */
   "iip\0"
   "glTextureParameteriv\0"
   "\0"
   /* _mesa_function_pool[35565]: GenerateTextureMipmap (will be remapped) */
   "i\0"
   "glGenerateTextureMipmap\0"
   "\0"
   /* _mesa_function_pool[35592]: BindTextureUnit (will be remapped) */
   "ii\0"
   "glBindTextureUnit\0"
   "\0"
   /* _mesa_function_pool[35614]: GetTextureImage (will be remapped) */
   "iiiiip\0"
   "glGetTextureImage\0"
   "\0"
   /* _mesa_function_pool[35640]: GetCompressedTextureImage (will be remapped) */
   "iiip\0"
   "glGetCompressedTextureImage\0"
   "\0"
   /* _mesa_function_pool[35674]: GetTextureLevelParameterfv (will be remapped) */
   "iiip\0"
   "glGetTextureLevelParameterfv\0"
   "\0"
   /* _mesa_function_pool[35709]: GetTextureLevelParameteriv (will be remapped) */
   "iiip\0"
   "glGetTextureLevelParameteriv\0"
   "\0"
   /* _mesa_function_pool[35744]: GetTextureParameterfv (will be remapped) */
   "iip\0"
   "glGetTextureParameterfv\0"
   "\0"
   /* _mesa_function_pool[35773]: GetTextureParameterIiv (will be remapped) */
   "iip\0"
   "glGetTextureParameterIiv\0"
   "\0"
   /* _mesa_function_pool[35803]: GetTextureParameterIuiv (will be remapped) */
   "iip\0"
   "glGetTextureParameterIuiv\0"
   "\0"
   /* _mesa_function_pool[35834]: GetTextureParameteriv (will be remapped) */
   "iip\0"
   "glGetTextureParameteriv\0"
   "\0"
   /* _mesa_function_pool[35863]: CreateVertexArrays (will be remapped) */
   "ip\0"
   "glCreateVertexArrays\0"
   "\0"
   /* _mesa_function_pool[35888]: DisableVertexArrayAttrib (will be remapped) */
   "ii\0"
   "glDisableVertexArrayAttrib\0"
   "\0"
   /* _mesa_function_pool[35919]: EnableVertexArrayAttrib (will be remapped) */
   "ii\0"
   "glEnableVertexArrayAttrib\0"
   "\0"
   /* _mesa_function_pool[35949]: VertexArrayElementBuffer (will be remapped) */
   "ii\0"
   "glVertexArrayElementBuffer\0"
   "\0"
   /* _mesa_function_pool[35980]: VertexArrayVertexBuffer (will be remapped) */
   "iiiii\0"
   "glVertexArrayVertexBuffer\0"
   "\0"
   /* _mesa_function_pool[36013]: VertexArrayVertexBuffers (will be remapped) */
   "iiippp\0"
   "glVertexArrayVertexBuffers\0"
   "\0"
   /* _mesa_function_pool[36048]: VertexArrayAttribFormat (will be remapped) */
   "iiiiii\0"
   "glVertexArrayAttribFormat\0"
   "\0"
   /* _mesa_function_pool[36082]: VertexArrayAttribIFormat (will be remapped) */
   "iiiii\0"
   "glVertexArrayAttribIFormat\0"
   "\0"
   /* _mesa_function_pool[36116]: VertexArrayAttribLFormat (will be remapped) */
   "iiiii\0"
   "glVertexArrayAttribLFormat\0"
   "\0"
   /* _mesa_function_pool[36150]: VertexArrayAttribBinding (will be remapped) */
   "iii\0"
   "glVertexArrayAttribBinding\0"
   "\0"
   /* _mesa_function_pool[36182]: VertexArrayBindingDivisor (will be remapped) */
   "iii\0"
   "glVertexArrayBindingDivisor\0"
   "\0"
   /* _mesa_function_pool[36215]: GetVertexArrayiv (will be remapped) */
   "iip\0"
   "glGetVertexArrayiv\0"
   "\0"
   /* _mesa_function_pool[36239]: GetVertexArrayIndexediv (will be remapped) */
   "iiip\0"
   "glGetVertexArrayIndexediv\0"
   "\0"
   /* _mesa_function_pool[36271]: GetVertexArrayIndexed64iv (will be remapped) */
   "iiip\0"
   "glGetVertexArrayIndexed64iv\0"
   "\0"
   /* _mesa_function_pool[36305]: CreateSamplers (will be remapped) */
   "ip\0"
   "glCreateSamplers\0"
   "\0"
   /* _mesa_function_pool[36326]: CreateProgramPipelines (will be remapped) */
   "ip\0"
   "glCreateProgramPipelines\0"
   "\0"
   /* _mesa_function_pool[36355]: CreateQueries (will be remapped) */
   "iip\0"
   "glCreateQueries\0"
   "\0"
   /* _mesa_function_pool[36376]: GetQueryBufferObjectiv (will be remapped) */
   "iiii\0"
   "glGetQueryBufferObjectiv\0"
   "\0"
   /* _mesa_function_pool[36407]: GetQueryBufferObjectuiv (will be remapped) */
   "iiii\0"
   "glGetQueryBufferObjectuiv\0"
   "\0"
   /* _mesa_function_pool[36439]: GetQueryBufferObjecti64v (will be remapped) */
   "iiii\0"
   "glGetQueryBufferObjecti64v\0"
   "\0"
   /* _mesa_function_pool[36472]: GetQueryBufferObjectui64v (will be remapped) */
   "iiii\0"
   "glGetQueryBufferObjectui64v\0"
   "\0"
   /* _mesa_function_pool[36506]: GetTextureSubImage (will be remapped) */
   "iiiiiiiiiiip\0"
   "glGetTextureSubImage\0"
   "\0"
   /* _mesa_function_pool[36541]: GetCompressedTextureSubImage (will be remapped) */
   "iiiiiiiiip\0"
   "glGetCompressedTextureSubImage\0"
   "\0"
   /* _mesa_function_pool[36584]: TextureBarrierNV (will be remapped) */
   "\0"
   "glTextureBarrier\0"
   "glTextureBarrierNV\0"
   "\0"
   /* _mesa_function_pool[36622]: BufferPageCommitmentARB (will be remapped) */
   "iiii\0"
   "glBufferPageCommitmentARB\0"
   "\0"
   /* _mesa_function_pool[36654]: NamedBufferPageCommitmentEXT (will be remapped) */
   "iiii\0"
   "glNamedBufferPageCommitmentEXT\0"
   "\0"
   /* _mesa_function_pool[36691]: NamedBufferPageCommitmentARB (will be remapped) */
   "iiii\0"
   "glNamedBufferPageCommitmentARB\0"
   "\0"
   /* _mesa_function_pool[36728]: PrimitiveBoundingBox (will be remapped) */
   "ffffffff\0"
   "glPrimitiveBoundingBox\0"
   "glPrimitiveBoundingBoxARB\0"
   "glPrimitiveBoundingBoxEXT\0"
   "glPrimitiveBoundingBoxOES\0"
   "\0"
   /* _mesa_function_pool[36839]: BlendBarrier (will be remapped) */
   "\0"
   "glBlendBarrier\0"
   "glBlendBarrierKHR\0"
   "\0"
   /* _mesa_function_pool[36874]: Uniform1i64ARB (will be remapped) */
   "ii\0"
   "glUniform1i64ARB\0"
   "glUniform1i64NV\0"
   "\0"
   /* _mesa_function_pool[36911]: Uniform2i64ARB (will be remapped) */
   "iii\0"
   "glUniform2i64ARB\0"
   "glUniform2i64NV\0"
   "\0"
   /* _mesa_function_pool[36949]: Uniform3i64ARB (will be remapped) */
   "iiii\0"
   "glUniform3i64ARB\0"
   "glUniform3i64NV\0"
   "\0"
   /* _mesa_function_pool[36988]: Uniform4i64ARB (will be remapped) */
   "iiiii\0"
   "glUniform4i64ARB\0"
   "glUniform4i64NV\0"
   "\0"
   /* _mesa_function_pool[37028]: Uniform1i64vARB (will be remapped) */
   "iip\0"
   "glUniform1i64vARB\0"
   "glUniform1i64vNV\0"
   "\0"
   /* _mesa_function_pool[37068]: Uniform2i64vARB (will be remapped) */
   "iip\0"
   "glUniform2i64vARB\0"
   "glUniform2i64vNV\0"
   "\0"
   /* _mesa_function_pool[37108]: Uniform3i64vARB (will be remapped) */
   "iip\0"
   "glUniform3i64vARB\0"
   "glUniform3i64vNV\0"
   "\0"
   /* _mesa_function_pool[37148]: Uniform4i64vARB (will be remapped) */
   "iip\0"
   "glUniform4i64vARB\0"
   "glUniform4i64vNV\0"
   "\0"
   /* _mesa_function_pool[37188]: Uniform1ui64ARB (will be remapped) */
   "ii\0"
   "glUniform1ui64ARB\0"
   "glUniform1ui64NV\0"
   "\0"
   /* _mesa_function_pool[37227]: Uniform2ui64ARB (will be remapped) */
   "iii\0"
   "glUniform2ui64ARB\0"
   "glUniform2ui64NV\0"
   "\0"
   /* _mesa_function_pool[37267]: Uniform3ui64ARB (will be remapped) */
   "iiii\0"
   "glUniform3ui64ARB\0"
   "glUniform3ui64NV\0"
   "\0"
   /* _mesa_function_pool[37308]: Uniform4ui64ARB (will be remapped) */
   "iiiii\0"
   "glUniform4ui64ARB\0"
   "glUniform4ui64NV\0"
   "\0"
   /* _mesa_function_pool[37350]: Uniform1ui64vARB (will be remapped) */
   "iip\0"
   "glUniform1ui64vARB\0"
   "glUniform1ui64vNV\0"
   "\0"
   /* _mesa_function_pool[37392]: Uniform2ui64vARB (will be remapped) */
   "iip\0"
   "glUniform2ui64vARB\0"
   "glUniform2ui64vNV\0"
   "\0"
   /* _mesa_function_pool[37434]: Uniform3ui64vARB (will be remapped) */
   "iip\0"
   "glUniform3ui64vARB\0"
   "glUniform3ui64vNV\0"
   "\0"
   /* _mesa_function_pool[37476]: Uniform4ui64vARB (will be remapped) */
   "iip\0"
   "glUniform4ui64vARB\0"
   "glUniform4ui64vNV\0"
   "\0"
   /* _mesa_function_pool[37518]: GetUniformi64vARB (will be remapped) */
   "iip\0"
   "glGetUniformi64vARB\0"
   "glGetUniformi64vNV\0"
   "\0"
   /* _mesa_function_pool[37562]: GetUniformui64vARB (will be remapped) */
   "iip\0"
   "glGetUniformui64vARB\0"
   "glGetUniformui64vNV\0"
   "\0"
   /* _mesa_function_pool[37608]: GetnUniformi64vARB (will be remapped) */
   "iiip\0"
   "glGetnUniformi64vARB\0"
   "\0"
   /* _mesa_function_pool[37635]: GetnUniformui64vARB (will be remapped) */
   "iiip\0"
   "glGetnUniformui64vARB\0"
   "\0"
   /* _mesa_function_pool[37663]: ProgramUniform1i64ARB (will be remapped) */
   "iii\0"
   "glProgramUniform1i64ARB\0"
   "glProgramUniform1i64NV\0"
   "\0"
   /* _mesa_function_pool[37715]: ProgramUniform2i64ARB (will be remapped) */
   "iiii\0"
   "glProgramUniform2i64ARB\0"
   "glProgramUniform2i64NV\0"
   "\0"
   /* _mesa_function_pool[37768]: ProgramUniform3i64ARB (will be remapped) */
   "iiiii\0"
   "glProgramUniform3i64ARB\0"
   "glProgramUniform3i64NV\0"
   "\0"
   /* _mesa_function_pool[37822]: ProgramUniform4i64ARB (will be remapped) */
   "iiiiii\0"
   "glProgramUniform4i64ARB\0"
   "glProgramUniform4i64NV\0"
   "\0"
   /* _mesa_function_pool[37877]: ProgramUniform1i64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform1i64vARB\0"
   "glProgramUniform1i64vNV\0"
   "\0"
   /* _mesa_function_pool[37932]: ProgramUniform2i64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform2i64vARB\0"
   "glProgramUniform2i64vNV\0"
   "\0"
   /* _mesa_function_pool[37987]: ProgramUniform3i64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform3i64vARB\0"
   "glProgramUniform3i64vNV\0"
   "\0"
   /* _mesa_function_pool[38042]: ProgramUniform4i64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform4i64vARB\0"
   "glProgramUniform4i64vNV\0"
   "\0"
   /* _mesa_function_pool[38097]: ProgramUniform1ui64ARB (will be remapped) */
   "iii\0"
   "glProgramUniform1ui64ARB\0"
   "glProgramUniform1ui64NV\0"
   "\0"
   /* _mesa_function_pool[38151]: ProgramUniform2ui64ARB (will be remapped) */
   "iiii\0"
   "glProgramUniform2ui64ARB\0"
   "glProgramUniform2ui64NV\0"
   "\0"
   /* _mesa_function_pool[38206]: ProgramUniform3ui64ARB (will be remapped) */
   "iiiii\0"
   "glProgramUniform3ui64ARB\0"
   "glProgramUniform3ui64NV\0"
   "\0"
   /* _mesa_function_pool[38262]: ProgramUniform4ui64ARB (will be remapped) */
   "iiiiii\0"
   "glProgramUniform4ui64ARB\0"
   "glProgramUniform4ui64NV\0"
   "\0"
   /* _mesa_function_pool[38319]: ProgramUniform1ui64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform1ui64vARB\0"
   "glProgramUniform1ui64vNV\0"
   "\0"
   /* _mesa_function_pool[38376]: ProgramUniform2ui64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform2ui64vARB\0"
   "glProgramUniform2ui64vNV\0"
   "\0"
   /* _mesa_function_pool[38433]: ProgramUniform3ui64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform3ui64vARB\0"
   "glProgramUniform3ui64vNV\0"
   "\0"
   /* _mesa_function_pool[38490]: ProgramUniform4ui64vARB (will be remapped) */
   "iiip\0"
   "glProgramUniform4ui64vARB\0"
   "glProgramUniform4ui64vNV\0"
   "\0"
   /* _mesa_function_pool[38547]: MaxShaderCompilerThreadsKHR (will be remapped) */
   "i\0"
   "glMaxShaderCompilerThreadsKHR\0"
   "glMaxShaderCompilerThreadsARB\0"
   "\0"
   /* _mesa_function_pool[38610]: SpecializeShaderARB (will be remapped) */
   "ipipp\0"
   "glSpecializeShaderARB\0"
   "glSpecializeShader\0"
   "\0"
   /* _mesa_function_pool[38658]: GetTexFilterFuncSGIS (dynamic) */
   "iip\0"
   "glGetTexFilterFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[38686]: TexFilterFuncSGIS (dynamic) */
   "iiip\0"
   "glTexFilterFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[38712]: PixelTexGenParameteriSGIS (dynamic) */
   "ii\0"
   "glPixelTexGenParameteriSGIS\0"
   "\0"
   /* _mesa_function_pool[38744]: PixelTexGenParameterivSGIS (dynamic) */
   "ip\0"
   "glPixelTexGenParameterivSGIS\0"
   "\0"
   /* _mesa_function_pool[38777]: PixelTexGenParameterfSGIS (dynamic) */
   "if\0"
   "glPixelTexGenParameterfSGIS\0"
   "\0"
   /* _mesa_function_pool[38809]: PixelTexGenParameterfvSGIS (dynamic) */
   "ip\0"
   "glPixelTexGenParameterfvSGIS\0"
   "\0"
   /* _mesa_function_pool[38842]: GetPixelTexGenParameterivSGIS (dynamic) */
   "ip\0"
   "glGetPixelTexGenParameterivSGIS\0"
   "\0"
   /* _mesa_function_pool[38878]: GetPixelTexGenParameterfvSGIS (dynamic) */
   "ip\0"
   "glGetPixelTexGenParameterfvSGIS\0"
   "\0"
   /* _mesa_function_pool[38914]: TexImage4DSGIS (dynamic) */
   "iiiiiiiiiip\0"
   "glTexImage4DSGIS\0"
   "\0"
   /* _mesa_function_pool[38944]: TexSubImage4DSGIS (dynamic) */
   "iiiiiiiiiiiip\0"
   "glTexSubImage4DSGIS\0"
   "\0"
   /* _mesa_function_pool[38979]: DetailTexFuncSGIS (dynamic) */
   "iip\0"
   "glDetailTexFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[39004]: GetDetailTexFuncSGIS (dynamic) */
   "ip\0"
   "glGetDetailTexFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[39031]: SharpenTexFuncSGIS (dynamic) */
   "iip\0"
   "glSharpenTexFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[39057]: GetSharpenTexFuncSGIS (dynamic) */
   "ip\0"
   "glGetSharpenTexFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[39085]: SampleMaskSGIS (will be remapped) */
   "fi\0"
   "glSampleMaskSGIS\0"
   "glSampleMaskEXT\0"
   "\0"
   /* _mesa_function_pool[39122]: SamplePatternSGIS (will be remapped) */
   "i\0"
   "glSamplePatternSGIS\0"
   "glSamplePatternEXT\0"
   "\0"
   /* _mesa_function_pool[39164]: ColorPointerEXT (will be remapped) */
   "iiiip\0"
   "glColorPointerEXT\0"
   "\0"
   /* _mesa_function_pool[39189]: EdgeFlagPointerEXT (will be remapped) */
   "iip\0"
   "glEdgeFlagPointerEXT\0"
   "\0"
   /* _mesa_function_pool[39215]: IndexPointerEXT (will be remapped) */
   "iiip\0"
   "glIndexPointerEXT\0"
   "\0"
   /* _mesa_function_pool[39239]: NormalPointerEXT (will be remapped) */
   "iiip\0"
   "glNormalPointerEXT\0"
   "\0"
   /* _mesa_function_pool[39264]: TexCoordPointerEXT (will be remapped) */
   "iiiip\0"
   "glTexCoordPointerEXT\0"
   "\0"
   /* _mesa_function_pool[39292]: VertexPointerEXT (will be remapped) */
   "iiiip\0"
   "glVertexPointerEXT\0"
   "\0"
   /* _mesa_function_pool[39318]: SpriteParameterfSGIX (dynamic) */
   "if\0"
   "glSpriteParameterfSGIX\0"
   "\0"
   /* _mesa_function_pool[39345]: SpriteParameterfvSGIX (dynamic) */
   "ip\0"
   "glSpriteParameterfvSGIX\0"
   "\0"
   /* _mesa_function_pool[39373]: SpriteParameteriSGIX (dynamic) */
   "ii\0"
   "glSpriteParameteriSGIX\0"
   "\0"
   /* _mesa_function_pool[39400]: SpriteParameterivSGIX (dynamic) */
   "ip\0"
   "glSpriteParameterivSGIX\0"
   "\0"
   /* _mesa_function_pool[39428]: GetInstrumentsSGIX (dynamic) */
   "\0"
   "glGetInstrumentsSGIX\0"
   "\0"
   /* _mesa_function_pool[39451]: InstrumentsBufferSGIX (dynamic) */
   "ip\0"
   "glInstrumentsBufferSGIX\0"
   "\0"
   /* _mesa_function_pool[39479]: PollInstrumentsSGIX (dynamic) */
   "p\0"
   "glPollInstrumentsSGIX\0"
   "\0"
   /* _mesa_function_pool[39504]: ReadInstrumentsSGIX (dynamic) */
   "i\0"
   "glReadInstrumentsSGIX\0"
   "\0"
   /* _mesa_function_pool[39529]: StartInstrumentsSGIX (dynamic) */
   "\0"
   "glStartInstrumentsSGIX\0"
   "\0"
   /* _mesa_function_pool[39554]: StopInstrumentsSGIX (dynamic) */
   "i\0"
   "glStopInstrumentsSGIX\0"
   "\0"
   /* _mesa_function_pool[39579]: FrameZoomSGIX (dynamic) */
   "i\0"
   "glFrameZoomSGIX\0"
   "\0"
   /* _mesa_function_pool[39598]: TagSampleBufferSGIX (dynamic) */
   "\0"
   "glTagSampleBufferSGIX\0"
   "\0"
   /* _mesa_function_pool[39622]: ReferencePlaneSGIX (dynamic) */
   "p\0"
   "glReferencePlaneSGIX\0"
   "\0"
   /* _mesa_function_pool[39646]: FlushRasterSGIX (dynamic) */
   "\0"
   "glFlushRasterSGIX\0"
   "\0"
   /* _mesa_function_pool[39666]: FogFuncSGIS (dynamic) */
   "ip\0"
   "glFogFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[39684]: GetFogFuncSGIS (dynamic) */
   "p\0"
   "glGetFogFuncSGIS\0"
   "\0"
   /* _mesa_function_pool[39704]: ImageTransformParameteriHP (dynamic) */
   "iii\0"
   "glImageTransformParameteriHP\0"
   "\0"
   /* _mesa_function_pool[39738]: ImageTransformParameterfHP (dynamic) */
   "iif\0"
   "glImageTransformParameterfHP\0"
   "\0"
   /* _mesa_function_pool[39772]: ImageTransformParameterivHP (dynamic) */
   "iip\0"
   "glImageTransformParameterivHP\0"
   "\0"
   /* _mesa_function_pool[39807]: ImageTransformParameterfvHP (dynamic) */
   "iip\0"
   "glImageTransformParameterfvHP\0"
   "\0"
   /* _mesa_function_pool[39842]: GetImageTransformParameterivHP (dynamic) */
   "iip\0"
   "glGetImageTransformParameterivHP\0"
   "\0"
   /* _mesa_function_pool[39880]: GetImageTransformParameterfvHP (dynamic) */
   "iip\0"
   "glGetImageTransformParameterfvHP\0"
   "\0"
   /* _mesa_function_pool[39918]: HintPGI (dynamic) */
   "ii\0"
   "glHintPGI\0"
   "\0"
   /* _mesa_function_pool[39932]: GetListParameterfvSGIX (dynamic) */
   "iip\0"
   "glGetListParameterfvSGIX\0"
   "\0"
   /* _mesa_function_pool[39962]: GetListParameterivSGIX (dynamic) */
   "iip\0"
   "glGetListParameterivSGIX\0"
   "\0"
   /* _mesa_function_pool[39992]: ListParameterfSGIX (dynamic) */
   "iif\0"
   "glListParameterfSGIX\0"
   "\0"
   /* _mesa_function_pool[40018]: ListParameterfvSGIX (dynamic) */
   "iip\0"
   "glListParameterfvSGIX\0"
   "\0"
   /* _mesa_function_pool[40045]: ListParameteriSGIX (dynamic) */
   "iii\0"
   "glListParameteriSGIX\0"
   "\0"
   /* _mesa_function_pool[40071]: ListParameterivSGIX (dynamic) */
   "iip\0"
   "glListParameterivSGIX\0"
   "\0"
   /* _mesa_function_pool[40098]: IndexMaterialEXT (dynamic) */
   "ii\0"
   "glIndexMaterialEXT\0"
   "\0"
   /* _mesa_function_pool[40121]: IndexFuncEXT (dynamic) */
   "if\0"
   "glIndexFuncEXT\0"
   "\0"
   /* _mesa_function_pool[40140]: LockArraysEXT (will be remapped) */
   "ii\0"
   "glLockArraysEXT\0"
   "\0"
   /* _mesa_function_pool[40160]: UnlockArraysEXT (will be remapped) */
   "\0"
   "glUnlockArraysEXT\0"
   "\0"
   /* _mesa_function_pool[40180]: CullParameterdvEXT (dynamic) */
   "ip\0"
   "glCullParameterdvEXT\0"
   "\0"
   /* _mesa_function_pool[40205]: CullParameterfvEXT (dynamic) */
   "ip\0"
   "glCullParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[40230]: ViewportArrayv (will be remapped) */
   "iip\0"
   "glViewportArrayv\0"
   "glViewportArrayvOES\0"
   "\0"
   /* _mesa_function_pool[40272]: ViewportIndexedf (will be remapped) */
   "iffff\0"
   "glViewportIndexedf\0"
   "glViewportIndexedfOES\0"
   "\0"
   /* _mesa_function_pool[40320]: ViewportIndexedfv (will be remapped) */
   "ip\0"
   "glViewportIndexedfv\0"
   "glViewportIndexedfvOES\0"
   "\0"
   /* _mesa_function_pool[40367]: ScissorArrayv (will be remapped) */
   "iip\0"
   "glScissorArrayv\0"
   "glScissorArrayvOES\0"
   "\0"
   /* _mesa_function_pool[40407]: ScissorIndexed (will be remapped) */
   "iiiii\0"
   "glScissorIndexed\0"
   "glScissorIndexedOES\0"
   "\0"
   /* _mesa_function_pool[40451]: ScissorIndexedv (will be remapped) */
   "ip\0"
   "glScissorIndexedv\0"
   "glScissorIndexedvOES\0"
   "\0"
   /* _mesa_function_pool[40494]: DepthRangeArrayv (will be remapped) */
   "iip\0"
   "glDepthRangeArrayv\0"
   "\0"
   /* _mesa_function_pool[40518]: DepthRangeIndexed (will be remapped) */
   "idd\0"
   "glDepthRangeIndexed\0"
   "\0"
   /* _mesa_function_pool[40543]: GetFloati_v (will be remapped) */
   "iip\0"
   "glGetFloati_v\0"
   "glGetFloatIndexedvEXT\0"
   "glGetFloati_vEXT\0"
   "glGetFloati_vOES\0"
   "\0"
   /* _mesa_function_pool[40618]: GetDoublei_v (will be remapped) */
   "iip\0"
   "glGetDoublei_v\0"
   "glGetDoubleIndexedvEXT\0"
   "glGetDoublei_vEXT\0"
   "\0"
   /* _mesa_function_pool[40679]: FragmentColorMaterialSGIX (dynamic) */
   "ii\0"
   "glFragmentColorMaterialSGIX\0"
   "\0"
   /* _mesa_function_pool[40711]: FragmentLightfSGIX (dynamic) */
   "iif\0"
   "glFragmentLightfSGIX\0"
   "\0"
   /* _mesa_function_pool[40737]: FragmentLightfvSGIX (dynamic) */
   "iip\0"
   "glFragmentLightfvSGIX\0"
   "\0"
   /* _mesa_function_pool[40764]: FragmentLightiSGIX (dynamic) */
   "iii\0"
   "glFragmentLightiSGIX\0"
   "\0"
   /* _mesa_function_pool[40790]: FragmentLightivSGIX (dynamic) */
   "iip\0"
   "glFragmentLightivSGIX\0"
   "\0"
   /* _mesa_function_pool[40817]: FragmentLightModelfSGIX (dynamic) */
   "if\0"
   "glFragmentLightModelfSGIX\0"
   "\0"
   /* _mesa_function_pool[40847]: FragmentLightModelfvSGIX (dynamic) */
   "ip\0"
   "glFragmentLightModelfvSGIX\0"
   "\0"
   /* _mesa_function_pool[40878]: FragmentLightModeliSGIX (dynamic) */
   "ii\0"
   "glFragmentLightModeliSGIX\0"
   "\0"
   /* _mesa_function_pool[40908]: FragmentLightModelivSGIX (dynamic) */
   "ip\0"
   "glFragmentLightModelivSGIX\0"
   "\0"
   /* _mesa_function_pool[40939]: FragmentMaterialfSGIX (dynamic) */
   "iif\0"
   "glFragmentMaterialfSGIX\0"
   "\0"
   /* _mesa_function_pool[40968]: FragmentMaterialfvSGIX (dynamic) */
   "iip\0"
   "glFragmentMaterialfvSGIX\0"
   "\0"
   /* _mesa_function_pool[40998]: FragmentMaterialiSGIX (dynamic) */
   "iii\0"
   "glFragmentMaterialiSGIX\0"
   "\0"
   /* _mesa_function_pool[41027]: FragmentMaterialivSGIX (dynamic) */
   "iip\0"
   "glFragmentMaterialivSGIX\0"
   "\0"
   /* _mesa_function_pool[41057]: GetFragmentLightfvSGIX (dynamic) */
   "iip\0"
   "glGetFragmentLightfvSGIX\0"
   "\0"
   /* _mesa_function_pool[41087]: GetFragmentLightivSGIX (dynamic) */
   "iip\0"
   "glGetFragmentLightivSGIX\0"
   "\0"
   /* _mesa_function_pool[41117]: GetFragmentMaterialfvSGIX (dynamic) */
   "iip\0"
   "glGetFragmentMaterialfvSGIX\0"
   "\0"
   /* _mesa_function_pool[41150]: GetFragmentMaterialivSGIX (dynamic) */
   "iip\0"
   "glGetFragmentMaterialivSGIX\0"
   "\0"
   /* _mesa_function_pool[41183]: LightEnviSGIX (dynamic) */
   "ii\0"
   "glLightEnviSGIX\0"
   "\0"
   /* _mesa_function_pool[41203]: ApplyTextureEXT (dynamic) */
   "i\0"
   "glApplyTextureEXT\0"
   "\0"
   /* _mesa_function_pool[41224]: TextureLightEXT (dynamic) */
   "i\0"
   "glTextureLightEXT\0"
   "\0"
   /* _mesa_function_pool[41245]: TextureMaterialEXT (dynamic) */
   "ii\0"
   "glTextureMaterialEXT\0"
   "\0"
   /* _mesa_function_pool[41270]: AsyncMarkerSGIX (dynamic) */
   "i\0"
   "glAsyncMarkerSGIX\0"
   "\0"
   /* _mesa_function_pool[41291]: FinishAsyncSGIX (dynamic) */
   "p\0"
   "glFinishAsyncSGIX\0"
   "\0"
   /* _mesa_function_pool[41312]: PollAsyncSGIX (dynamic) */
   "p\0"
   "glPollAsyncSGIX\0"
   "\0"
   /* _mesa_function_pool[41331]: GenAsyncMarkersSGIX (dynamic) */
   "i\0"
   "glGenAsyncMarkersSGIX\0"
   "\0"
   /* _mesa_function_pool[41356]: DeleteAsyncMarkersSGIX (dynamic) */
   "ii\0"
   "glDeleteAsyncMarkersSGIX\0"
   "\0"
   /* _mesa_function_pool[41385]: IsAsyncMarkerSGIX (dynamic) */
   "i\0"
   "glIsAsyncMarkerSGIX\0"
   "\0"
   /* _mesa_function_pool[41408]: VertexPointervINTEL (dynamic) */
   "iip\0"
   "glVertexPointervINTEL\0"
   "\0"
   /* _mesa_function_pool[41435]: NormalPointervINTEL (dynamic) */
   "ip\0"
   "glNormalPointervINTEL\0"
   "\0"
   /* _mesa_function_pool[41461]: ColorPointervINTEL (dynamic) */
   "iip\0"
   "glColorPointervINTEL\0"
   "\0"
   /* _mesa_function_pool[41487]: TexCoordPointervINTEL (dynamic) */
   "iip\0"
   "glTexCoordPointervINTEL\0"
   "\0"
   /* _mesa_function_pool[41516]: PixelTransformParameteriEXT (dynamic) */
   "iii\0"
   "glPixelTransformParameteriEXT\0"
   "\0"
   /* _mesa_function_pool[41551]: PixelTransformParameterfEXT (dynamic) */
   "iif\0"
   "glPixelTransformParameterfEXT\0"
   "\0"
   /* _mesa_function_pool[41586]: PixelTransformParameterivEXT (dynamic) */
   "iip\0"
   "glPixelTransformParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[41622]: PixelTransformParameterfvEXT (dynamic) */
   "iip\0"
   "glPixelTransformParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[41658]: TextureNormalEXT (dynamic) */
   "i\0"
   "glTextureNormalEXT\0"
   "\0"
   /* _mesa_function_pool[41680]: Tangent3bEXT (dynamic) */
   "iii\0"
   "glTangent3bEXT\0"
   "\0"
   /* _mesa_function_pool[41700]: Tangent3bvEXT (dynamic) */
   "p\0"
   "glTangent3bvEXT\0"
   "\0"
   /* _mesa_function_pool[41719]: Tangent3dEXT (dynamic) */
   "ddd\0"
   "glTangent3dEXT\0"
   "\0"
   /* _mesa_function_pool[41739]: Tangent3dvEXT (dynamic) */
   "p\0"
   "glTangent3dvEXT\0"
   "\0"
   /* _mesa_function_pool[41758]: Tangent3fEXT (dynamic) */
   "fff\0"
   "glTangent3fEXT\0"
   "\0"
   /* _mesa_function_pool[41778]: Tangent3fvEXT (dynamic) */
   "p\0"
   "glTangent3fvEXT\0"
   "\0"
   /* _mesa_function_pool[41797]: Tangent3iEXT (dynamic) */
   "iii\0"
   "glTangent3iEXT\0"
   "\0"
   /* _mesa_function_pool[41817]: Tangent3ivEXT (dynamic) */
   "p\0"
   "glTangent3ivEXT\0"
   "\0"
   /* _mesa_function_pool[41836]: Tangent3sEXT (dynamic) */
   "iii\0"
   "glTangent3sEXT\0"
   "\0"
   /* _mesa_function_pool[41856]: Tangent3svEXT (dynamic) */
   "p\0"
   "glTangent3svEXT\0"
   "\0"
   /* _mesa_function_pool[41875]: Binormal3bEXT (dynamic) */
   "iii\0"
   "glBinormal3bEXT\0"
   "\0"
   /* _mesa_function_pool[41896]: Binormal3bvEXT (dynamic) */
   "p\0"
   "glBinormal3bvEXT\0"
   "\0"
   /* _mesa_function_pool[41916]: Binormal3dEXT (dynamic) */
   "ddd\0"
   "glBinormal3dEXT\0"
   "\0"
   /* _mesa_function_pool[41937]: Binormal3dvEXT (dynamic) */
   "p\0"
   "glBinormal3dvEXT\0"
   "\0"
   /* _mesa_function_pool[41957]: Binormal3fEXT (dynamic) */
   "fff\0"
   "glBinormal3fEXT\0"
   "\0"
   /* _mesa_function_pool[41978]: Binormal3fvEXT (dynamic) */
   "p\0"
   "glBinormal3fvEXT\0"
   "\0"
   /* _mesa_function_pool[41998]: Binormal3iEXT (dynamic) */
   "iii\0"
   "glBinormal3iEXT\0"
   "\0"
   /* _mesa_function_pool[42019]: Binormal3ivEXT (dynamic) */
   "p\0"
   "glBinormal3ivEXT\0"
   "\0"
   /* _mesa_function_pool[42039]: Binormal3sEXT (dynamic) */
   "iii\0"
   "glBinormal3sEXT\0"
   "\0"
   /* _mesa_function_pool[42060]: Binormal3svEXT (dynamic) */
   "p\0"
   "glBinormal3svEXT\0"
   "\0"
   /* _mesa_function_pool[42080]: TangentPointerEXT (dynamic) */
   "iip\0"
   "glTangentPointerEXT\0"
   "\0"
   /* _mesa_function_pool[42105]: BinormalPointerEXT (dynamic) */
   "iip\0"
   "glBinormalPointerEXT\0"
   "\0"
   /* _mesa_function_pool[42131]: PixelTexGenSGIX (dynamic) */
   "i\0"
   "glPixelTexGenSGIX\0"
   "\0"
   /* _mesa_function_pool[42152]: FinishTextureSUNX (dynamic) */
   "\0"
   "glFinishTextureSUNX\0"
   "\0"
   /* _mesa_function_pool[42174]: GlobalAlphaFactorbSUN (dynamic) */
   "i\0"
   "glGlobalAlphaFactorbSUN\0"
   "\0"
   /* _mesa_function_pool[42201]: GlobalAlphaFactorsSUN (dynamic) */
   "i\0"
   "glGlobalAlphaFactorsSUN\0"
   "\0"
   /* _mesa_function_pool[42228]: GlobalAlphaFactoriSUN (dynamic) */
   "i\0"
   "glGlobalAlphaFactoriSUN\0"
   "\0"
   /* _mesa_function_pool[42255]: GlobalAlphaFactorfSUN (dynamic) */
   "f\0"
   "glGlobalAlphaFactorfSUN\0"
   "\0"
   /* _mesa_function_pool[42282]: GlobalAlphaFactordSUN (dynamic) */
   "d\0"
   "glGlobalAlphaFactordSUN\0"
   "\0"
   /* _mesa_function_pool[42309]: GlobalAlphaFactorubSUN (dynamic) */
   "i\0"
   "glGlobalAlphaFactorubSUN\0"
   "\0"
   /* _mesa_function_pool[42337]: GlobalAlphaFactorusSUN (dynamic) */
   "i\0"
   "glGlobalAlphaFactorusSUN\0"
   "\0"
   /* _mesa_function_pool[42365]: GlobalAlphaFactoruiSUN (dynamic) */
   "i\0"
   "glGlobalAlphaFactoruiSUN\0"
   "\0"
   /* _mesa_function_pool[42393]: ReplacementCodeuiSUN (dynamic) */
   "i\0"
   "glReplacementCodeuiSUN\0"
   "\0"
   /* _mesa_function_pool[42419]: ReplacementCodeusSUN (dynamic) */
   "i\0"
   "glReplacementCodeusSUN\0"
   "\0"
   /* _mesa_function_pool[42445]: ReplacementCodeubSUN (dynamic) */
   "i\0"
   "glReplacementCodeubSUN\0"
   "\0"
   /* _mesa_function_pool[42471]: ReplacementCodeuivSUN (dynamic) */
   "p\0"
   "glReplacementCodeuivSUN\0"
   "\0"
   /* _mesa_function_pool[42498]: ReplacementCodeusvSUN (dynamic) */
   "p\0"
   "glReplacementCodeusvSUN\0"
   "\0"
   /* _mesa_function_pool[42525]: ReplacementCodeubvSUN (dynamic) */
   "p\0"
   "glReplacementCodeubvSUN\0"
   "\0"
   /* _mesa_function_pool[42552]: ReplacementCodePointerSUN (dynamic) */
   "iip\0"
   "glReplacementCodePointerSUN\0"
   "\0"
   /* _mesa_function_pool[42585]: Color4ubVertex2fSUN (dynamic) */
   "iiiiff\0"
   "glColor4ubVertex2fSUN\0"
   "\0"
   /* _mesa_function_pool[42615]: Color4ubVertex2fvSUN (dynamic) */
   "pp\0"
   "glColor4ubVertex2fvSUN\0"
   "\0"
   /* _mesa_function_pool[42642]: Color4ubVertex3fSUN (dynamic) */
   "iiiifff\0"
   "glColor4ubVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[42673]: Color4ubVertex3fvSUN (dynamic) */
   "pp\0"
   "glColor4ubVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[42700]: Color3fVertex3fSUN (dynamic) */
   "ffffff\0"
   "glColor3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[42729]: Color3fVertex3fvSUN (dynamic) */
   "pp\0"
   "glColor3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[42755]: Normal3fVertex3fSUN (dynamic) */
   "ffffff\0"
   "glNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[42785]: Normal3fVertex3fvSUN (dynamic) */
   "pp\0"
   "glNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[42812]: Color4fNormal3fVertex3fSUN (dynamic) */
   "ffffffffff\0"
   "glColor4fNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[42853]: Color4fNormal3fVertex3fvSUN (dynamic) */
   "ppp\0"
   "glColor4fNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[42888]: TexCoord2fVertex3fSUN (dynamic) */
   "fffff\0"
   "glTexCoord2fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[42919]: TexCoord2fVertex3fvSUN (dynamic) */
   "pp\0"
   "glTexCoord2fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[42948]: TexCoord4fVertex4fSUN (dynamic) */
   "ffffffff\0"
   "glTexCoord4fVertex4fSUN\0"
   "\0"
   /* _mesa_function_pool[42982]: TexCoord4fVertex4fvSUN (dynamic) */
   "pp\0"
   "glTexCoord4fVertex4fvSUN\0"
   "\0"
   /* _mesa_function_pool[43011]: TexCoord2fColor4ubVertex3fSUN (dynamic) */
   "ffiiiifff\0"
   "glTexCoord2fColor4ubVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43054]: TexCoord2fColor4ubVertex3fvSUN (dynamic) */
   "ppp\0"
   "glTexCoord2fColor4ubVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43092]: TexCoord2fColor3fVertex3fSUN (dynamic) */
   "ffffffff\0"
   "glTexCoord2fColor3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43133]: TexCoord2fColor3fVertex3fvSUN (dynamic) */
   "ppp\0"
   "glTexCoord2fColor3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43170]: TexCoord2fNormal3fVertex3fSUN (dynamic) */
   "ffffffff\0"
   "glTexCoord2fNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43212]: TexCoord2fNormal3fVertex3fvSUN (dynamic) */
   "ppp\0"
   "glTexCoord2fNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43250]: TexCoord2fColor4fNormal3fVertex3fSUN (dynamic) */
   "ffffffffffff\0"
   "glTexCoord2fColor4fNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43303]: TexCoord2fColor4fNormal3fVertex3fvSUN (dynamic) */
   "pppp\0"
   "glTexCoord2fColor4fNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43349]: TexCoord4fColor4fNormal3fVertex4fSUN (dynamic) */
   "fffffffffffffff\0"
   "glTexCoord4fColor4fNormal3fVertex4fSUN\0"
   "\0"
   /* _mesa_function_pool[43405]: TexCoord4fColor4fNormal3fVertex4fvSUN (dynamic) */
   "pppp\0"
   "glTexCoord4fColor4fNormal3fVertex4fvSUN\0"
   "\0"
   /* _mesa_function_pool[43451]: ReplacementCodeuiVertex3fSUN (dynamic) */
   "ifff\0"
   "glReplacementCodeuiVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43488]: ReplacementCodeuiVertex3fvSUN (dynamic) */
   "pp\0"
   "glReplacementCodeuiVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43524]: ReplacementCodeuiColor4ubVertex3fSUN (dynamic) */
   "iiiiifff\0"
   "glReplacementCodeuiColor4ubVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43573]: ReplacementCodeuiColor4ubVertex3fvSUN (dynamic) */
   "ppp\0"
   "glReplacementCodeuiColor4ubVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43618]: ReplacementCodeuiColor3fVertex3fSUN (dynamic) */
   "iffffff\0"
   "glReplacementCodeuiColor3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43665]: ReplacementCodeuiColor3fVertex3fvSUN (dynamic) */
   "ppp\0"
   "glReplacementCodeuiColor3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43709]: ReplacementCodeuiNormal3fVertex3fSUN (dynamic) */
   "iffffff\0"
   "glReplacementCodeuiNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43757]: ReplacementCodeuiNormal3fVertex3fvSUN (dynamic) */
   "ppp\0"
   "glReplacementCodeuiNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43802]: ReplacementCodeuiColor4fNormal3fVertex3fSUN (dynamic) */
   "iffffffffff\0"
   "glReplacementCodeuiColor4fNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43861]: ReplacementCodeuiColor4fNormal3fVertex3fvSUN (dynamic) */
   "pppp\0"
   "glReplacementCodeuiColor4fNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[43914]: ReplacementCodeuiTexCoord2fVertex3fSUN (dynamic) */
   "ifffff\0"
   "glReplacementCodeuiTexCoord2fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[43963]: ReplacementCodeuiTexCoord2fVertex3fvSUN (dynamic) */
   "ppp\0"
   "glReplacementCodeuiTexCoord2fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[44010]: ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (dynamic) */
   "iffffffff\0"
   "glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[44070]: ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (dynamic) */
   "pppp\0"
   "glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[44126]: ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (dynamic) */
   "iffffffffffff\0"
   "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN\0"
   "\0"
   /* _mesa_function_pool[44197]: ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (dynamic) */
   "ppppp\0"
   "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN\0"
   "\0"
   /* _mesa_function_pool[44261]: FramebufferSampleLocationsfvARB (will be remapped) */
   "iiip\0"
   "glFramebufferSampleLocationsfvARB\0"
   "glFramebufferSampleLocationsfvNV\0"
   "\0"
   /* _mesa_function_pool[44334]: NamedFramebufferSampleLocationsfvARB (will be remapped) */
   "iiip\0"
   "glNamedFramebufferSampleLocationsfvARB\0"
   "glNamedFramebufferSampleLocationsfvNV\0"
   "\0"
   /* _mesa_function_pool[44417]: EvaluateDepthValuesARB (will be remapped) */
   "\0"
   "glEvaluateDepthValuesARB\0"
   "glResolveDepthValuesNV\0"
   "\0"
   /* _mesa_function_pool[44467]: VertexWeightfEXT (dynamic) */
   "f\0"
   "glVertexWeightfEXT\0"
   "\0"
   /* _mesa_function_pool[44489]: VertexWeightfvEXT (dynamic) */
   "p\0"
   "glVertexWeightfvEXT\0"
   "\0"
   /* _mesa_function_pool[44512]: VertexWeightPointerEXT (dynamic) */
   "iiip\0"
   "glVertexWeightPointerEXT\0"
   "\0"
   /* _mesa_function_pool[44543]: FlushVertexArrayRangeNV (dynamic) */
   "\0"
   "glFlushVertexArrayRangeNV\0"
   "\0"
   /* _mesa_function_pool[44571]: VertexArrayRangeNV (dynamic) */
   "ip\0"
   "glVertexArrayRangeNV\0"
   "\0"
   /* _mesa_function_pool[44596]: CombinerParameterfvNV (dynamic) */
   "ip\0"
   "glCombinerParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[44624]: CombinerParameterfNV (dynamic) */
   "if\0"
   "glCombinerParameterfNV\0"
   "\0"
   /* _mesa_function_pool[44651]: CombinerParameterivNV (dynamic) */
   "ip\0"
   "glCombinerParameterivNV\0"
   "\0"
   /* _mesa_function_pool[44679]: CombinerParameteriNV (dynamic) */
   "ii\0"
   "glCombinerParameteriNV\0"
   "\0"
   /* _mesa_function_pool[44706]: CombinerInputNV (dynamic) */
   "iiiiii\0"
   "glCombinerInputNV\0"
   "\0"
   /* _mesa_function_pool[44732]: CombinerOutputNV (dynamic) */
   "iiiiiiiiii\0"
   "glCombinerOutputNV\0"
   "\0"
   /* _mesa_function_pool[44763]: FinalCombinerInputNV (dynamic) */
   "iiii\0"
   "glFinalCombinerInputNV\0"
   "\0"
   /* _mesa_function_pool[44792]: GetCombinerInputParameterfvNV (dynamic) */
   "iiiip\0"
   "glGetCombinerInputParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[44831]: GetCombinerInputParameterivNV (dynamic) */
   "iiiip\0"
   "glGetCombinerInputParameterivNV\0"
   "\0"
   /* _mesa_function_pool[44870]: GetCombinerOutputParameterfvNV (dynamic) */
   "iiip\0"
   "glGetCombinerOutputParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[44909]: GetCombinerOutputParameterivNV (dynamic) */
   "iiip\0"
   "glGetCombinerOutputParameterivNV\0"
   "\0"
   /* _mesa_function_pool[44948]: GetFinalCombinerInputParameterfvNV (dynamic) */
   "iip\0"
   "glGetFinalCombinerInputParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[44990]: GetFinalCombinerInputParameterivNV (dynamic) */
   "iip\0"
   "glGetFinalCombinerInputParameterivNV\0"
   "\0"
   /* _mesa_function_pool[45032]: ResizeBuffersMESA (will be remapped) */
   "\0"
   "glResizeBuffersMESA\0"
   "\0"
   /* _mesa_function_pool[45054]: WindowPos4dMESA (will be remapped) */
   "dddd\0"
   "glWindowPos4dMESA\0"
   "\0"
   /* _mesa_function_pool[45078]: WindowPos4dvMESA (will be remapped) */
   "p\0"
   "glWindowPos4dvMESA\0"
   "\0"
   /* _mesa_function_pool[45100]: WindowPos4fMESA (will be remapped) */
   "ffff\0"
   "glWindowPos4fMESA\0"
   "\0"
   /* _mesa_function_pool[45124]: WindowPos4fvMESA (will be remapped) */
   "p\0"
   "glWindowPos4fvMESA\0"
   "\0"
   /* _mesa_function_pool[45146]: WindowPos4iMESA (will be remapped) */
   "iiii\0"
   "glWindowPos4iMESA\0"
   "\0"
   /* _mesa_function_pool[45170]: WindowPos4ivMESA (will be remapped) */
   "p\0"
   "glWindowPos4ivMESA\0"
   "\0"
   /* _mesa_function_pool[45192]: WindowPos4sMESA (will be remapped) */
   "iiii\0"
   "glWindowPos4sMESA\0"
   "\0"
   /* _mesa_function_pool[45216]: WindowPos4svMESA (will be remapped) */
   "p\0"
   "glWindowPos4svMESA\0"
   "\0"
   /* _mesa_function_pool[45238]: MultiModeDrawArraysIBM (will be remapped) */
   "pppii\0"
   "glMultiModeDrawArraysIBM\0"
   "\0"
   /* _mesa_function_pool[45270]: MultiModeDrawElementsIBM (will be remapped) */
   "ppipii\0"
   "glMultiModeDrawElementsIBM\0"
   "\0"
   /* _mesa_function_pool[45305]: ColorPointerListIBM (dynamic) */
   "iiipi\0"
   "glColorPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45334]: SecondaryColorPointerListIBM (dynamic) */
   "iiipi\0"
   "glSecondaryColorPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45372]: EdgeFlagPointerListIBM (dynamic) */
   "ipi\0"
   "glEdgeFlagPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45402]: FogCoordPointerListIBM (dynamic) */
   "iipi\0"
   "glFogCoordPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45433]: IndexPointerListIBM (dynamic) */
   "iipi\0"
   "glIndexPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45461]: NormalPointerListIBM (dynamic) */
   "iipi\0"
   "glNormalPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45490]: TexCoordPointerListIBM (dynamic) */
   "iiipi\0"
   "glTexCoordPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45522]: VertexPointerListIBM (dynamic) */
   "iiipi\0"
   "glVertexPointerListIBM\0"
   "\0"
   /* _mesa_function_pool[45552]: TbufferMask3DFX (dynamic) */
   "i\0"
   "glTbufferMask3DFX\0"
   "\0"
   /* _mesa_function_pool[45573]: TextureColorMaskSGIS (dynamic) */
   "iiii\0"
   "glTextureColorMaskSGIS\0"
   "\0"
   /* _mesa_function_pool[45602]: DeleteFencesNV (dynamic) */
   "ip\0"
   "glDeleteFencesNV\0"
   "\0"
   /* _mesa_function_pool[45623]: GenFencesNV (dynamic) */
   "ip\0"
   "glGenFencesNV\0"
   "\0"
   /* _mesa_function_pool[45641]: IsFenceNV (dynamic) */
   "i\0"
   "glIsFenceNV\0"
   "\0"
   /* _mesa_function_pool[45656]: TestFenceNV (dynamic) */
   "i\0"
   "glTestFenceNV\0"
   "\0"
   /* _mesa_function_pool[45673]: GetFenceivNV (dynamic) */
   "iip\0"
   "glGetFenceivNV\0"
   "\0"
   /* _mesa_function_pool[45693]: FinishFenceNV (dynamic) */
   "i\0"
   "glFinishFenceNV\0"
   "\0"
   /* _mesa_function_pool[45712]: SetFenceNV (dynamic) */
   "ii\0"
   "glSetFenceNV\0"
   "\0"
   /* _mesa_function_pool[45729]: MapControlPointsNV (dynamic) */
   "iiiiiiiip\0"
   "glMapControlPointsNV\0"
   "\0"
   /* _mesa_function_pool[45761]: MapParameterivNV (dynamic) */
   "iip\0"
   "glMapParameterivNV\0"
   "\0"
   /* _mesa_function_pool[45785]: MapParameterfvNV (dynamic) */
   "iip\0"
   "glMapParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[45809]: GetMapControlPointsNV (dynamic) */
   "iiiiiip\0"
   "glGetMapControlPointsNV\0"
   "\0"
   /* _mesa_function_pool[45842]: GetMapParameterivNV (dynamic) */
   "iip\0"
   "glGetMapParameterivNV\0"
   "\0"
   /* _mesa_function_pool[45869]: GetMapParameterfvNV (dynamic) */
   "iip\0"
   "glGetMapParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[45896]: GetMapAttribParameterivNV (dynamic) */
   "iiip\0"
   "glGetMapAttribParameterivNV\0"
   "\0"
   /* _mesa_function_pool[45930]: GetMapAttribParameterfvNV (dynamic) */
   "iiip\0"
   "glGetMapAttribParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[45964]: EvalMapsNV (dynamic) */
   "ii\0"
   "glEvalMapsNV\0"
   "\0"
   /* _mesa_function_pool[45981]: CombinerStageParameterfvNV (dynamic) */
   "iip\0"
   "glCombinerStageParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[46015]: GetCombinerStageParameterfvNV (dynamic) */
   "iip\0"
   "glGetCombinerStageParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[46052]: AreProgramsResidentNV (will be remapped) */
   "ipp\0"
   "glAreProgramsResidentNV\0"
   "\0"
   /* _mesa_function_pool[46081]: ExecuteProgramNV (will be remapped) */
   "iip\0"
   "glExecuteProgramNV\0"
   "\0"
   /* _mesa_function_pool[46105]: GetProgramParameterdvNV (will be remapped) */
   "iiip\0"
   "glGetProgramParameterdvNV\0"
   "\0"
   /* _mesa_function_pool[46137]: GetProgramParameterfvNV (will be remapped) */
   "iiip\0"
   "glGetProgramParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[46169]: GetProgramivNV (will be remapped) */
   "iip\0"
   "glGetProgramivNV\0"
   "\0"
   /* _mesa_function_pool[46191]: GetProgramStringNV (will be remapped) */
   "iip\0"
   "glGetProgramStringNV\0"
   "\0"
   /* _mesa_function_pool[46217]: GetTrackMatrixivNV (will be remapped) */
   "iiip\0"
   "glGetTrackMatrixivNV\0"
   "\0"
   /* _mesa_function_pool[46244]: GetVertexAttribdvNV (will be remapped) */
   "iip\0"
   "glGetVertexAttribdvNV\0"
   "\0"
   /* _mesa_function_pool[46271]: GetVertexAttribfvNV (will be remapped) */
   "iip\0"
   "glGetVertexAttribfvNV\0"
   "\0"
   /* _mesa_function_pool[46298]: GetVertexAttribivNV (will be remapped) */
   "iip\0"
   "glGetVertexAttribivNV\0"
   "\0"
   /* _mesa_function_pool[46325]: LoadProgramNV (will be remapped) */
   "iiip\0"
   "glLoadProgramNV\0"
   "\0"
   /* _mesa_function_pool[46347]: ProgramParameters4dvNV (will be remapped) */
   "iiip\0"
   "glProgramParameters4dvNV\0"
   "\0"
   /* _mesa_function_pool[46378]: ProgramParameters4fvNV (will be remapped) */
   "iiip\0"
   "glProgramParameters4fvNV\0"
   "\0"
   /* _mesa_function_pool[46409]: RequestResidentProgramsNV (will be remapped) */
   "ip\0"
   "glRequestResidentProgramsNV\0"
   "\0"
   /* _mesa_function_pool[46441]: TrackMatrixNV (will be remapped) */
   "iiii\0"
   "glTrackMatrixNV\0"
   "\0"
   /* _mesa_function_pool[46463]: VertexAttribPointerNV (will be remapped) */
   "iiiip\0"
   "glVertexAttribPointerNV\0"
   "\0"
   /* _mesa_function_pool[46494]: VertexAttrib1sNV (will be remapped) */
   "ii\0"
   "glVertexAttrib1sNV\0"
   "\0"
   /* _mesa_function_pool[46517]: VertexAttrib1svNV (will be remapped) */
   "ip\0"
   "glVertexAttrib1svNV\0"
   "\0"
   /* _mesa_function_pool[46541]: VertexAttrib2sNV (will be remapped) */
   "iii\0"
   "glVertexAttrib2sNV\0"
   "\0"
   /* _mesa_function_pool[46565]: VertexAttrib2svNV (will be remapped) */
   "ip\0"
   "glVertexAttrib2svNV\0"
   "\0"
   /* _mesa_function_pool[46589]: VertexAttrib3sNV (will be remapped) */
   "iiii\0"
   "glVertexAttrib3sNV\0"
   "\0"
   /* _mesa_function_pool[46614]: VertexAttrib3svNV (will be remapped) */
   "ip\0"
   "glVertexAttrib3svNV\0"
   "\0"
   /* _mesa_function_pool[46638]: VertexAttrib4sNV (will be remapped) */
   "iiiii\0"
   "glVertexAttrib4sNV\0"
   "\0"
   /* _mesa_function_pool[46664]: VertexAttrib4svNV (will be remapped) */
   "ip\0"
   "glVertexAttrib4svNV\0"
   "\0"
   /* _mesa_function_pool[46688]: VertexAttrib1fNV (will be remapped) */
   "if\0"
   "glVertexAttrib1fNV\0"
   "\0"
   /* _mesa_function_pool[46711]: VertexAttrib1fvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib1fvNV\0"
   "\0"
   /* _mesa_function_pool[46735]: VertexAttrib2fNV (will be remapped) */
   "iff\0"
   "glVertexAttrib2fNV\0"
   "\0"
   /* _mesa_function_pool[46759]: VertexAttrib2fvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib2fvNV\0"
   "\0"
   /* _mesa_function_pool[46783]: VertexAttrib3fNV (will be remapped) */
   "ifff\0"
   "glVertexAttrib3fNV\0"
   "\0"
   /* _mesa_function_pool[46808]: VertexAttrib3fvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib3fvNV\0"
   "\0"
   /* _mesa_function_pool[46832]: VertexAttrib4fNV (will be remapped) */
   "iffff\0"
   "glVertexAttrib4fNV\0"
   "\0"
   /* _mesa_function_pool[46858]: VertexAttrib4fvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib4fvNV\0"
   "\0"
   /* _mesa_function_pool[46882]: VertexAttrib1dNV (will be remapped) */
   "id\0"
   "glVertexAttrib1dNV\0"
   "\0"
   /* _mesa_function_pool[46905]: VertexAttrib1dvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib1dvNV\0"
   "\0"
   /* _mesa_function_pool[46929]: VertexAttrib2dNV (will be remapped) */
   "idd\0"
   "glVertexAttrib2dNV\0"
   "\0"
   /* _mesa_function_pool[46953]: VertexAttrib2dvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib2dvNV\0"
   "\0"
   /* _mesa_function_pool[46977]: VertexAttrib3dNV (will be remapped) */
   "iddd\0"
   "glVertexAttrib3dNV\0"
   "\0"
   /* _mesa_function_pool[47002]: VertexAttrib3dvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib3dvNV\0"
   "\0"
   /* _mesa_function_pool[47026]: VertexAttrib4dNV (will be remapped) */
   "idddd\0"
   "glVertexAttrib4dNV\0"
   "\0"
   /* _mesa_function_pool[47052]: VertexAttrib4dvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib4dvNV\0"
   "\0"
   /* _mesa_function_pool[47076]: VertexAttrib4ubNV (will be remapped) */
   "iiiii\0"
   "glVertexAttrib4ubNV\0"
   "\0"
   /* _mesa_function_pool[47103]: VertexAttrib4ubvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib4ubvNV\0"
   "\0"
   /* _mesa_function_pool[47128]: VertexAttribs1svNV (will be remapped) */
   "iip\0"
   "glVertexAttribs1svNV\0"
   "\0"
   /* _mesa_function_pool[47154]: VertexAttribs2svNV (will be remapped) */
   "iip\0"
   "glVertexAttribs2svNV\0"
   "\0"
   /* _mesa_function_pool[47180]: VertexAttribs3svNV (will be remapped) */
   "iip\0"
   "glVertexAttribs3svNV\0"
   "\0"
   /* _mesa_function_pool[47206]: VertexAttribs4svNV (will be remapped) */
   "iip\0"
   "glVertexAttribs4svNV\0"
   "\0"
   /* _mesa_function_pool[47232]: VertexAttribs1fvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs1fvNV\0"
   "\0"
   /* _mesa_function_pool[47258]: VertexAttribs2fvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs2fvNV\0"
   "\0"
   /* _mesa_function_pool[47284]: VertexAttribs3fvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs3fvNV\0"
   "\0"
   /* _mesa_function_pool[47310]: VertexAttribs4fvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs4fvNV\0"
   "\0"
   /* _mesa_function_pool[47336]: VertexAttribs1dvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs1dvNV\0"
   "\0"
   /* _mesa_function_pool[47362]: VertexAttribs2dvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs2dvNV\0"
   "\0"
   /* _mesa_function_pool[47388]: VertexAttribs3dvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs3dvNV\0"
   "\0"
   /* _mesa_function_pool[47414]: VertexAttribs4dvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs4dvNV\0"
   "\0"
   /* _mesa_function_pool[47440]: VertexAttribs4ubvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs4ubvNV\0"
   "\0"
   /* _mesa_function_pool[47467]: TexBumpParameterfvATI (will be remapped) */
   "ip\0"
   "glTexBumpParameterfvATI\0"
   "\0"
   /* _mesa_function_pool[47495]: TexBumpParameterivATI (will be remapped) */
   "ip\0"
   "glTexBumpParameterivATI\0"
   "\0"
   /* _mesa_function_pool[47523]: GetTexBumpParameterfvATI (will be remapped) */
   "ip\0"
   "glGetTexBumpParameterfvATI\0"
   "\0"
   /* _mesa_function_pool[47554]: GetTexBumpParameterivATI (will be remapped) */
   "ip\0"
   "glGetTexBumpParameterivATI\0"
   "\0"
   /* _mesa_function_pool[47585]: GenFragmentShadersATI (will be remapped) */
   "i\0"
   "glGenFragmentShadersATI\0"
   "\0"
   /* _mesa_function_pool[47612]: BindFragmentShaderATI (will be remapped) */
   "i\0"
   "glBindFragmentShaderATI\0"
   "\0"
   /* _mesa_function_pool[47639]: DeleteFragmentShaderATI (will be remapped) */
   "i\0"
   "glDeleteFragmentShaderATI\0"
   "\0"
   /* _mesa_function_pool[47668]: BeginFragmentShaderATI (will be remapped) */
   "\0"
   "glBeginFragmentShaderATI\0"
   "\0"
   /* _mesa_function_pool[47695]: EndFragmentShaderATI (will be remapped) */
   "\0"
   "glEndFragmentShaderATI\0"
   "\0"
   /* _mesa_function_pool[47720]: PassTexCoordATI (will be remapped) */
   "iii\0"
   "glPassTexCoordATI\0"
   "\0"
   /* _mesa_function_pool[47743]: SampleMapATI (will be remapped) */
   "iii\0"
   "glSampleMapATI\0"
   "\0"
   /* _mesa_function_pool[47763]: ColorFragmentOp1ATI (will be remapped) */
   "iiiiiii\0"
   "glColorFragmentOp1ATI\0"
   "\0"
   /* _mesa_function_pool[47794]: ColorFragmentOp2ATI (will be remapped) */
   "iiiiiiiiii\0"
   "glColorFragmentOp2ATI\0"
   "\0"
   /* _mesa_function_pool[47828]: ColorFragmentOp3ATI (will be remapped) */
   "iiiiiiiiiiiii\0"
   "glColorFragmentOp3ATI\0"
   "\0"
   /* _mesa_function_pool[47865]: AlphaFragmentOp1ATI (will be remapped) */
   "iiiiii\0"
   "glAlphaFragmentOp1ATI\0"
   "\0"
   /* _mesa_function_pool[47895]: AlphaFragmentOp2ATI (will be remapped) */
   "iiiiiiiii\0"
   "glAlphaFragmentOp2ATI\0"
   "\0"
   /* _mesa_function_pool[47928]: AlphaFragmentOp3ATI (will be remapped) */
   "iiiiiiiiiiii\0"
   "glAlphaFragmentOp3ATI\0"
   "\0"
   /* _mesa_function_pool[47964]: SetFragmentShaderConstantATI (will be remapped) */
   "ip\0"
   "glSetFragmentShaderConstantATI\0"
   "\0"
   /* _mesa_function_pool[47999]: DrawMeshArraysSUN (dynamic) */
   "iiii\0"
   "glDrawMeshArraysSUN\0"
   "\0"
   /* _mesa_function_pool[48025]: ActiveStencilFaceEXT (will be remapped) */
   "i\0"
   "glActiveStencilFaceEXT\0"
   "\0"
   /* _mesa_function_pool[48051]: ObjectPurgeableAPPLE (will be remapped) */
   "iii\0"
   "glObjectPurgeableAPPLE\0"
   "\0"
   /* _mesa_function_pool[48079]: ObjectUnpurgeableAPPLE (will be remapped) */
   "iii\0"
   "glObjectUnpurgeableAPPLE\0"
   "\0"
   /* _mesa_function_pool[48109]: GetObjectParameterivAPPLE (will be remapped) */
   "iiip\0"
   "glGetObjectParameterivAPPLE\0"
   "\0"
   /* _mesa_function_pool[48143]: BindVertexArrayAPPLE (dynamic) */
   "i\0"
   "glBindVertexArrayAPPLE\0"
   "\0"
   /* _mesa_function_pool[48169]: DeleteVertexArraysAPPLE (dynamic) */
   "ip\0"
   "glDeleteVertexArraysAPPLE\0"
   "\0"
   /* _mesa_function_pool[48199]: GenVertexArraysAPPLE (dynamic) */
   "ip\0"
   "glGenVertexArraysAPPLE\0"
   "\0"
   /* _mesa_function_pool[48226]: IsVertexArrayAPPLE (dynamic) */
   "i\0"
   "glIsVertexArrayAPPLE\0"
   "\0"
   /* _mesa_function_pool[48250]: ProgramNamedParameter4fNV (will be remapped) */
   "iipffff\0"
   "glProgramNamedParameter4fNV\0"
   "\0"
   /* _mesa_function_pool[48287]: ProgramNamedParameter4dNV (will be remapped) */
   "iipdddd\0"
   "glProgramNamedParameter4dNV\0"
   "\0"
   /* _mesa_function_pool[48324]: ProgramNamedParameter4fvNV (will be remapped) */
   "iipp\0"
   "glProgramNamedParameter4fvNV\0"
   "\0"
   /* _mesa_function_pool[48359]: ProgramNamedParameter4dvNV (will be remapped) */
   "iipp\0"
   "glProgramNamedParameter4dvNV\0"
   "\0"
   /* _mesa_function_pool[48394]: GetProgramNamedParameterfvNV (will be remapped) */
   "iipp\0"
   "glGetProgramNamedParameterfvNV\0"
   "\0"
   /* _mesa_function_pool[48431]: GetProgramNamedParameterdvNV (will be remapped) */
   "iipp\0"
   "glGetProgramNamedParameterdvNV\0"
   "\0"
   /* _mesa_function_pool[48468]: DepthBoundsEXT (will be remapped) */
   "dd\0"
   "glDepthBoundsEXT\0"
   "\0"
   /* _mesa_function_pool[48489]: BindRenderbufferEXT (will be remapped) */
   "ii\0"
   "glBindRenderbufferEXT\0"
   "\0"
   /* _mesa_function_pool[48515]: BindFramebufferEXT (will be remapped) */
   "ii\0"
   "glBindFramebufferEXT\0"
   "\0"
   /* _mesa_function_pool[48540]: StringMarkerGREMEDY (will be remapped) */
   "ip\0"
   "glStringMarkerGREMEDY\0"
   "\0"
   /* _mesa_function_pool[48566]: ProvokingVertex (will be remapped) */
   "i\0"
   "glProvokingVertexEXT\0"
   "glProvokingVertex\0"
   "\0"
   /* _mesa_function_pool[48608]: ColorMaski (will be remapped) */
   "iiiii\0"
   "glColorMaskIndexedEXT\0"
   "glColorMaski\0"
   "glColorMaskiEXT\0"
   "glColorMaskiOES\0"
   "\0"
   /* _mesa_function_pool[48682]: GetBooleani_v (will be remapped) */
   "iip\0"
   "glGetBooleanIndexedvEXT\0"
   "glGetBooleani_v\0"
   "\0"
   /* _mesa_function_pool[48727]: GetIntegeri_v (will be remapped) */
   "iip\0"
   "glGetIntegerIndexedvEXT\0"
   "glGetIntegeri_v\0"
   "\0"
   /* _mesa_function_pool[48772]: Enablei (will be remapped) */
   "ii\0"
   "glEnableIndexedEXT\0"
   "glEnablei\0"
   "glEnableiEXT\0"
   "glEnableiOES\0"
   "\0"
   /* _mesa_function_pool[48831]: Disablei (will be remapped) */
   "ii\0"
   "glDisableIndexedEXT\0"
   "glDisablei\0"
   "glDisableiEXT\0"
   "glDisableiOES\0"
   "\0"
   /* _mesa_function_pool[48894]: IsEnabledi (will be remapped) */
   "ii\0"
   "glIsEnabledIndexedEXT\0"
   "glIsEnabledi\0"
   "glIsEnablediEXT\0"
   "glIsEnablediOES\0"
   "\0"
   /* _mesa_function_pool[48965]: BufferParameteriAPPLE (will be remapped) */
   "iii\0"
   "glBufferParameteriAPPLE\0"
   "\0"
   /* _mesa_function_pool[48994]: FlushMappedBufferRangeAPPLE (will be remapped) */
   "iii\0"
   "glFlushMappedBufferRangeAPPLE\0"
   "\0"
   /* _mesa_function_pool[49029]: GetPerfMonitorGroupsAMD (will be remapped) */
   "pip\0"
   "glGetPerfMonitorGroupsAMD\0"
   "\0"
   /* _mesa_function_pool[49060]: GetPerfMonitorCountersAMD (will be remapped) */
   "ippip\0"
   "glGetPerfMonitorCountersAMD\0"
   "\0"
   /* _mesa_function_pool[49095]: GetPerfMonitorGroupStringAMD (will be remapped) */
   "iipp\0"
   "glGetPerfMonitorGroupStringAMD\0"
   "\0"
   /* _mesa_function_pool[49132]: GetPerfMonitorCounterStringAMD (will be remapped) */
   "iiipp\0"
   "glGetPerfMonitorCounterStringAMD\0"
   "\0"
   /* _mesa_function_pool[49172]: GetPerfMonitorCounterInfoAMD (will be remapped) */
   "iiip\0"
   "glGetPerfMonitorCounterInfoAMD\0"
   "\0"
   /* _mesa_function_pool[49209]: GenPerfMonitorsAMD (will be remapped) */
   "ip\0"
   "glGenPerfMonitorsAMD\0"
   "\0"
   /* _mesa_function_pool[49234]: DeletePerfMonitorsAMD (will be remapped) */
   "ip\0"
   "glDeletePerfMonitorsAMD\0"
   "\0"
   /* _mesa_function_pool[49262]: SelectPerfMonitorCountersAMD (will be remapped) */
   "iiiip\0"
   "glSelectPerfMonitorCountersAMD\0"
   "\0"
   /* _mesa_function_pool[49300]: BeginPerfMonitorAMD (will be remapped) */
   "i\0"
   "glBeginPerfMonitorAMD\0"
   "\0"
   /* _mesa_function_pool[49325]: EndPerfMonitorAMD (will be remapped) */
   "i\0"
   "glEndPerfMonitorAMD\0"
   "\0"
   /* _mesa_function_pool[49348]: GetPerfMonitorCounterDataAMD (will be remapped) */
   "iiipp\0"
   "glGetPerfMonitorCounterDataAMD\0"
   "\0"
   /* _mesa_function_pool[49386]: TextureRangeAPPLE (dynamic) */
   "iip\0"
   "glTextureRangeAPPLE\0"
   "\0"
   /* _mesa_function_pool[49411]: GetTexParameterPointervAPPLE (dynamic) */
   "iip\0"
   "glGetTexParameterPointervAPPLE\0"
   "\0"
   /* _mesa_function_pool[49447]: UseShaderProgramEXT (will be remapped) */
   "ii\0"
   "glUseShaderProgramEXT\0"
   "\0"
   /* _mesa_function_pool[49473]: ActiveProgramEXT (will be remapped) */
   "i\0"
   "glActiveProgramEXT\0"
   "\0"
   /* _mesa_function_pool[49495]: CreateShaderProgramEXT (will be remapped) */
   "ip\0"
   "glCreateShaderProgramEXT\0"
   "\0"
   /* _mesa_function_pool[49524]: CopyImageSubDataNV (will be remapped) */
   "iiiiiiiiiiiiiii\0"
   "glCopyImageSubDataNV\0"
   "\0"
   /* _mesa_function_pool[49562]: MatrixLoadfEXT (will be remapped) */
   "ip\0"
   "glMatrixLoadfEXT\0"
   "\0"
   /* _mesa_function_pool[49583]: MatrixLoaddEXT (will be remapped) */
   "ip\0"
   "glMatrixLoaddEXT\0"
   "\0"
   /* _mesa_function_pool[49604]: MatrixMultfEXT (will be remapped) */
   "ip\0"
   "glMatrixMultfEXT\0"
   "\0"
   /* _mesa_function_pool[49625]: MatrixMultdEXT (will be remapped) */
   "ip\0"
   "glMatrixMultdEXT\0"
   "\0"
   /* _mesa_function_pool[49646]: MatrixLoadIdentityEXT (will be remapped) */
   "i\0"
   "glMatrixLoadIdentityEXT\0"
   "\0"
   /* _mesa_function_pool[49673]: MatrixRotatefEXT (will be remapped) */
   "iffff\0"
   "glMatrixRotatefEXT\0"
   "\0"
   /* _mesa_function_pool[49699]: MatrixRotatedEXT (will be remapped) */
   "idddd\0"
   "glMatrixRotatedEXT\0"
   "\0"
   /* _mesa_function_pool[49725]: MatrixScalefEXT (will be remapped) */
   "ifff\0"
   "glMatrixScalefEXT\0"
   "\0"
   /* _mesa_function_pool[49749]: MatrixScaledEXT (will be remapped) */
   "iddd\0"
   "glMatrixScaledEXT\0"
   "\0"
   /* _mesa_function_pool[49773]: MatrixTranslatefEXT (will be remapped) */
   "ifff\0"
   "glMatrixTranslatefEXT\0"
   "\0"
   /* _mesa_function_pool[49801]: MatrixTranslatedEXT (will be remapped) */
   "iddd\0"
   "glMatrixTranslatedEXT\0"
   "\0"
   /* _mesa_function_pool[49829]: MatrixOrthoEXT (will be remapped) */
   "idddddd\0"
   "glMatrixOrthoEXT\0"
   "\0"
   /* _mesa_function_pool[49855]: MatrixFrustumEXT (will be remapped) */
   "idddddd\0"
   "glMatrixFrustumEXT\0"
   "\0"
   /* _mesa_function_pool[49883]: MatrixPushEXT (will be remapped) */
   "i\0"
   "glMatrixPushEXT\0"
   "\0"
   /* _mesa_function_pool[49902]: MatrixPopEXT (will be remapped) */
   "i\0"
   "glMatrixPopEXT\0"
   "\0"
   /* _mesa_function_pool[49920]: ClientAttribDefaultEXT (will be remapped) */
   "i\0"
   "glClientAttribDefaultEXT\0"
   "\0"
   /* _mesa_function_pool[49948]: PushClientAttribDefaultEXT (will be remapped) */
   "i\0"
   "glPushClientAttribDefaultEXT\0"
   "\0"
   /* _mesa_function_pool[49980]: GetTextureParameterivEXT (will be remapped) */
   "iiip\0"
   "glGetTextureParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[50013]: GetTextureParameterfvEXT (will be remapped) */
   "iiip\0"
   "glGetTextureParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[50046]: GetTextureLevelParameterivEXT (will be remapped) */
   "iiiip\0"
   "glGetTextureLevelParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[50085]: GetTextureLevelParameterfvEXT (will be remapped) */
   "iiiip\0"
   "glGetTextureLevelParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[50124]: TextureParameteriEXT (will be remapped) */
   "iiii\0"
   "glTextureParameteriEXT\0"
   "\0"
   /* _mesa_function_pool[50153]: TextureParameterivEXT (will be remapped) */
   "iiip\0"
   "glTextureParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[50183]: TextureParameterfEXT (will be remapped) */
   "iiif\0"
   "glTextureParameterfEXT\0"
   "\0"
   /* _mesa_function_pool[50212]: TextureParameterfvEXT (will be remapped) */
   "iiip\0"
   "glTextureParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[50242]: TextureImage1DEXT (will be remapped) */
   "iiiiiiiip\0"
   "glTextureImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[50273]: TextureImage2DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glTextureImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[50305]: TextureImage3DEXT (will be remapped) */
   "iiiiiiiiiip\0"
   "glTextureImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[50338]: TextureSubImage1DEXT (will be remapped) */
   "iiiiiiip\0"
   "glTextureSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[50371]: TextureSubImage2DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glTextureSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[50406]: TextureSubImage3DEXT (will be remapped) */
   "iiiiiiiiiiip\0"
   "glTextureSubImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[50443]: CopyTextureImage1DEXT (will be remapped) */
   "iiiiiiii\0"
   "glCopyTextureImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[50477]: CopyTextureImage2DEXT (will be remapped) */
   "iiiiiiiii\0"
   "glCopyTextureImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[50512]: CopyTextureSubImage1DEXT (will be remapped) */
   "iiiiiii\0"
   "glCopyTextureSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[50548]: CopyTextureSubImage2DEXT (will be remapped) */
   "iiiiiiiii\0"
   "glCopyTextureSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[50586]: CopyTextureSubImage3DEXT (will be remapped) */
   "iiiiiiiiii\0"
   "glCopyTextureSubImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[50625]: GetTextureImageEXT (will be remapped) */
   "iiiiip\0"
   "glGetTextureImageEXT\0"
   "\0"
   /* _mesa_function_pool[50654]: BindMultiTextureEXT (will be remapped) */
   "iii\0"
   "glBindMultiTextureEXT\0"
   "\0"
   /* _mesa_function_pool[50681]: EnableClientStateiEXT (will be remapped) */
   "ii\0"
   "glEnableClientStateIndexedEXT\0"
   "glEnableClientStateiEXT\0"
   "\0"
   /* _mesa_function_pool[50739]: DisableClientStateiEXT (will be remapped) */
   "ii\0"
   "glDisableClientStateIndexedEXT\0"
   "glDisableClientStateiEXT\0"
   "\0"
   /* _mesa_function_pool[50799]: GetPointerIndexedvEXT (will be remapped) */
   "iip\0"
   "glGetPointerIndexedvEXT\0"
   "glGetPointeri_vEXT\0"
   "\0"
   /* _mesa_function_pool[50847]: MultiTexEnviEXT (will be remapped) */
   "iiii\0"
   "glMultiTexEnviEXT\0"
   "\0"
   /* _mesa_function_pool[50871]: MultiTexEnvivEXT (will be remapped) */
   "iiip\0"
   "glMultiTexEnvivEXT\0"
   "\0"
   /* _mesa_function_pool[50896]: MultiTexEnvfEXT (will be remapped) */
   "iiif\0"
   "glMultiTexEnvfEXT\0"
   "\0"
   /* _mesa_function_pool[50920]: MultiTexEnvfvEXT (will be remapped) */
   "iiip\0"
   "glMultiTexEnvfvEXT\0"
   "\0"
   /* _mesa_function_pool[50945]: GetMultiTexEnvivEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexEnvivEXT\0"
   "\0"
   /* _mesa_function_pool[50973]: GetMultiTexEnvfvEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexEnvfvEXT\0"
   "\0"
   /* _mesa_function_pool[51001]: MultiTexParameteriEXT (will be remapped) */
   "iiii\0"
   "glMultiTexParameteriEXT\0"
   "\0"
   /* _mesa_function_pool[51031]: MultiTexParameterivEXT (will be remapped) */
   "iiip\0"
   "glMultiTexParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[51062]: MultiTexParameterfEXT (will be remapped) */
   "iiif\0"
   "glMultiTexParameterfEXT\0"
   "\0"
   /* _mesa_function_pool[51092]: MultiTexParameterfvEXT (will be remapped) */
   "iiip\0"
   "glMultiTexParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[51123]: GetMultiTexParameterivEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[51157]: GetMultiTexParameterfvEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[51191]: GetMultiTexImageEXT (will be remapped) */
   "iiiiip\0"
   "glGetMultiTexImageEXT\0"
   "\0"
   /* _mesa_function_pool[51221]: GetMultiTexLevelParameterivEXT (will be remapped) */
   "iiiip\0"
   "glGetMultiTexLevelParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[51261]: GetMultiTexLevelParameterfvEXT (will be remapped) */
   "iiiip\0"
   "glGetMultiTexLevelParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[51301]: MultiTexImage1DEXT (will be remapped) */
   "iiiiiiiip\0"
   "glMultiTexImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[51333]: MultiTexImage2DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glMultiTexImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[51366]: MultiTexImage3DEXT (will be remapped) */
   "iiiiiiiiiip\0"
   "glMultiTexImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[51400]: MultiTexSubImage1DEXT (will be remapped) */
   "iiiiiiip\0"
   "glMultiTexSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[51434]: MultiTexSubImage2DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glMultiTexSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[51470]: MultiTexSubImage3DEXT (will be remapped) */
   "iiiiiiiiiiip\0"
   "glMultiTexSubImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[51508]: CopyMultiTexImage1DEXT (will be remapped) */
   "iiiiiiii\0"
   "glCopyMultiTexImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[51543]: CopyMultiTexImage2DEXT (will be remapped) */
   "iiiiiiiii\0"
   "glCopyMultiTexImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[51579]: CopyMultiTexSubImage1DEXT (will be remapped) */
   "iiiiiii\0"
   "glCopyMultiTexSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[51616]: CopyMultiTexSubImage2DEXT (will be remapped) */
   "iiiiiiiii\0"
   "glCopyMultiTexSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[51655]: CopyMultiTexSubImage3DEXT (will be remapped) */
   "iiiiiiiiii\0"
   "glCopyMultiTexSubImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[51695]: MultiTexGendEXT (will be remapped) */
   "iiid\0"
   "glMultiTexGendEXT\0"
   "\0"
   /* _mesa_function_pool[51719]: MultiTexGendvEXT (will be remapped) */
   "iiip\0"
   "glMultiTexGendvEXT\0"
   "\0"
   /* _mesa_function_pool[51744]: MultiTexGenfEXT (will be remapped) */
   "iiif\0"
   "glMultiTexGenfEXT\0"
   "\0"
   /* _mesa_function_pool[51768]: MultiTexGenfvEXT (will be remapped) */
   "iiip\0"
   "glMultiTexGenfvEXT\0"
   "\0"
   /* _mesa_function_pool[51793]: MultiTexGeniEXT (will be remapped) */
   "iiii\0"
   "glMultiTexGeniEXT\0"
   "\0"
   /* _mesa_function_pool[51817]: MultiTexGenivEXT (will be remapped) */
   "iiip\0"
   "glMultiTexGenivEXT\0"
   "\0"
   /* _mesa_function_pool[51842]: GetMultiTexGendvEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexGendvEXT\0"
   "\0"
   /* _mesa_function_pool[51870]: GetMultiTexGenfvEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexGenfvEXT\0"
   "\0"
   /* _mesa_function_pool[51898]: GetMultiTexGenivEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexGenivEXT\0"
   "\0"
   /* _mesa_function_pool[51926]: MultiTexCoordPointerEXT (will be remapped) */
   "iiiip\0"
   "glMultiTexCoordPointerEXT\0"
   "\0"
   /* _mesa_function_pool[51959]: MatrixLoadTransposefEXT (will be remapped) */
   "ip\0"
   "glMatrixLoadTransposefEXT\0"
   "\0"
   /* _mesa_function_pool[51989]: MatrixLoadTransposedEXT (will be remapped) */
   "ip\0"
   "glMatrixLoadTransposedEXT\0"
   "\0"
   /* _mesa_function_pool[52019]: MatrixMultTransposefEXT (will be remapped) */
   "ip\0"
   "glMatrixMultTransposefEXT\0"
   "\0"
   /* _mesa_function_pool[52049]: MatrixMultTransposedEXT (will be remapped) */
   "ip\0"
   "glMatrixMultTransposedEXT\0"
   "\0"
   /* _mesa_function_pool[52079]: CompressedTextureImage1DEXT (will be remapped) */
   "iiiiiiip\0"
   "glCompressedTextureImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[52119]: CompressedTextureImage2DEXT (will be remapped) */
   "iiiiiiiip\0"
   "glCompressedTextureImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[52160]: CompressedTextureImage3DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glCompressedTextureImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[52202]: CompressedTextureSubImage1DEXT (will be remapped) */
   "iiiiiiip\0"
   "glCompressedTextureSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[52245]: CompressedTextureSubImage2DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glCompressedTextureSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[52290]: CompressedTextureSubImage3DEXT (will be remapped) */
   "iiiiiiiiiiip\0"
   "glCompressedTextureSubImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[52337]: GetCompressedTextureImageEXT (will be remapped) */
   "iiip\0"
   "glGetCompressedTextureImageEXT\0"
   "\0"
   /* _mesa_function_pool[52374]: CompressedMultiTexImage1DEXT (will be remapped) */
   "iiiiiiip\0"
   "glCompressedMultiTexImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[52415]: CompressedMultiTexImage2DEXT (will be remapped) */
   "iiiiiiiip\0"
   "glCompressedMultiTexImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[52457]: CompressedMultiTexImage3DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glCompressedMultiTexImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[52500]: CompressedMultiTexSubImage1DEXT (will be remapped) */
   "iiiiiiip\0"
   "glCompressedMultiTexSubImage1DEXT\0"
   "\0"
   /* _mesa_function_pool[52544]: CompressedMultiTexSubImage2DEXT (will be remapped) */
   "iiiiiiiiip\0"
   "glCompressedMultiTexSubImage2DEXT\0"
   "\0"
   /* _mesa_function_pool[52590]: CompressedMultiTexSubImage3DEXT (will be remapped) */
   "iiiiiiiiiiip\0"
   "glCompressedMultiTexSubImage3DEXT\0"
   "\0"
   /* _mesa_function_pool[52638]: GetCompressedMultiTexImageEXT (will be remapped) */
   "iiip\0"
   "glGetCompressedMultiTexImageEXT\0"
   "\0"
   /* _mesa_function_pool[52676]: NamedBufferDataEXT (will be remapped) */
   "iipi\0"
   "glNamedBufferDataEXT\0"
   "\0"
   /* _mesa_function_pool[52703]: NamedBufferSubDataEXT (will be remapped) */
   "iiip\0"
   "glNamedBufferSubDataEXT\0"
   "\0"
   /* _mesa_function_pool[52733]: MapNamedBufferEXT (will be remapped) */
   "ii\0"
   "glMapNamedBufferEXT\0"
   "\0"
   /* _mesa_function_pool[52757]: GetNamedBufferSubDataEXT (will be remapped) */
   "iiip\0"
   "glGetNamedBufferSubDataEXT\0"
   "\0"
   /* _mesa_function_pool[52790]: GetNamedBufferPointervEXT (will be remapped) */
   "iip\0"
   "glGetNamedBufferPointervEXT\0"
   "\0"
   /* _mesa_function_pool[52823]: GetNamedBufferParameterivEXT (will be remapped) */
   "iip\0"
   "glGetNamedBufferParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[52859]: FlushMappedNamedBufferRangeEXT (will be remapped) */
   "iii\0"
   "glFlushMappedNamedBufferRangeEXT\0"
   "\0"
   /* _mesa_function_pool[52897]: MapNamedBufferRangeEXT (will be remapped) */
   "iiii\0"
   "glMapNamedBufferRangeEXT\0"
   "\0"
   /* _mesa_function_pool[52928]: FramebufferDrawBufferEXT (will be remapped) */
   "ii\0"
   "glFramebufferDrawBufferEXT\0"
   "\0"
   /* _mesa_function_pool[52959]: FramebufferDrawBuffersEXT (will be remapped) */
   "iip\0"
   "glFramebufferDrawBuffersEXT\0"
   "\0"
   /* _mesa_function_pool[52992]: FramebufferReadBufferEXT (will be remapped) */
   "ii\0"
   "glFramebufferReadBufferEXT\0"
   "\0"
   /* _mesa_function_pool[53023]: GetFramebufferParameterivEXT (will be remapped) */
   "iip\0"
   "glGetFramebufferParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[53059]: CheckNamedFramebufferStatusEXT (will be remapped) */
   "ii\0"
   "glCheckNamedFramebufferStatusEXT\0"
   "\0"
   /* _mesa_function_pool[53096]: NamedFramebufferTexture1DEXT (will be remapped) */
   "iiiii\0"
   "glNamedFramebufferTexture1DEXT\0"
   "\0"
   /* _mesa_function_pool[53134]: NamedFramebufferTexture2DEXT (will be remapped) */
   "iiiii\0"
   "glNamedFramebufferTexture2DEXT\0"
   "\0"
   /* _mesa_function_pool[53172]: NamedFramebufferTexture3DEXT (will be remapped) */
   "iiiiii\0"
   "glNamedFramebufferTexture3DEXT\0"
   "\0"
   /* _mesa_function_pool[53211]: NamedFramebufferRenderbufferEXT (will be remapped) */
   "iiii\0"
   "glNamedFramebufferRenderbufferEXT\0"
   "\0"
   /* _mesa_function_pool[53251]: GetNamedFramebufferAttachmentParameterivEXT (will be remapped) */
   "iiip\0"
   "glGetNamedFramebufferAttachmentParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[53303]: NamedRenderbufferStorageEXT (will be remapped) */
   "iiii\0"
   "glNamedRenderbufferStorageEXT\0"
   "\0"
   /* _mesa_function_pool[53339]: GetNamedRenderbufferParameterivEXT (will be remapped) */
   "iip\0"
   "glGetNamedRenderbufferParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[53381]: GenerateTextureMipmapEXT (will be remapped) */
   "ii\0"
   "glGenerateTextureMipmapEXT\0"
   "\0"
   /* _mesa_function_pool[53412]: GenerateMultiTexMipmapEXT (will be remapped) */
   "ii\0"
   "glGenerateMultiTexMipmapEXT\0"
   "\0"
   /* _mesa_function_pool[53444]: NamedRenderbufferStorageMultisampleEXT (will be remapped) */
   "iiiii\0"
   "glNamedRenderbufferStorageMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[53492]: NamedCopyBufferSubDataEXT (will be remapped) */
   "iiiii\0"
   "glNamedCopyBufferSubDataEXT\0"
   "\0"
   /* _mesa_function_pool[53527]: VertexArrayVertexOffsetEXT (will be remapped) */
   "iiiiii\0"
   "glVertexArrayVertexOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53564]: VertexArrayColorOffsetEXT (will be remapped) */
   "iiiiii\0"
   "glVertexArrayColorOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53600]: VertexArrayEdgeFlagOffsetEXT (will be remapped) */
   "iiii\0"
   "glVertexArrayEdgeFlagOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53637]: VertexArrayIndexOffsetEXT (will be remapped) */
   "iiiii\0"
   "glVertexArrayIndexOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53672]: VertexArrayNormalOffsetEXT (will be remapped) */
   "iiiii\0"
   "glVertexArrayNormalOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53708]: VertexArrayTexCoordOffsetEXT (will be remapped) */
   "iiiiii\0"
   "glVertexArrayTexCoordOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53747]: VertexArrayMultiTexCoordOffsetEXT (will be remapped) */
   "iiiiiii\0"
   "glVertexArrayMultiTexCoordOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53792]: VertexArrayFogCoordOffsetEXT (will be remapped) */
   "iiiii\0"
   "glVertexArrayFogCoordOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53830]: VertexArraySecondaryColorOffsetEXT (will be remapped) */
   "iiiiii\0"
   "glVertexArraySecondaryColorOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53875]: VertexArrayVertexAttribOffsetEXT (will be remapped) */
   "iiiiiiii\0"
   "glVertexArrayVertexAttribOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53920]: VertexArrayVertexAttribIOffsetEXT (will be remapped) */
   "iiiiiii\0"
   "glVertexArrayVertexAttribIOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[53965]: EnableVertexArrayEXT (will be remapped) */
   "ii\0"
   "glEnableVertexArrayEXT\0"
   "\0"
   /* _mesa_function_pool[53992]: DisableVertexArrayEXT (will be remapped) */
   "ii\0"
   "glDisableVertexArrayEXT\0"
   "\0"
   /* _mesa_function_pool[54020]: EnableVertexArrayAttribEXT (will be remapped) */
   "ii\0"
   "glEnableVertexArrayAttribEXT\0"
   "\0"
   /* _mesa_function_pool[54053]: DisableVertexArrayAttribEXT (will be remapped) */
   "ii\0"
   "glDisableVertexArrayAttribEXT\0"
   "\0"
   /* _mesa_function_pool[54087]: GetVertexArrayIntegervEXT (will be remapped) */
   "iip\0"
   "glGetVertexArrayIntegervEXT\0"
   "\0"
   /* _mesa_function_pool[54120]: GetVertexArrayPointervEXT (will be remapped) */
   "iip\0"
   "glGetVertexArrayPointervEXT\0"
   "\0"
   /* _mesa_function_pool[54153]: GetVertexArrayIntegeri_vEXT (will be remapped) */
   "iiip\0"
   "glGetVertexArrayIntegeri_vEXT\0"
   "\0"
   /* _mesa_function_pool[54189]: GetVertexArrayPointeri_vEXT (will be remapped) */
   "iiip\0"
   "glGetVertexArrayPointeri_vEXT\0"
   "\0"
   /* _mesa_function_pool[54225]: NamedProgramStringEXT (will be remapped) */
   "iiiip\0"
   "glNamedProgramStringEXT\0"
   "\0"
   /* _mesa_function_pool[54256]: GetNamedProgramStringEXT (will be remapped) */
   "iiip\0"
   "glGetNamedProgramStringEXT\0"
   "\0"
   /* _mesa_function_pool[54289]: NamedProgramLocalParameter4fEXT (will be remapped) */
   "iiiffff\0"
   "glNamedProgramLocalParameter4fEXT\0"
   "\0"
   /* _mesa_function_pool[54332]: NamedProgramLocalParameter4fvEXT (will be remapped) */
   "iiip\0"
   "glNamedProgramLocalParameter4fvEXT\0"
   "\0"
   /* _mesa_function_pool[54373]: GetNamedProgramLocalParameterfvEXT (will be remapped) */
   "iiip\0"
   "glGetNamedProgramLocalParameterfvEXT\0"
   "\0"
   /* _mesa_function_pool[54416]: NamedProgramLocalParameter4dEXT (will be remapped) */
   "iiidddd\0"
   "glNamedProgramLocalParameter4dEXT\0"
   "\0"
   /* _mesa_function_pool[54459]: NamedProgramLocalParameter4dvEXT (will be remapped) */
   "iiip\0"
   "glNamedProgramLocalParameter4dvEXT\0"
   "\0"
   /* _mesa_function_pool[54500]: GetNamedProgramLocalParameterdvEXT (will be remapped) */
   "iiip\0"
   "glGetNamedProgramLocalParameterdvEXT\0"
   "\0"
   /* _mesa_function_pool[54543]: GetNamedProgramivEXT (will be remapped) */
   "iiip\0"
   "glGetNamedProgramivEXT\0"
   "\0"
   /* _mesa_function_pool[54572]: TextureBufferEXT (will be remapped) */
   "iiii\0"
   "glTextureBufferEXT\0"
   "\0"
   /* _mesa_function_pool[54597]: MultiTexBufferEXT (will be remapped) */
   "iiii\0"
   "glMultiTexBufferEXT\0"
   "\0"
   /* _mesa_function_pool[54623]: TextureParameterIivEXT (will be remapped) */
   "iiip\0"
   "glTextureParameterIivEXT\0"
   "\0"
   /* _mesa_function_pool[54654]: TextureParameterIuivEXT (will be remapped) */
   "iiip\0"
   "glTextureParameterIuivEXT\0"
   "\0"
   /* _mesa_function_pool[54686]: GetTextureParameterIivEXT (will be remapped) */
   "iiip\0"
   "glGetTextureParameterIivEXT\0"
   "\0"
   /* _mesa_function_pool[54720]: GetTextureParameterIuivEXT (will be remapped) */
   "iiip\0"
   "glGetTextureParameterIuivEXT\0"
   "\0"
   /* _mesa_function_pool[54755]: MultiTexParameterIivEXT (will be remapped) */
   "iiip\0"
   "glMultiTexParameterIivEXT\0"
   "\0"
   /* _mesa_function_pool[54787]: MultiTexParameterIuivEXT (will be remapped) */
   "iiip\0"
   "glMultiTexParameterIuivEXT\0"
   "\0"
   /* _mesa_function_pool[54820]: GetMultiTexParameterIivEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexParameterIivEXT\0"
   "\0"
   /* _mesa_function_pool[54855]: GetMultiTexParameterIuivEXT (will be remapped) */
   "iiip\0"
   "glGetMultiTexParameterIuivEXT\0"
   "\0"
   /* _mesa_function_pool[54891]: NamedProgramLocalParameters4fvEXT (will be remapped) */
   "iiiip\0"
   "glNamedProgramLocalParameters4fvEXT\0"
   "\0"
   /* _mesa_function_pool[54934]: BindImageTextureEXT (will be remapped) */
   "iiiiiii\0"
   "glBindImageTextureEXT\0"
   "\0"
   /* _mesa_function_pool[54965]: LabelObjectEXT (will be remapped) */
   "iiip\0"
   "glLabelObjectEXT\0"
   "\0"
   /* _mesa_function_pool[54988]: GetObjectLabelEXT (will be remapped) */
   "iiipp\0"
   "glGetObjectLabelEXT\0"
   "\0"
   /* _mesa_function_pool[55015]: SubpixelPrecisionBiasNV (will be remapped) */
   "ii\0"
   "glSubpixelPrecisionBiasNV\0"
   "\0"
   /* _mesa_function_pool[55045]: ConservativeRasterParameterfNV (will be remapped) */
   "if\0"
   "glConservativeRasterParameterfNV\0"
   "\0"
   /* _mesa_function_pool[55082]: ConservativeRasterParameteriNV (will be remapped) */
   "ii\0"
   "glConservativeRasterParameteriNV\0"
   "\0"
   /* _mesa_function_pool[55119]: GetFirstPerfQueryIdINTEL (will be remapped) */
   "p\0"
   "glGetFirstPerfQueryIdINTEL\0"
   "\0"
   /* _mesa_function_pool[55149]: GetNextPerfQueryIdINTEL (will be remapped) */
   "ip\0"
   "glGetNextPerfQueryIdINTEL\0"
   "\0"
   /* _mesa_function_pool[55179]: GetPerfQueryIdByNameINTEL (will be remapped) */
   "pp\0"
   "glGetPerfQueryIdByNameINTEL\0"
   "\0"
   /* _mesa_function_pool[55211]: GetPerfQueryInfoINTEL (will be remapped) */
   "iippppp\0"
   "glGetPerfQueryInfoINTEL\0"
   "\0"
   /* _mesa_function_pool[55244]: GetPerfCounterInfoINTEL (will be remapped) */
   "iiipipppppp\0"
   "glGetPerfCounterInfoINTEL\0"
   "\0"
   /* _mesa_function_pool[55283]: CreatePerfQueryINTEL (will be remapped) */
   "ip\0"
   "glCreatePerfQueryINTEL\0"
   "\0"
   /* _mesa_function_pool[55310]: DeletePerfQueryINTEL (will be remapped) */
   "i\0"
   "glDeletePerfQueryINTEL\0"
   "\0"
   /* _mesa_function_pool[55336]: BeginPerfQueryINTEL (will be remapped) */
   "i\0"
   "glBeginPerfQueryINTEL\0"
   "\0"
   /* _mesa_function_pool[55361]: EndPerfQueryINTEL (will be remapped) */
   "i\0"
   "glEndPerfQueryINTEL\0"
   "\0"
   /* _mesa_function_pool[55384]: GetPerfQueryDataINTEL (will be remapped) */
   "iiipp\0"
   "glGetPerfQueryDataINTEL\0"
   "\0"
   /* _mesa_function_pool[55415]: AlphaToCoverageDitherControlNV (will be remapped) */
   "i\0"
   "glAlphaToCoverageDitherControlNV\0"
   "\0"
   /* _mesa_function_pool[55451]: PolygonOffsetClampEXT (will be remapped) */
   "fff\0"
   "glPolygonOffsetClampEXT\0"
   "glPolygonOffsetClamp\0"
   "\0"
   /* _mesa_function_pool[55501]: WindowRectanglesEXT (will be remapped) */
   "iip\0"
   "glWindowRectanglesEXT\0"
   "\0"
   /* _mesa_function_pool[55528]: FramebufferFetchBarrierEXT (will be remapped) */
   "\0"
   "glFramebufferFetchBarrierEXT\0"
   "\0"
   /* _mesa_function_pool[55559]: RenderbufferStorageMultisampleAdvancedAMD (will be remapped) */
   "iiiiii\0"
   "glRenderbufferStorageMultisampleAdvancedAMD\0"
   "\0"
   /* _mesa_function_pool[55611]: NamedRenderbufferStorageMultisampleAdvancedAMD (will be remapped) */
   "iiiiii\0"
   "glNamedRenderbufferStorageMultisampleAdvancedAMD\0"
   "\0"
   /* _mesa_function_pool[55668]: StencilFuncSeparateATI (will be remapped) */
   "iiii\0"
   "glStencilFuncSeparateATI\0"
   "\0"
   /* _mesa_function_pool[55699]: ProgramEnvParameters4fvEXT (will be remapped) */
   "iiip\0"
   "glProgramEnvParameters4fvEXT\0"
   "\0"
   /* _mesa_function_pool[55734]: ProgramLocalParameters4fvEXT (will be remapped) */
   "iiip\0"
   "glProgramLocalParameters4fvEXT\0"
   "\0"
   /* _mesa_function_pool[55771]: IglooInterfaceSGIX (dynamic) */
   "ip\0"
   "glIglooInterfaceSGIX\0"
   "\0"
   /* _mesa_function_pool[55796]: DeformationMap3dSGIX (dynamic) */
   "iddiiddiiddiip\0"
   "glDeformationMap3dSGIX\0"
   "\0"
   /* _mesa_function_pool[55835]: DeformationMap3fSGIX (dynamic) */
   "iffiiffiiffiip\0"
   "glDeformationMap3fSGIX\0"
   "\0"
   /* _mesa_function_pool[55874]: DeformSGIX (dynamic) */
   "i\0"
   "glDeformSGIX\0"
   "\0"
   /* _mesa_function_pool[55890]: LoadIdentityDeformationMapSGIX (dynamic) */
   "i\0"
   "glLoadIdentityDeformationMapSGIX\0"
   "\0"
   /* _mesa_function_pool[55926]: InternalBufferSubDataCopyMESA (will be remapped) */
   "iiiiiii\0"
   "glInternalBufferSubDataCopyMESA\0"
   "\0"
   /* _mesa_function_pool[55967]: InternalSetError (will be remapped) */
   "i\0"
   "glInternalSetError\0"
   "\0"
   /* _mesa_function_pool[55989]: DrawArraysUserBuf (will be remapped) */
   "\0"
   "glDrawArraysUserBuf\0"
   "\0"
   /* _mesa_function_pool[56011]: DrawElementsUserBuf (will be remapped) */
   "iiiipiii\0"
   "glDrawElementsUserBuf\0"
   "\0"
   /* _mesa_function_pool[56043]: MultiDrawArraysUserBuf (will be remapped) */
   "\0"
   "glMultiDrawArraysUserBuf\0"
   "\0"
   /* _mesa_function_pool[56070]: MultiDrawElementsUserBuf (will be remapped) */
   "iipipip\0"
   "glMultiDrawElementsUserBuf\0"
   "\0"
   /* _mesa_function_pool[56106]: DrawArraysInstancedBaseInstanceDrawID (will be remapped) */
   "\0"
   "glDrawArraysInstancedBaseInstanceDrawID\0"
   "\0"
   /* _mesa_function_pool[56148]: DrawElementsInstancedBaseVertexBaseInstanceDrawID (will be remapped) */
   "\0"
   "glDrawElementsInstancedBaseVertexBaseInstanceDrawID\0"
   "\0"
   /* _mesa_function_pool[56202]: InternalInvalidateFramebufferAncillaryMESA (will be remapped) */
   "\0"
   "glInternalInvalidateFramebufferAncillaryMESA\0"
   "\0"
   /* _mesa_function_pool[56249]: EGLImageTargetTexture2DOES (will be remapped) */
   "ip\0"
   "glEGLImageTargetTexture2DOES\0"
   "\0"
   /* _mesa_function_pool[56282]: EGLImageTargetRenderbufferStorageOES (will be remapped) */
   "ip\0"
   "glEGLImageTargetRenderbufferStorageOES\0"
   "\0"
   /* _mesa_function_pool[56325]: EGLImageTargetTexStorageEXT (will be remapped) */
   "ipp\0"
   "glEGLImageTargetTexStorageEXT\0"
   "\0"
   /* _mesa_function_pool[56360]: EGLImageTargetTextureStorageEXT (will be remapped) */
   "ipp\0"
   "glEGLImageTargetTextureStorageEXT\0"
   "\0"
   /* _mesa_function_pool[56399]: ClearColorIiEXT (will be remapped) */
   "iiii\0"
   "glClearColorIiEXT\0"
   "\0"
   /* _mesa_function_pool[56423]: ClearColorIuiEXT (will be remapped) */
   "iiii\0"
   "glClearColorIuiEXT\0"
   "\0"
   /* _mesa_function_pool[56448]: TexParameterIiv (will be remapped) */
   "iip\0"
   "glTexParameterIivEXT\0"
   "glTexParameterIiv\0"
   "glTexParameterIivOES\0"
   "\0"
   /* _mesa_function_pool[56513]: TexParameterIuiv (will be remapped) */
   "iip\0"
   "glTexParameterIuivEXT\0"
   "glTexParameterIuiv\0"
   "glTexParameterIuivOES\0"
   "\0"
   /* _mesa_function_pool[56581]: GetTexParameterIiv (will be remapped) */
   "iip\0"
   "glGetTexParameterIivEXT\0"
   "glGetTexParameterIiv\0"
   "glGetTexParameterIivOES\0"
   "\0"
   /* _mesa_function_pool[56655]: GetTexParameterIuiv (will be remapped) */
   "iip\0"
   "glGetTexParameterIuivEXT\0"
   "glGetTexParameterIuiv\0"
   "glGetTexParameterIuivOES\0"
   "\0"
   /* _mesa_function_pool[56732]: VertexAttribI1iEXT (will be remapped) */
   "ii\0"
   "glVertexAttribI1iEXT\0"
   "glVertexAttribI1i\0"
   "\0"
   /* _mesa_function_pool[56775]: VertexAttribI2iEXT (will be remapped) */
   "iii\0"
   "glVertexAttribI2iEXT\0"
   "glVertexAttribI2i\0"
   "\0"
   /* _mesa_function_pool[56819]: VertexAttribI3iEXT (will be remapped) */
   "iiii\0"
   "glVertexAttribI3iEXT\0"
   "glVertexAttribI3i\0"
   "\0"
   /* _mesa_function_pool[56864]: VertexAttribI4iEXT (will be remapped) */
   "iiiii\0"
   "glVertexAttribI4iEXT\0"
   "glVertexAttribI4i\0"
   "\0"
   /* _mesa_function_pool[56910]: VertexAttribI1uiEXT (will be remapped) */
   "ii\0"
   "glVertexAttribI1uiEXT\0"
   "glVertexAttribI1ui\0"
   "\0"
   /* _mesa_function_pool[56955]: VertexAttribI2uiEXT (will be remapped) */
   "iii\0"
   "glVertexAttribI2uiEXT\0"
   "glVertexAttribI2ui\0"
   "\0"
   /* _mesa_function_pool[57001]: VertexAttribI3uiEXT (will be remapped) */
   "iiii\0"
   "glVertexAttribI3uiEXT\0"
   "glVertexAttribI3ui\0"
   "\0"
   /* _mesa_function_pool[57048]: VertexAttribI4uiEXT (will be remapped) */
   "iiiii\0"
   "glVertexAttribI4uiEXT\0"
   "glVertexAttribI4ui\0"
   "\0"
   /* _mesa_function_pool[57096]: VertexAttribI1iv (will be remapped) */
   "ip\0"
   "glVertexAttribI1ivEXT\0"
   "glVertexAttribI1iv\0"
   "\0"
   /* _mesa_function_pool[57141]: VertexAttribI2ivEXT (will be remapped) */
   "ip\0"
   "glVertexAttribI2ivEXT\0"
   "glVertexAttribI2iv\0"
   "\0"
   /* _mesa_function_pool[57186]: VertexAttribI3ivEXT (will be remapped) */
   "ip\0"
   "glVertexAttribI3ivEXT\0"
   "glVertexAttribI3iv\0"
   "\0"
   /* _mesa_function_pool[57231]: VertexAttribI4ivEXT (will be remapped) */
   "ip\0"
   "glVertexAttribI4ivEXT\0"
   "glVertexAttribI4iv\0"
   "\0"
   /* _mesa_function_pool[57276]: VertexAttribI1uiv (will be remapped) */
   "ip\0"
   "glVertexAttribI1uivEXT\0"
   "glVertexAttribI1uiv\0"
   "\0"
   /* _mesa_function_pool[57323]: VertexAttribI2uivEXT (will be remapped) */
   "ip\0"
   "glVertexAttribI2uivEXT\0"
   "glVertexAttribI2uiv\0"
   "\0"
   /* _mesa_function_pool[57370]: VertexAttribI3uivEXT (will be remapped) */
   "ip\0"
   "glVertexAttribI3uivEXT\0"
   "glVertexAttribI3uiv\0"
   "\0"
   /* _mesa_function_pool[57417]: VertexAttribI4uivEXT (will be remapped) */
   "ip\0"
   "glVertexAttribI4uivEXT\0"
   "glVertexAttribI4uiv\0"
   "\0"
   /* _mesa_function_pool[57464]: VertexAttribI4bv (will be remapped) */
   "ip\0"
   "glVertexAttribI4bvEXT\0"
   "glVertexAttribI4bv\0"
   "\0"
   /* _mesa_function_pool[57509]: VertexAttribI4sv (will be remapped) */
   "ip\0"
   "glVertexAttribI4svEXT\0"
   "glVertexAttribI4sv\0"
   "\0"
   /* _mesa_function_pool[57554]: VertexAttribI4ubv (will be remapped) */
   "ip\0"
   "glVertexAttribI4ubvEXT\0"
   "glVertexAttribI4ubv\0"
   "\0"
   /* _mesa_function_pool[57601]: VertexAttribI4usv (will be remapped) */
   "ip\0"
   "glVertexAttribI4usvEXT\0"
   "glVertexAttribI4usv\0"
   "\0"
   /* _mesa_function_pool[57648]: VertexAttribIPointer (will be remapped) */
   "iiiip\0"
   "glVertexAttribIPointerEXT\0"
   "glVertexAttribIPointer\0"
   "\0"
   /* _mesa_function_pool[57704]: GetVertexAttribIiv (will be remapped) */
   "iip\0"
   "glGetVertexAttribIivEXT\0"
   "glGetVertexAttribIiv\0"
   "\0"
   /* _mesa_function_pool[57754]: GetVertexAttribIuiv (will be remapped) */
   "iip\0"
   "glGetVertexAttribIuivEXT\0"
   "glGetVertexAttribIuiv\0"
   "\0"
   /* _mesa_function_pool[57806]: Uniform1ui (will be remapped) */
   "ii\0"
   "glUniform1uiEXT\0"
   "glUniform1ui\0"
   "\0"
   /* _mesa_function_pool[57839]: Uniform2ui (will be remapped) */
   "iii\0"
   "glUniform2uiEXT\0"
   "glUniform2ui\0"
   "\0"
   /* _mesa_function_pool[57873]: Uniform3ui (will be remapped) */
   "iiii\0"
   "glUniform3uiEXT\0"
   "glUniform3ui\0"
   "\0"
   /* _mesa_function_pool[57908]: Uniform4ui (will be remapped) */
   "iiiii\0"
   "glUniform4uiEXT\0"
   "glUniform4ui\0"
   "\0"
   /* _mesa_function_pool[57944]: Uniform1uiv (will be remapped) */
   "iip\0"
   "glUniform1uivEXT\0"
   "glUniform1uiv\0"
   "\0"
   /* _mesa_function_pool[57980]: Uniform2uiv (will be remapped) */
   "iip\0"
   "glUniform2uivEXT\0"
   "glUniform2uiv\0"
   "\0"
   /* _mesa_function_pool[58016]: Uniform3uiv (will be remapped) */
   "iip\0"
   "glUniform3uivEXT\0"
   "glUniform3uiv\0"
   "\0"
   /* _mesa_function_pool[58052]: Uniform4uiv (will be remapped) */
   "iip\0"
   "glUniform4uivEXT\0"
   "glUniform4uiv\0"
   "\0"
   /* _mesa_function_pool[58088]: GetUniformuiv (will be remapped) */
   "iip\0"
   "glGetUniformuivEXT\0"
   "glGetUniformuiv\0"
   "\0"
   /* _mesa_function_pool[58128]: BindFragDataLocation (will be remapped) */
   "iip\0"
   "glBindFragDataLocationEXT\0"
   "glBindFragDataLocation\0"
   "\0"
   /* _mesa_function_pool[58182]: GetFragDataLocation (will be remapped) */
   "ip\0"
   "glGetFragDataLocationEXT\0"
   "glGetFragDataLocation\0"
   "\0"
   /* _mesa_function_pool[58233]: ClearBufferiv (will be remapped) */
   "iip\0"
   "glClearBufferiv\0"
   "\0"
   /* _mesa_function_pool[58254]: ClearBufferuiv (will be remapped) */
   "iip\0"
   "glClearBufferuiv\0"
   "\0"
   /* _mesa_function_pool[58276]: ClearBufferfv (will be remapped) */
   "iip\0"
   "glClearBufferfv\0"
   "\0"
   /* _mesa_function_pool[58297]: ClearBufferfi (will be remapped) */
   "iifi\0"
   "glClearBufferfi\0"
   "\0"
   /* _mesa_function_pool[58319]: GetStringi (will be remapped) */
   "ii\0"
   "glGetStringi\0"
   "\0"
   /* _mesa_function_pool[58336]: BeginTransformFeedback (will be remapped) */
   "i\0"
   "glBeginTransformFeedback\0"
   "glBeginTransformFeedbackEXT\0"
   "\0"
   /* _mesa_function_pool[58392]: EndTransformFeedback (will be remapped) */
   "\0"
   "glEndTransformFeedback\0"
   "glEndTransformFeedbackEXT\0"
   "\0"
   /* _mesa_function_pool[58443]: BindBufferRange (will be remapped) */
   "iiiii\0"
   "glBindBufferRange\0"
   "glBindBufferRangeEXT\0"
   "\0"
   /* _mesa_function_pool[58489]: BindBufferBase (will be remapped) */
   "iii\0"
   "glBindBufferBase\0"
   "glBindBufferBaseEXT\0"
   "\0"
   /* _mesa_function_pool[58531]: TransformFeedbackVaryings (will be remapped) */
   "iipi\0"
   "glTransformFeedbackVaryings\0"
   "glTransformFeedbackVaryingsEXT\0"
   "\0"
   /* _mesa_function_pool[58596]: GetTransformFeedbackVarying (will be remapped) */
   "iiipppp\0"
   "glGetTransformFeedbackVarying\0"
   "glGetTransformFeedbackVaryingEXT\0"
   "\0"
   /* _mesa_function_pool[58668]: BeginConditionalRender (will be remapped) */
   "ii\0"
   "glBeginConditionalRender\0"
   "glBeginConditionalRenderNV\0"
   "\0"
   /* _mesa_function_pool[58724]: EndConditionalRender (will be remapped) */
   "\0"
   "glEndConditionalRender\0"
   "glEndConditionalRenderNV\0"
   "\0"
   /* _mesa_function_pool[58774]: PrimitiveRestartIndex (will be remapped) */
   "i\0"
   "glPrimitiveRestartIndex\0"
   "glPrimitiveRestartIndexNV\0"
   "\0"
   /* _mesa_function_pool[58827]: GetInteger64i_v (will be remapped) */
   "iip\0"
   "glGetInteger64i_v\0"
   "\0"
   /* _mesa_function_pool[58850]: GetBufferParameteri64v (will be remapped) */
   "iip\0"
   "glGetBufferParameteri64v\0"
   "\0"
   /* _mesa_function_pool[58880]: FramebufferTexture (will be remapped) */
   "iiii\0"
   "glFramebufferTexture\0"
   "glFramebufferTextureEXT\0"
   "glFramebufferTextureOES\0"
   "\0"
   /* _mesa_function_pool[58955]: PrimitiveRestartNV (will be remapped) */
   "\0"
   "glPrimitiveRestartNV\0"
   "\0"
   /* _mesa_function_pool[58978]: BindBufferOffsetEXT (will be remapped) */
   "iiii\0"
   "glBindBufferOffsetEXT\0"
   "\0"
   /* _mesa_function_pool[59006]: BindTransformFeedback (will be remapped) */
   "ii\0"
   "glBindTransformFeedback\0"
   "\0"
   /* _mesa_function_pool[59034]: DeleteTransformFeedbacks (will be remapped) */
   "ip\0"
   "glDeleteTransformFeedbacks\0"
   "\0"
   /* _mesa_function_pool[59065]: GenTransformFeedbacks (will be remapped) */
   "ip\0"
   "glGenTransformFeedbacks\0"
   "\0"
   /* _mesa_function_pool[59093]: IsTransformFeedback (will be remapped) */
   "i\0"
   "glIsTransformFeedback\0"
   "\0"
   /* _mesa_function_pool[59118]: PauseTransformFeedback (will be remapped) */
   "\0"
   "glPauseTransformFeedback\0"
   "\0"
   /* _mesa_function_pool[59145]: ResumeTransformFeedback (will be remapped) */
   "\0"
   "glResumeTransformFeedback\0"
   "\0"
   /* _mesa_function_pool[59173]: DrawTransformFeedback (will be remapped) */
   "ii\0"
   "glDrawTransformFeedback\0"
   "\0"
   /* _mesa_function_pool[59201]: VDPAUInitNV (will be remapped) */
   "pp\0"
   "glVDPAUInitNV\0"
   "\0"
   /* _mesa_function_pool[59219]: VDPAUFiniNV (will be remapped) */
   "\0"
   "glVDPAUFiniNV\0"
   "\0"
   /* _mesa_function_pool[59235]: VDPAURegisterVideoSurfaceNV (will be remapped) */
   "piip\0"
   "glVDPAURegisterVideoSurfaceNV\0"
   "\0"
   /* _mesa_function_pool[59271]: VDPAURegisterOutputSurfaceNV (will be remapped) */
   "piip\0"
   "glVDPAURegisterOutputSurfaceNV\0"
   "\0"
   /* _mesa_function_pool[59308]: VDPAUIsSurfaceNV (will be remapped) */
   "i\0"
   "glVDPAUIsSurfaceNV\0"
   "\0"
   /* _mesa_function_pool[59330]: VDPAUUnregisterSurfaceNV (will be remapped) */
   "i\0"
   "glVDPAUUnregisterSurfaceNV\0"
   "\0"
   /* _mesa_function_pool[59360]: VDPAUGetSurfaceivNV (will be remapped) */
   "iiipp\0"
   "glVDPAUGetSurfaceivNV\0"
   "\0"
   /* _mesa_function_pool[59389]: VDPAUSurfaceAccessNV (will be remapped) */
   "ii\0"
   "glVDPAUSurfaceAccessNV\0"
   "\0"
   /* _mesa_function_pool[59416]: VDPAUMapSurfacesNV (will be remapped) */
   "ip\0"
   "glVDPAUMapSurfacesNV\0"
   "\0"
   /* _mesa_function_pool[59441]: VDPAUUnmapSurfacesNV (will be remapped) */
   "ip\0"
   "glVDPAUUnmapSurfacesNV\0"
   "\0"
   /* _mesa_function_pool[59468]: GetUnsignedBytevEXT (will be remapped) */
   "ip\0"
   "glGetUnsignedBytevEXT\0"
   "\0"
   /* _mesa_function_pool[59494]: GetUnsignedBytei_vEXT (will be remapped) */
   "iip\0"
   "glGetUnsignedBytei_vEXT\0"
   "\0"
   /* _mesa_function_pool[59523]: DeleteMemoryObjectsEXT (will be remapped) */
   "ip\0"
   "glDeleteMemoryObjectsEXT\0"
   "\0"
   /* _mesa_function_pool[59552]: IsMemoryObjectEXT (will be remapped) */
   "i\0"
   "glIsMemoryObjectEXT\0"
   "\0"
   /* _mesa_function_pool[59575]: CreateMemoryObjectsEXT (will be remapped) */
   "ip\0"
   "glCreateMemoryObjectsEXT\0"
   "\0"
   /* _mesa_function_pool[59604]: MemoryObjectParameterivEXT (will be remapped) */
   "iip\0"
   "glMemoryObjectParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[59638]: GetMemoryObjectParameterivEXT (will be remapped) */
   "iip\0"
   "glGetMemoryObjectParameterivEXT\0"
   "\0"
   /* _mesa_function_pool[59675]: TexStorageMem2DEXT (will be remapped) */
   "iiiiiii\0"
   "glTexStorageMem2DEXT\0"
   "\0"
   /* _mesa_function_pool[59705]: TexStorageMem2DMultisampleEXT (will be remapped) */
   "iiiiiiii\0"
   "glTexStorageMem2DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[59747]: TexStorageMem3DEXT (will be remapped) */
   "iiiiiiii\0"
   "glTexStorageMem3DEXT\0"
   "\0"
   /* _mesa_function_pool[59778]: TexStorageMem3DMultisampleEXT (will be remapped) */
   "iiiiiiiii\0"
   "glTexStorageMem3DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[59821]: BufferStorageMemEXT (will be remapped) */
   "iiii\0"
   "glBufferStorageMemEXT\0"
   "\0"
   /* _mesa_function_pool[59849]: TextureStorageMem2DEXT (will be remapped) */
   "iiiiiii\0"
   "glTextureStorageMem2DEXT\0"
   "\0"
   /* _mesa_function_pool[59883]: TextureStorageMem2DMultisampleEXT (will be remapped) */
   "iiiiiiii\0"
   "glTextureStorageMem2DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[59929]: TextureStorageMem3DEXT (will be remapped) */
   "iiiiiiii\0"
   "glTextureStorageMem3DEXT\0"
   "\0"
   /* _mesa_function_pool[59964]: TextureStorageMem3DMultisampleEXT (will be remapped) */
   "iiiiiiiii\0"
   "glTextureStorageMem3DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[60011]: NamedBufferStorageMemEXT (will be remapped) */
   "iiii\0"
   "glNamedBufferStorageMemEXT\0"
   "\0"
   /* _mesa_function_pool[60044]: TexStorageMem1DEXT (will be remapped) */
   "iiiiii\0"
   "glTexStorageMem1DEXT\0"
   "\0"
   /* _mesa_function_pool[60073]: TextureStorageMem1DEXT (will be remapped) */
   "iiiiii\0"
   "glTextureStorageMem1DEXT\0"
   "\0"
   /* _mesa_function_pool[60106]: GenSemaphoresEXT (will be remapped) */
   "ip\0"
   "glGenSemaphoresEXT\0"
   "\0"
   /* _mesa_function_pool[60129]: DeleteSemaphoresEXT (will be remapped) */
   "ip\0"
   "glDeleteSemaphoresEXT\0"
   "\0"
   /* _mesa_function_pool[60155]: IsSemaphoreEXT (will be remapped) */
   "i\0"
   "glIsSemaphoreEXT\0"
   "\0"
   /* _mesa_function_pool[60175]: SemaphoreParameterui64vEXT (will be remapped) */
   "iip\0"
   "glSemaphoreParameterui64vEXT\0"
   "\0"
   /* _mesa_function_pool[60209]: GetSemaphoreParameterui64vEXT (will be remapped) */
   "iip\0"
   "glGetSemaphoreParameterui64vEXT\0"
   "\0"
   /* _mesa_function_pool[60246]: WaitSemaphoreEXT (will be remapped) */
   "iipipp\0"
   "glWaitSemaphoreEXT\0"
   "\0"
   /* _mesa_function_pool[60273]: SignalSemaphoreEXT (will be remapped) */
   "iipipp\0"
   "glSignalSemaphoreEXT\0"
   "\0"
   /* _mesa_function_pool[60302]: ImportMemoryFdEXT (will be remapped) */
   "iiii\0"
   "glImportMemoryFdEXT\0"
   "\0"
   /* _mesa_function_pool[60328]: ImportSemaphoreFdEXT (will be remapped) */
   "iii\0"
   "glImportSemaphoreFdEXT\0"
   "\0"
   /* _mesa_function_pool[60356]: ImportMemoryWin32HandleEXT (will be remapped) */
   "iiip\0"
   "glImportMemoryWin32HandleEXT\0"
   "\0"
   /* _mesa_function_pool[60391]: ImportMemoryWin32NameEXT (will be remapped) */
   "iiip\0"
   "glImportMemoryWin32NameEXT\0"
   "\0"
   /* _mesa_function_pool[60424]: ImportSemaphoreWin32HandleEXT (will be remapped) */
   "iip\0"
   "glImportSemaphoreWin32HandleEXT\0"
   "\0"
   /* _mesa_function_pool[60461]: ImportSemaphoreWin32NameEXT (will be remapped) */
   "iip\0"
   "glImportSemaphoreWin32NameEXT\0"
   "\0"
   /* _mesa_function_pool[60496]: ViewportSwizzleNV (will be remapped) */
   "iiiii\0"
   "glViewportSwizzleNV\0"
   "\0"
   /* _mesa_function_pool[60523]: Vertex2hNV (will be remapped) */
   "dd\0"
   "glVertex2hNV\0"
   "\0"
   /* _mesa_function_pool[60540]: Vertex2hvNV (will be remapped) */
   "p\0"
   "glVertex2hvNV\0"
   "\0"
   /* _mesa_function_pool[60557]: Vertex3hNV (will be remapped) */
   "ddd\0"
   "glVertex3hNV\0"
   "\0"
   /* _mesa_function_pool[60575]: Vertex3hvNV (will be remapped) */
   "p\0"
   "glVertex3hvNV\0"
   "\0"
   /* _mesa_function_pool[60592]: Vertex4hNV (will be remapped) */
   "dddd\0"
   "glVertex4hNV\0"
   "\0"
   /* _mesa_function_pool[60611]: Vertex4hvNV (will be remapped) */
   "p\0"
   "glVertex4hvNV\0"
   "\0"
   /* _mesa_function_pool[60628]: Normal3hNV (will be remapped) */
   "ddd\0"
   "glNormal3hNV\0"
   "\0"
   /* _mesa_function_pool[60646]: Normal3hvNV (will be remapped) */
   "p\0"
   "glNormal3hvNV\0"
   "\0"
   /* _mesa_function_pool[60663]: Color3hNV (will be remapped) */
   "ddd\0"
   "glColor3hNV\0"
   "\0"
   /* _mesa_function_pool[60680]: Color3hvNV (will be remapped) */
   "p\0"
   "glColor3hvNV\0"
   "\0"
   /* _mesa_function_pool[60696]: Color4hNV (will be remapped) */
   "dddd\0"
   "glColor4hNV\0"
   "\0"
   /* _mesa_function_pool[60714]: Color4hvNV (will be remapped) */
   "p\0"
   "glColor4hvNV\0"
   "\0"
   /* _mesa_function_pool[60730]: TexCoord1hNV (will be remapped) */
   "d\0"
   "glTexCoord1hNV\0"
   "\0"
   /* _mesa_function_pool[60748]: TexCoord1hvNV (will be remapped) */
   "p\0"
   "glTexCoord1hvNV\0"
   "\0"
   /* _mesa_function_pool[60767]: TexCoord2hNV (will be remapped) */
   "dd\0"
   "glTexCoord2hNV\0"
   "\0"
   /* _mesa_function_pool[60786]: TexCoord2hvNV (will be remapped) */
   "p\0"
   "glTexCoord2hvNV\0"
   "\0"
   /* _mesa_function_pool[60805]: TexCoord3hNV (will be remapped) */
   "ddd\0"
   "glTexCoord3hNV\0"
   "\0"
   /* _mesa_function_pool[60825]: TexCoord3hvNV (will be remapped) */
   "p\0"
   "glTexCoord3hvNV\0"
   "\0"
   /* _mesa_function_pool[60844]: TexCoord4hNV (will be remapped) */
   "dddd\0"
   "glTexCoord4hNV\0"
   "\0"
   /* _mesa_function_pool[60865]: TexCoord4hvNV (will be remapped) */
   "p\0"
   "glTexCoord4hvNV\0"
   "\0"
   /* _mesa_function_pool[60884]: MultiTexCoord1hNV (will be remapped) */
   "id\0"
   "glMultiTexCoord1hNV\0"
   "\0"
   /* _mesa_function_pool[60908]: MultiTexCoord1hvNV (will be remapped) */
   "ip\0"
   "glMultiTexCoord1hvNV\0"
   "\0"
   /* _mesa_function_pool[60933]: MultiTexCoord2hNV (will be remapped) */
   "idd\0"
   "glMultiTexCoord2hNV\0"
   "\0"
   /* _mesa_function_pool[60958]: MultiTexCoord2hvNV (will be remapped) */
   "ip\0"
   "glMultiTexCoord2hvNV\0"
   "\0"
   /* _mesa_function_pool[60983]: MultiTexCoord3hNV (will be remapped) */
   "iddd\0"
   "glMultiTexCoord3hNV\0"
   "\0"
   /* _mesa_function_pool[61009]: MultiTexCoord3hvNV (will be remapped) */
   "ip\0"
   "glMultiTexCoord3hvNV\0"
   "\0"
   /* _mesa_function_pool[61034]: MultiTexCoord4hNV (will be remapped) */
   "idddd\0"
   "glMultiTexCoord4hNV\0"
   "\0"
   /* _mesa_function_pool[61061]: MultiTexCoord4hvNV (will be remapped) */
   "ip\0"
   "glMultiTexCoord4hvNV\0"
   "\0"
   /* _mesa_function_pool[61086]: VertexAttrib1hNV (will be remapped) */
   "id\0"
   "glVertexAttrib1hNV\0"
   "\0"
   /* _mesa_function_pool[61109]: VertexAttrib1hvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib1hvNV\0"
   "\0"
   /* _mesa_function_pool[61133]: VertexAttrib2hNV (will be remapped) */
   "idd\0"
   "glVertexAttrib2hNV\0"
   "\0"
   /* _mesa_function_pool[61157]: VertexAttrib2hvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib2hvNV\0"
   "\0"
   /* _mesa_function_pool[61181]: VertexAttrib3hNV (will be remapped) */
   "iddd\0"
   "glVertexAttrib3hNV\0"
   "\0"
   /* _mesa_function_pool[61206]: VertexAttrib3hvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib3hvNV\0"
   "\0"
   /* _mesa_function_pool[61230]: VertexAttrib4hNV (will be remapped) */
   "idddd\0"
   "glVertexAttrib4hNV\0"
   "\0"
   /* _mesa_function_pool[61256]: VertexAttrib4hvNV (will be remapped) */
   "ip\0"
   "glVertexAttrib4hvNV\0"
   "\0"
   /* _mesa_function_pool[61280]: VertexAttribs1hvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs1hvNV\0"
   "\0"
   /* _mesa_function_pool[61306]: VertexAttribs2hvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs2hvNV\0"
   "\0"
   /* _mesa_function_pool[61332]: VertexAttribs3hvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs3hvNV\0"
   "\0"
   /* _mesa_function_pool[61358]: VertexAttribs4hvNV (will be remapped) */
   "iip\0"
   "glVertexAttribs4hvNV\0"
   "\0"
   /* _mesa_function_pool[61384]: FogCoordhNV (will be remapped) */
   "d\0"
   "glFogCoordhNV\0"
   "\0"
   /* _mesa_function_pool[61401]: FogCoordhvNV (will be remapped) */
   "p\0"
   "glFogCoordhvNV\0"
   "\0"
   /* _mesa_function_pool[61419]: SecondaryColor3hNV (will be remapped) */
   "ddd\0"
   "glSecondaryColor3hNV\0"
   "\0"
   /* _mesa_function_pool[61445]: SecondaryColor3hvNV (will be remapped) */
   "p\0"
   "glSecondaryColor3hvNV\0"
   "\0"
   /* _mesa_function_pool[61470]: MemoryBarrierByRegion (will be remapped) */
   "i\0"
   "glMemoryBarrierByRegion\0"
   "\0"
   /* _mesa_function_pool[61497]: AlphaFuncx (will be remapped) */
   "ii\0"
   "glAlphaFuncxOES\0"
   "glAlphaFuncx\0"
   "\0"
   /* _mesa_function_pool[61530]: ClearColorx (will be remapped) */
   "iiii\0"
   "glClearColorxOES\0"
   "glClearColorx\0"
   "\0"
   /* _mesa_function_pool[61567]: ClearDepthx (will be remapped) */
   "i\0"
   "glClearDepthxOES\0"
   "glClearDepthx\0"
   "\0"
   /* _mesa_function_pool[61601]: Color4x (will be remapped) */
   "iiii\0"
   "glColor4xOES\0"
   "glColor4x\0"
   "\0"
   /* _mesa_function_pool[61630]: DepthRangex (will be remapped) */
   "ii\0"
   "glDepthRangexOES\0"
   "glDepthRangex\0"
   "\0"
   /* _mesa_function_pool[61665]: Fogx (will be remapped) */
   "ii\0"
   "glFogxOES\0"
   "glFogx\0"
   "\0"
   /* _mesa_function_pool[61686]: Fogxv (will be remapped) */
   "ip\0"
   "glFogxvOES\0"
   "glFogxv\0"
   "\0"
   /* _mesa_function_pool[61709]: Frustumx (will be remapped) */
   "iiiiii\0"
   "glFrustumxOES\0"
   "glFrustumx\0"
   "\0"
   /* _mesa_function_pool[61742]: LightModelx (will be remapped) */
   "ii\0"
   "glLightModelxOES\0"
   "glLightModelx\0"
   "\0"
   /* _mesa_function_pool[61777]: LightModelxv (will be remapped) */
   "ip\0"
   "glLightModelxvOES\0"
   "glLightModelxv\0"
   "\0"
   /* _mesa_function_pool[61814]: Lightx (will be remapped) */
   "iii\0"
   "glLightxOES\0"
   "glLightx\0"
   "\0"
   /* _mesa_function_pool[61840]: Lightxv (will be remapped) */
   "iip\0"
   "glLightxvOES\0"
   "glLightxv\0"
   "\0"
   /* _mesa_function_pool[61868]: LineWidthx (will be remapped) */
   "i\0"
   "glLineWidthxOES\0"
   "glLineWidthx\0"
   "\0"
   /* _mesa_function_pool[61900]: LoadMatrixx (will be remapped) */
   "p\0"
   "glLoadMatrixxOES\0"
   "glLoadMatrixx\0"
   "\0"
   /* _mesa_function_pool[61934]: Materialx (will be remapped) */
   "iii\0"
   "glMaterialxOES\0"
   "glMaterialx\0"
   "\0"
   /* _mesa_function_pool[61966]: Materialxv (will be remapped) */
   "iip\0"
   "glMaterialxvOES\0"
   "glMaterialxv\0"
   "\0"
   /* _mesa_function_pool[62000]: MultMatrixx (will be remapped) */
   "p\0"
   "glMultMatrixxOES\0"
   "glMultMatrixx\0"
   "\0"
   /* _mesa_function_pool[62034]: MultiTexCoord4x (will be remapped) */
   "iiiii\0"
   "glMultiTexCoord4xOES\0"
   "glMultiTexCoord4x\0"
   "\0"
   /* _mesa_function_pool[62080]: Normal3x (will be remapped) */
   "iii\0"
   "glNormal3xOES\0"
   "glNormal3x\0"
   "\0"
   /* _mesa_function_pool[62110]: Orthox (will be remapped) */
   "iiiiii\0"
   "glOrthoxOES\0"
   "glOrthox\0"
   "\0"
   /* _mesa_function_pool[62139]: PointSizex (will be remapped) */
   "i\0"
   "glPointSizexOES\0"
   "glPointSizex\0"
   "\0"
   /* _mesa_function_pool[62171]: PolygonOffsetx (will be remapped) */
   "ii\0"
   "glPolygonOffsetxOES\0"
   "glPolygonOffsetx\0"
   "\0"
   /* _mesa_function_pool[62212]: Rotatex (will be remapped) */
   "iiii\0"
   "glRotatexOES\0"
   "glRotatex\0"
   "\0"
   /* _mesa_function_pool[62241]: SampleCoveragex (will be remapped) */
   "ii\0"
   "glSampleCoveragexOES\0"
   "glSampleCoveragex\0"
   "\0"
   /* _mesa_function_pool[62284]: Scalex (will be remapped) */
   "iii\0"
   "glScalexOES\0"
   "glScalex\0"
   "\0"
   /* _mesa_function_pool[62310]: TexEnvx (will be remapped) */
   "iii\0"
   "glTexEnvxOES\0"
   "glTexEnvx\0"
   "\0"
   /* _mesa_function_pool[62338]: TexEnvxv (will be remapped) */
   "iip\0"
   "glTexEnvxvOES\0"
   "glTexEnvxv\0"
   "\0"
   /* _mesa_function_pool[62368]: TexParameterx (will be remapped) */
   "iii\0"
   "glTexParameterxOES\0"
   "glTexParameterx\0"
   "\0"
   /* _mesa_function_pool[62408]: Translatex (will be remapped) */
   "iii\0"
   "glTranslatexOES\0"
   "glTranslatex\0"
   "\0"
   /* _mesa_function_pool[62442]: ClipPlanex (will be remapped) */
   "ip\0"
   "glClipPlanexOES\0"
   "glClipPlanex\0"
   "\0"
   /* _mesa_function_pool[62475]: GetClipPlanex (will be remapped) */
   "ip\0"
   "glGetClipPlanexOES\0"
   "glGetClipPlanex\0"
   "\0"
   /* _mesa_function_pool[62514]: GetFixedv (will be remapped) */
   "ip\0"
   "glGetFixedvOES\0"
   "glGetFixedv\0"
   "\0"
   /* _mesa_function_pool[62545]: GetLightxv (will be remapped) */
   "iip\0"
   "glGetLightxvOES\0"
   "glGetLightxv\0"
   "\0"
   /* _mesa_function_pool[62579]: GetMaterialxv (will be remapped) */
   "iip\0"
   "glGetMaterialxvOES\0"
   "glGetMaterialxv\0"
   "\0"
   /* _mesa_function_pool[62619]: GetTexEnvxv (will be remapped) */
   "iip\0"
   "glGetTexEnvxvOES\0"
   "glGetTexEnvxv\0"
   "\0"
   /* _mesa_function_pool[62655]: GetTexParameterxv (will be remapped) */
   "iip\0"
   "glGetTexParameterxvOES\0"
   "glGetTexParameterxv\0"
   "\0"
   /* _mesa_function_pool[62703]: PointParameterx (will be remapped) */
   "ii\0"
   "glPointParameterxOES\0"
   "glPointParameterx\0"
   "\0"
   /* _mesa_function_pool[62746]: PointParameterxv (will be remapped) */
   "ip\0"
   "glPointParameterxvOES\0"
   "glPointParameterxv\0"
   "\0"
   /* _mesa_function_pool[62791]: TexParameterxv (will be remapped) */
   "iip\0"
   "glTexParameterxvOES\0"
   "glTexParameterxv\0"
   "\0"
   /* _mesa_function_pool[62833]: GetTexGenxvOES (will be remapped) */
   "iip\0"
   "glGetTexGenxvOES\0"
   "\0"
   /* _mesa_function_pool[62855]: TexGenxOES (will be remapped) */
   "iii\0"
   "glTexGenxOES\0"
   "\0"
   /* _mesa_function_pool[62873]: TexGenxvOES (will be remapped) */
   "iip\0"
   "glTexGenxvOES\0"
   "\0"
   /* _mesa_function_pool[62892]: ClipPlanef (will be remapped) */
   "ip\0"
   "glClipPlanefOES\0"
   "glClipPlanef\0"
   "\0"
   /* _mesa_function_pool[62925]: GetClipPlanef (will be remapped) */
   "ip\0"
   "glGetClipPlanefOES\0"
   "glGetClipPlanef\0"
   "\0"
   /* _mesa_function_pool[62964]: Frustumf (will be remapped) */
   "ffffff\0"
   "glFrustumfOES\0"
   "glFrustumf\0"
   "\0"
   /* _mesa_function_pool[62997]: Orthof (will be remapped) */
   "ffffff\0"
   "glOrthofOES\0"
   "glOrthof\0"
   "\0"
   /* _mesa_function_pool[63026]: DrawTexiOES (will be remapped) */
   "iiiii\0"
   "glDrawTexiOES\0"
   "\0"
   /* _mesa_function_pool[63047]: DrawTexivOES (will be remapped) */
   "p\0"
   "glDrawTexivOES\0"
   "\0"
   /* _mesa_function_pool[63065]: DrawTexfOES (will be remapped) */
   "fffff\0"
   "glDrawTexfOES\0"
   "\0"
   /* _mesa_function_pool[63086]: DrawTexfvOES (will be remapped) */
   "p\0"
   "glDrawTexfvOES\0"
   "\0"
   /* _mesa_function_pool[63104]: DrawTexsOES (will be remapped) */
   "iiiii\0"
   "glDrawTexsOES\0"
   "\0"
   /* _mesa_function_pool[63125]: DrawTexsvOES (will be remapped) */
   "p\0"
   "glDrawTexsvOES\0"
   "\0"
   /* _mesa_function_pool[63143]: DrawTexxOES (will be remapped) */
   "iiiii\0"
   "glDrawTexxOES\0"
   "\0"
   /* _mesa_function_pool[63164]: DrawTexxvOES (will be remapped) */
   "p\0"
   "glDrawTexxvOES\0"
   "\0"
   /* _mesa_function_pool[63182]: LoadPaletteFromModelViewMatrixOES (dynamic) */
   "\0"
   "glLoadPaletteFromModelViewMatrixOES\0"
   "\0"
   /* _mesa_function_pool[63220]: PointSizePointerOES (will be remapped) */
   "iip\0"
   "glPointSizePointerOES\0"
   "\0"
   /* _mesa_function_pool[63247]: QueryMatrixxOES (will be remapped) */
   "pp\0"
   "glQueryMatrixxOES\0"
   "\0"
   /* _mesa_function_pool[63269]: DiscardFramebufferEXT (will be remapped) */
   "iip\0"
   "glDiscardFramebufferEXT\0"
   "\0"
   /* _mesa_function_pool[63298]: FramebufferTexture2DMultisampleEXT (will be remapped) */
   "iiiiii\0"
   "glFramebufferTexture2DMultisampleEXT\0"
   "\0"
   /* _mesa_function_pool[63343]: DepthRangeArrayfvOES (will be remapped) */
   "iip\0"
   "glDepthRangeArrayfvOES\0"
   "\0"
   /* _mesa_function_pool[63371]: DepthRangeIndexedfOES (will be remapped) */
   "iff\0"
   "glDepthRangeIndexedfOES\0"
   "\0"
   /* _mesa_function_pool[63400]: FramebufferParameteriMESA (will be remapped) */
   "iii\0"
   "glFramebufferParameteriMESA\0"
   "\0"
   /* _mesa_function_pool[63433]: GetFramebufferParameterivMESA (will be remapped) */
   "iip\0"
   "glGetFramebufferParameterivMESA\0"
   "\0"
   ;

/* these functions need to be remapped */
static const struct gl_function_pool_remap MESA_remap_table_functions[] = {
   {  9302, CompressedTexImage1D_remap_index },
   {  9243, CompressedTexImage2D_remap_index },
   {  9157, CompressedTexImage3D_remap_index },
   {  9523, CompressedTexSubImage1D_remap_index },
   {  9457, CompressedTexSubImage2D_remap_index },
   {  9360, CompressedTexSubImage3D_remap_index },
   {  9587, GetCompressedTexImage_remap_index },
   {  8960, LoadTransposeMatrixd_remap_index },
   {  8908, LoadTransposeMatrixf_remap_index },
   {  9064, MultTransposeMatrixd_remap_index },
   {  9012, MultTransposeMatrixf_remap_index },
   {  9116, SampleCoverage_remap_index },
   {  9643, BlendFuncSeparate_remap_index },
   {  9863, FogCoordPointer_remap_index },
   {  9801, FogCoordd_remap_index },
   {  9831, FogCoorddv_remap_index },
   {  9907, MultiDrawArrays_remap_index },
   { 10002, PointParameterf_remap_index },
   { 10088, PointParameterfv_remap_index },
   { 10178, PointParameteri_remap_index },
   { 10220, PointParameteriv_remap_index },
   { 10264, SecondaryColor3b_remap_index },
   { 10310, SecondaryColor3bv_remap_index },
   { 10356, SecondaryColor3d_remap_index },
   { 10402, SecondaryColor3dv_remap_index },
   { 10540, SecondaryColor3i_remap_index },
   { 10586, SecondaryColor3iv_remap_index },
   { 10632, SecondaryColor3s_remap_index },
   { 10678, SecondaryColor3sv_remap_index },
   { 10724, SecondaryColor3ub_remap_index },
   { 10772, SecondaryColor3ubv_remap_index },
   { 10820, SecondaryColor3ui_remap_index },
   { 10868, SecondaryColor3uiv_remap_index },
   { 10916, SecondaryColor3us_remap_index },
   { 10964, SecondaryColor3usv_remap_index },
   { 11012, SecondaryColorPointer_remap_index },
   { 11069, WindowPos2d_remap_index },
   { 11122, WindowPos2dv_remap_index },
   { 11177, WindowPos2f_remap_index },
   { 11230, WindowPos2fv_remap_index },
   { 11285, WindowPos2i_remap_index },
   { 11338, WindowPos2iv_remap_index },
   { 11393, WindowPos2s_remap_index },
   { 11446, WindowPos2sv_remap_index },
   { 11501, WindowPos3d_remap_index },
   { 11555, WindowPos3dv_remap_index },
   { 11610, WindowPos3f_remap_index },
   { 11664, WindowPos3fv_remap_index },
   { 11719, WindowPos3i_remap_index },
   { 11773, WindowPos3iv_remap_index },
   { 11828, WindowPos3s_remap_index },
   { 11882, WindowPos3sv_remap_index },
   { 12561, BeginQuery_remap_index },
   { 11937, BindBuffer_remap_index },
   { 11970, BufferData_remap_index },
   { 12005, BufferSubData_remap_index },
   { 12046, DeleteBuffers_remap_index },
   { 12464, DeleteQueries_remap_index },
   { 12610, EndQuery_remap_index },
   { 12085, GenBuffers_remap_index },
   { 12415, GenQueries_remap_index },
   { 12118, GetBufferParameteriv_remap_index },
   { 12172, GetBufferPointerv_remap_index },
   { 12243, GetBufferSubData_remap_index },
   { 12702, GetQueryObjectiv_remap_index },
   { 12770, GetQueryObjectuiv_remap_index },
   { 12652, GetQueryiv_remap_index },
   { 12290, IsBuffer_remap_index },
   { 12522, IsQuery_remap_index },
   { 12318, MapBuffer_remap_index },
   { 12364, UnmapBuffer_remap_index },
   { 13138, AttachShader_remap_index },
   { 13157, BindAttribLocation_remap_index },
   { 12841, BlendEquationSeparate_remap_index },
   { 13207, CompileShader_remap_index },
   { 13245, CreateProgram_remap_index },
   { 13263, CreateShader_remap_index },
   { 13281, DeleteProgram_remap_index },
   { 13300, DeleteShader_remap_index },
   { 13318, DetachShader_remap_index },
   { 13337, DisableVertexAttribArray_remap_index },
   { 12950, DrawBuffers_remap_index },
   { 13397, EnableVertexAttribArray_remap_index },
   { 13455, GetActiveAttrib_remap_index },
   { 13503, GetActiveUniform_remap_index },
   { 13553, GetAttachedShaders_remap_index },
   { 13580, GetAttribLocation_remap_index },
   { 13647, GetProgramInfoLog_remap_index },
   { 13627, GetProgramiv_remap_index },
   { 13692, GetShaderInfoLog_remap_index },
   { 13717, GetShaderSource_remap_index },
   { 13673, GetShaderiv_remap_index },
   { 13762, GetUniformLocation_remap_index },
   { 13811, GetUniformfv_remap_index },
   { 13849, GetUniformiv_remap_index },
   { 14031, GetVertexAttribPointerv_remap_index },
   { 13887, GetVertexAttribdv_remap_index },
   { 13935, GetVertexAttribfv_remap_index },
   { 13983, GetVertexAttribiv_remap_index },
   { 14119, IsProgram_remap_index },
   { 14134, IsShader_remap_index },
   { 14148, LinkProgram_remap_index },
   { 14182, ShaderSource_remap_index },
   { 13035, StencilFuncSeparate_remap_index },
   { 13112, StencilMaskSeparate_remap_index },
   { 13063, StencilOpSeparate_remap_index },
   { 14259, Uniform1f_remap_index },
   { 14519, Uniform1fv_remap_index },
   { 14389, Uniform1i_remap_index },
   { 14655, Uniform1iv_remap_index },
   { 14290, Uniform2f_remap_index },
   { 14553, Uniform2fv_remap_index },
   { 14420, Uniform2i_remap_index },
   { 14689, Uniform2iv_remap_index },
   { 14322, Uniform3f_remap_index },
   { 14587, Uniform3fv_remap_index },
   { 14452, Uniform3i_remap_index },
   { 14723, Uniform3iv_remap_index },
   { 14355, Uniform4f_remap_index },
   { 14621, Uniform4fv_remap_index },
   { 14485, Uniform4i_remap_index },
   { 14757, Uniform4iv_remap_index },
   { 14791, UniformMatrix2fv_remap_index },
   { 14838, UniformMatrix3fv_remap_index },
   { 14885, UniformMatrix4fv_remap_index },
   { 14221, UseProgram_remap_index },
   { 14932, ValidateProgram_remap_index },
   { 14974, VertexAttrib1d_remap_index },
   { 15015, VertexAttrib1dv_remap_index },
   { 15142, VertexAttrib1s_remap_index },
   { 15183, VertexAttrib1sv_remap_index },
   { 15226, VertexAttrib2d_remap_index },
   { 15268, VertexAttrib2dv_remap_index },
   { 15396, VertexAttrib2s_remap_index },
   { 15438, VertexAttrib2sv_remap_index },
   { 15481, VertexAttrib3d_remap_index },
   { 15524, VertexAttrib3dv_remap_index },
   { 15653, VertexAttrib3s_remap_index },
   { 15696, VertexAttrib3sv_remap_index },
   { 15739, VertexAttrib4Nbv_remap_index },
   { 15784, VertexAttrib4Niv_remap_index },
   { 15829, VertexAttrib4Nsv_remap_index },
   { 15874, VertexAttrib4Nub_remap_index },
   { 15922, VertexAttrib4Nubv_remap_index },
   { 15969, VertexAttrib4Nuiv_remap_index },
   { 16016, VertexAttrib4Nusv_remap_index },
   { 16063, VertexAttrib4bv_remap_index },
   { 16106, VertexAttrib4d_remap_index },
   { 16150, VertexAttrib4dv_remap_index },
   { 16280, VertexAttrib4iv_remap_index },
   { 16323, VertexAttrib4s_remap_index },
   { 16367, VertexAttrib4sv_remap_index },
   { 16410, VertexAttrib4ubv_remap_index },
   { 16455, VertexAttrib4uiv_remap_index },
   { 16500, VertexAttrib4usv_remap_index },
   { 16545, VertexAttribPointer_remap_index },
   { 16600, UniformMatrix2x3fv_remap_index },
   { 16654, UniformMatrix2x4fv_remap_index },
   { 16627, UniformMatrix3x2fv_remap_index },
   { 16708, UniformMatrix3x4fv_remap_index },
   { 16681, UniformMatrix4x2fv_remap_index },
   { 16735, UniformMatrix4x3fv_remap_index },
   { 58668, BeginConditionalRender_remap_index },
   { 58336, BeginTransformFeedback_remap_index },
   { 58489, BindBufferBase_remap_index },
   { 58443, BindBufferRange_remap_index },
   { 58128, BindFragDataLocation_remap_index },
   { 18147, ClampColor_remap_index },
   { 58297, ClearBufferfi_remap_index },
   { 58276, ClearBufferfv_remap_index },
   { 58233, ClearBufferiv_remap_index },
   { 58254, ClearBufferuiv_remap_index },
   { 48608, ColorMaski_remap_index },
   { 48831, Disablei_remap_index },
   { 48772, Enablei_remap_index },
   { 58724, EndConditionalRender_remap_index },
   { 58392, EndTransformFeedback_remap_index },
   { 48682, GetBooleani_v_remap_index },
   { 58182, GetFragDataLocation_remap_index },
   { 48727, GetIntegeri_v_remap_index },
   { 58319, GetStringi_remap_index },
   { 56581, GetTexParameterIiv_remap_index },
   { 56655, GetTexParameterIuiv_remap_index },
   { 58596, GetTransformFeedbackVarying_remap_index },
   { 58088, GetUniformuiv_remap_index },
   { 57704, GetVertexAttribIiv_remap_index },
   { 57754, GetVertexAttribIuiv_remap_index },
   { 48894, IsEnabledi_remap_index },
   { 56448, TexParameterIiv_remap_index },
   { 56513, TexParameterIuiv_remap_index },
   { 58531, TransformFeedbackVaryings_remap_index },
   { 57806, Uniform1ui_remap_index },
   { 57944, Uniform1uiv_remap_index },
   { 57839, Uniform2ui_remap_index },
   { 57980, Uniform2uiv_remap_index },
   { 57873, Uniform3ui_remap_index },
   { 58016, Uniform3uiv_remap_index },
   { 57908, Uniform4ui_remap_index },
   { 58052, Uniform4uiv_remap_index },
   { 57096, VertexAttribI1iv_remap_index },
   { 57276, VertexAttribI1uiv_remap_index },
   { 57464, VertexAttribI4bv_remap_index },
   { 57509, VertexAttribI4sv_remap_index },
   { 57554, VertexAttribI4ubv_remap_index },
   { 57601, VertexAttribI4usv_remap_index },
   { 57648, VertexAttribIPointer_remap_index },
   { 58774, PrimitiveRestartIndex_remap_index },
   { 19992, TexBuffer_remap_index },
   { 58880, FramebufferTexture_remap_index },
   { 58850, GetBufferParameteri64v_remap_index },
   { 58827, GetInteger64i_v_remap_index },
   { 19774, VertexAttribDivisor_remap_index },
   { 21635, MinSampleShading_remap_index },
   { 61470, MemoryBarrierByRegion_remap_index },
   { 17179, BindProgramARB_remap_index },
   { 17216, DeleteProgramsARB_remap_index },
   { 17259, GenProgramsARB_remap_index },
   { 17702, GetProgramEnvParameterdvARB_remap_index },
   { 17737, GetProgramEnvParameterfvARB_remap_index },
   { 17772, GetProgramLocalParameterdvARB_remap_index },
   { 17809, GetProgramLocalParameterfvARB_remap_index },
   { 17869, GetProgramStringARB_remap_index },
   { 17846, GetProgramivARB_remap_index },
   { 17296, IsProgramARB_remap_index },
   { 17328, ProgramEnvParameter4dARB_remap_index },
   { 17386, ProgramEnvParameter4dvARB_remap_index },
   { 17443, ProgramEnvParameter4fARB_remap_index },
   { 17501, ProgramEnvParameter4fvARB_remap_index },
   { 17558, ProgramLocalParameter4dARB_remap_index },
   { 17595, ProgramLocalParameter4dvARB_remap_index },
   { 17630, ProgramLocalParameter4fARB_remap_index },
   { 17667, ProgramLocalParameter4fvARB_remap_index },
   { 17154, ProgramStringARB_remap_index },
   { 15058, VertexAttrib1fARB_remap_index },
   { 15099, VertexAttrib1fvARB_remap_index },
   { 15311, VertexAttrib2fARB_remap_index },
   { 15353, VertexAttrib2fvARB_remap_index },
   { 15567, VertexAttrib3fARB_remap_index },
   { 15610, VertexAttrib3fvARB_remap_index },
   { 16193, VertexAttrib4fARB_remap_index },
   { 16237, VertexAttrib4fvARB_remap_index },
   { 18011, AttachObjectARB_remap_index },
   { 17984, CreateProgramObjectARB_remap_index },
   { 17957, CreateShaderObjectARB_remap_index },
   { 17896, DeleteObjectARB_remap_index },
   { 17935, DetachObjectARB_remap_index },
   { 18117, GetAttachedObjectsARB_remap_index },
   { 17917, GetHandleARB_remap_index },
   { 18095, GetInfoLogARB_remap_index },
   { 18033, GetObjectParameterfvARB_remap_index },
   { 18064, GetObjectParameterivARB_remap_index },
   { 18180, DrawArraysInstanced_remap_index },
   { 18258, DrawElementsInstanced_remap_index },
   { 18900, BindFramebuffer_remap_index },
   { 18403, BindRenderbuffer_remap_index },
   { 19663, BlitFramebuffer_remap_index },
   { 19080, CheckFramebufferStatus_remap_index },
   { 18943, DeleteFramebuffers_remap_index },
   { 18448, DeleteRenderbuffers_remap_index },
   { 19447, FramebufferRenderbuffer_remap_index },
   { 19164, FramebufferTexture1D_remap_index },
   { 19220, FramebufferTexture2D_remap_index },
   { 19302, FramebufferTexture3D_remap_index },
   { 19385, FramebufferTextureLayer_remap_index },
   { 19016, GenFramebuffers_remap_index },
   { 18524, GenRenderbuffers_remap_index },
   { 19714, GenerateMipmap_remap_index },
   { 19537, GetFramebufferAttachmentParameteriv_remap_index },
   { 18745, GetRenderbufferParameteriv_remap_index },
   { 18843, IsFramebuffer_remap_index },
   { 18343, IsRenderbuffer_remap_index },
   { 18591, RenderbufferStorage_remap_index },
   { 18669, RenderbufferStorageMultisample_remap_index },
   { 19934, FlushMappedBufferRange_remap_index },
   { 19891, MapBufferRange_remap_index },
   { 20054, BindVertexArray_remap_index },
   { 20096, DeleteVertexArrays_remap_index },
   { 20145, GenVertexArrays_remap_index },
   { 20188, IsVertexArray_remap_index },
   { 20370, GetActiveUniformBlockName_remap_index },
   { 20338, GetActiveUniformBlockiv_remap_index },
   { 20281, GetActiveUniformName_remap_index },
   { 20252, GetActiveUniformsiv_remap_index },
   { 20311, GetUniformBlockIndex_remap_index },
   { 20226, GetUniformIndices_remap_index },
   { 20405, UniformBlockBinding_remap_index },
   { 20432, CopyBufferSubData_remap_index },
   { 20959, ClientWaitSync_remap_index },
   { 20943, DeleteSync_remap_index },
   { 20915, FenceSync_remap_index },
   { 20997, GetInteger64v_remap_index },
   { 21036, GetSynciv_remap_index },
   { 20931, IsSync_remap_index },
   { 20981, WaitSync_remap_index },
   { 20459, DrawElementsBaseVertex_remap_index },
   { 20799, DrawElementsInstancedBaseVertex_remap_index },
   { 20547, DrawRangeElementsBaseVertex_remap_index },
   { 20690, MultiDrawElementsBaseVertex_remap_index },
   { 48566, ProvokingVertex_remap_index },
   { 21120, GetMultisamplefv_remap_index },
   { 21144, SampleMaski_remap_index },
   { 21055, TexImage2DMultisample_remap_index },
   { 21087, TexImage3DMultisample_remap_index },
   { 21269, BlendEquationSeparateiARB_remap_index },
   { 21162, BlendEquationiARB_remap_index },
   { 21505, BlendFuncSeparateiARB_remap_index },
   { 21417, BlendFunciARB_remap_index },
   { 21862, BindFragDataLocationIndexed_remap_index },
   { 21931, GetFragDataIndex_remap_index },
   { 22030, BindSampler_remap_index },
   { 21994, DeleteSamplers_remap_index },
   { 21976, GenSamplers_remap_index },
   { 22365, GetSamplerParameterIiv_remap_index },
   { 22451, GetSamplerParameterIuiv_remap_index },
   { 22336, GetSamplerParameterfv_remap_index },
   { 22307, GetSamplerParameteriv_remap_index },
   { 22015, IsSampler_remap_index },
   { 22150, SamplerParameterIiv_remap_index },
   { 22227, SamplerParameterIuiv_remap_index },
   { 22073, SamplerParameterf_remap_index },
   { 22124, SamplerParameterfv_remap_index },
   { 22048, SamplerParameteri_remap_index },
   { 22098, SamplerParameteriv_remap_index },
   { 22540, GetQueryObjecti64v_remap_index },
   { 22590, GetQueryObjectui64v_remap_index },
   { 22642, QueryCounter_remap_index },
   { 23179, ColorP3ui_remap_index },
   { 23211, ColorP3uiv_remap_index },
   { 23195, ColorP4ui_remap_index },
   { 23228, ColorP4uiv_remap_index },
   { 22940, MultiTexCoordP1ui_remap_index },
   { 23040, MultiTexCoordP1uiv_remap_index },
   { 22965, MultiTexCoordP2ui_remap_index },
   { 23066, MultiTexCoordP2uiv_remap_index },
   { 22990, MultiTexCoordP3ui_remap_index },
   { 23092, MultiTexCoordP3uiv_remap_index },
   { 23015, MultiTexCoordP4ui_remap_index },
   { 23118, MultiTexCoordP4uiv_remap_index },
   { 23144, NormalP3ui_remap_index },
   { 23161, NormalP3uiv_remap_index },
   { 23245, SecondaryColorP3ui_remap_index },
   { 23270, SecondaryColorP3uiv_remap_index },
   { 22784, TexCoordP1ui_remap_index },
   { 22860, TexCoordP1uiv_remap_index },
   { 22803, TexCoordP2ui_remap_index },
   { 22880, TexCoordP2uiv_remap_index },
   { 22822, TexCoordP3ui_remap_index },
   { 22900, TexCoordP3uiv_remap_index },
   { 22841, TexCoordP4ui_remap_index },
   { 22920, TexCoordP4uiv_remap_index },
   { 23296, VertexAttribP1ui_remap_index },
   { 23396, VertexAttribP1uiv_remap_index },
   { 23321, VertexAttribP2ui_remap_index },
   { 23422, VertexAttribP2uiv_remap_index },
   { 23346, VertexAttribP3ui_remap_index },
   { 23448, VertexAttribP3uiv_remap_index },
   { 23371, VertexAttribP4ui_remap_index },
   { 23474, VertexAttribP4uiv_remap_index },
   { 22679, VertexP2ui_remap_index },
   { 22730, VertexP2uiv_remap_index },
   { 22696, VertexP3ui_remap_index },
   { 22748, VertexP3uiv_remap_index },
   { 22713, VertexP4ui_remap_index },
   { 22766, VertexP4uiv_remap_index },
   { 23848, DrawArraysIndirect_remap_index },
   { 23873, DrawElementsIndirect_remap_index },
   { 24407, GetUniformdv_remap_index },
   { 24028, Uniform1d_remap_index },
   { 24098, Uniform1dv_remap_index },
   { 24044, Uniform2d_remap_index },
   { 24116, Uniform2dv_remap_index },
   { 24061, Uniform3d_remap_index },
   { 24134, Uniform3dv_remap_index },
   { 24079, Uniform4d_remap_index },
   { 24152, Uniform4dv_remap_index },
   { 24170, UniformMatrix2dv_remap_index },
   { 24245, UniformMatrix2x3dv_remap_index },
   { 24272, UniformMatrix2x4dv_remap_index },
   { 24195, UniformMatrix3dv_remap_index },
   { 24299, UniformMatrix3x2dv_remap_index },
   { 24326, UniformMatrix3x4dv_remap_index },
   { 24220, UniformMatrix4dv_remap_index },
   { 24353, UniformMatrix4x2dv_remap_index },
   { 24380, UniformMatrix4x3dv_remap_index },
   { 23641, GetActiveSubroutineName_remap_index },
   { 23600, GetActiveSubroutineUniformName_remap_index },
   { 23562, GetActiveSubroutineUniformiv_remap_index },
   { 23735, GetProgramStageiv_remap_index },
   { 23536, GetSubroutineIndex_remap_index },
   { 23500, GetSubroutineUniformLocation_remap_index },
   { 23704, GetUniformSubroutineuiv_remap_index },
   { 23675, UniformSubroutinesuiv_remap_index },
   { 23825, PatchParameterfv_remap_index },
   { 23761, PatchParameteri_remap_index },
   { 59006, BindTransformFeedback_remap_index },
   { 59034, DeleteTransformFeedbacks_remap_index },
   { 59173, DrawTransformFeedback_remap_index },
   { 59065, GenTransformFeedbacks_remap_index },
   { 59093, IsTransformFeedback_remap_index },
   { 59118, PauseTransformFeedback_remap_index },
   { 59145, ResumeTransformFeedback_remap_index },
   { 25430, BeginQueryIndexed_remap_index },
   { 25395, DrawTransformFeedbackStream_remap_index },
   { 25455, EndQueryIndexed_remap_index },
   { 25477, GetQueryIndexediv_remap_index },
   { 28381, ClearDepthf_remap_index },
   { 28415, DepthRangef_remap_index },
   { 28300, GetShaderPrecisionFormat_remap_index },
   { 28333, ReleaseShaderCompiler_remap_index },
   { 28359, ShaderBinary_remap_index },
   { 28450, GetProgramBinary_remap_index },
   { 28498, ProgramBinary_remap_index },
   { 28539, ProgramParameteri_remap_index },
   { 28205, GetVertexAttribLdv_remap_index },
   { 27791, VertexAttribL1d_remap_index },
   { 27969, VertexAttribL1dv_remap_index },
   { 27834, VertexAttribL2d_remap_index },
   { 28014, VertexAttribL2dv_remap_index },
   { 27878, VertexAttribL3d_remap_index },
   { 28059, VertexAttribL3dv_remap_index },
   { 27923, VertexAttribL4d_remap_index },
   { 28104, VertexAttribL4dv_remap_index },
   { 28149, VertexAttribLPointer_remap_index },
   { 40494, DepthRangeArrayv_remap_index },
   { 40518, DepthRangeIndexed_remap_index },
   { 40618, GetDoublei_v_remap_index },
   { 40543, GetFloati_v_remap_index },
   { 40367, ScissorArrayv_remap_index },
   { 40407, ScissorIndexed_remap_index },
   { 40451, ScissorIndexedv_remap_index },
   { 40230, ViewportArrayv_remap_index },
   { 40272, ViewportIndexedf_remap_index },
   { 40320, ViewportIndexedfv_remap_index },
   { 28902, GetGraphicsResetStatusARB_remap_index },
   { 29282, GetnColorTableARB_remap_index },
   { 29429, GetnCompressedTexImageARB_remap_index },
   { 29309, GetnConvolutionFilterARB_remap_index },
   { 29378, GetnHistogramARB_remap_index },
   { 29013, GetnMapdvARB_remap_index },
   { 29034, GetnMapfvARB_remap_index },
   { 29055, GetnMapivARB_remap_index },
   { 29405, GetnMinmaxARB_remap_index },
   { 29076, GetnPixelMapfvARB_remap_index },
   { 29101, GetnPixelMapuivARB_remap_index },
   { 29127, GetnPixelMapusvARB_remap_index },
   { 29153, GetnPolygonStippleARB_remap_index },
   { 29343, GetnSeparableFilterARB_remap_index },
   { 29181, GetnTexImageARB_remap_index },
   { 29684, GetnUniformdvARB_remap_index },
   { 29463, GetnUniformfvARB_remap_index },
   { 29542, GetnUniformivARB_remap_index },
   { 29621, GetnUniformuivARB_remap_index },
   { 29207, ReadnPixelsARB_remap_index },
   { 29709, DrawArraysInstancedBaseInstance_remap_index },
   { 29829, DrawElementsInstancedBaseInstance_remap_index },
   { 29912, DrawElementsInstancedBaseVertexBaseInstance_remap_index },
   { 30070, DrawTransformFeedbackInstanced_remap_index },
   { 30108, DrawTransformFeedbackStreamInstanced_remap_index },
   { 30153, GetInternalformativ_remap_index },
   { 30182, GetActiveAtomicCounterBufferiv_remap_index },
   { 30221, BindImageTexture_remap_index },
   { 30249, MemoryBarrier_remap_index },
   { 30287, TexStorage1D_remap_index },
   { 30308, TexStorage2D_remap_index },
   { 30330, TexStorage3D_remap_index },
   { 30353, TextureStorage1DEXT_remap_index },
   { 30382, TextureStorage2DEXT_remap_index },
   { 30412, TextureStorage3DEXT_remap_index },
   { 30695, ClearBufferData_remap_index },
   { 30720, ClearBufferSubData_remap_index },
   { 30821, DispatchCompute_remap_index },
   { 30844, DispatchComputeIndirect_remap_index },
   { 30873, CopyImageSubData_remap_index },
   { 30953, TextureView_remap_index },
   { 31011, BindVertexBuffer_remap_index },
   { 31120, VertexAttribBinding_remap_index },
   { 31036, VertexAttribFormat_remap_index },
   { 31064, VertexAttribIFormat_remap_index },
   { 31092, VertexAttribLFormat_remap_index },
   { 31146, VertexBindingDivisor_remap_index },
   { 31425, FramebufferParameteri_remap_index },
   { 31454, GetFramebufferParameteriv_remap_index },
   { 31565, GetInternalformati64v_remap_index },
   { 23901, MultiDrawArraysIndirect_remap_index },
   { 23962, MultiDrawElementsIndirect_remap_index },
   { 31777, GetProgramInterfaceiv_remap_index },
   { 31807, GetProgramResourceIndex_remap_index },
   { 31904, GetProgramResourceLocation_remap_index },
   { 31938, GetProgramResourceLocationIndex_remap_index },
   { 31838, GetProgramResourceName_remap_index },
   { 31871, GetProgramResourceiv_remap_index },
   { 32014, ShaderStorageBlockBinding_remap_index },
   { 32047, TexBufferRange_remap_index },
   { 32143, TexStorage2DMultisample_remap_index },
   { 32177, TexStorage3DMultisample_remap_index },
   { 32326, BufferStorage_remap_index },
   { 32397, ClearTexImage_remap_index },
   { 32439, ClearTexSubImage_remap_index },
   { 32493, BindBuffersBase_remap_index },
   { 32517, BindBuffersRange_remap_index },
   { 32584, BindImageTextures_remap_index },
   { 32564, BindSamplers_remap_index },
   { 32544, BindTextures_remap_index },
   { 32609, BindVertexBuffers_remap_index },
   { 32765, GetImageHandleARB_remap_index },
   { 32636, GetTextureHandleARB_remap_index },
   { 32661, GetTextureSamplerHandleARB_remap_index },
   { 33107, GetVertexAttribLui64vARB_remap_index },
   { 33020, IsImageHandleResidentARB_remap_index },
   { 32988, IsTextureHandleResidentARB_remap_index },
   { 32825, MakeImageHandleNonResidentARB_remap_index },
   { 32792, MakeImageHandleResidentARB_remap_index },
   { 32728, MakeTextureHandleNonResidentARB_remap_index },
   { 32694, MakeTextureHandleResidentARB_remap_index },
   { 32916, ProgramUniformHandleui64ARB_remap_index },
   { 32951, ProgramUniformHandleui64vARB_remap_index },
   { 32860, UniformHandleui64ARB_remap_index },
   { 32887, UniformHandleui64vARB_remap_index },
   { 33050, VertexAttribL1ui64ARB_remap_index },
   { 33078, VertexAttribL1ui64vARB_remap_index },
   { 33139, DispatchComputeGroupSizeARB_remap_index },
   { 33177, MultiDrawArraysIndirectCountARB_remap_index },
   { 33249, MultiDrawElementsIndirectCountARB_remap_index },
   { 33398, ClipControl_remap_index },
   { 35592, BindTextureUnit_remap_index },
   { 34564, BlitNamedFramebuffer_remap_index },
   { 34601, CheckNamedFramebufferStatus_remap_index },
   { 33763, ClearNamedBufferData_remap_index },
   { 33793, ClearNamedBufferSubData_remap_index },
   { 34531, ClearNamedFramebufferfi_remap_index },
   { 34499, ClearNamedFramebufferfv_remap_index },
   { 34434, ClearNamedFramebufferiv_remap_index },
   { 34466, ClearNamedFramebufferuiv_remap_index },
   { 35184, CompressedTextureSubImage1D_remap_index },
   { 35223, CompressedTextureSubImage2D_remap_index },
   { 35264, CompressedTextureSubImage3D_remap_index },
   { 33731, CopyNamedBufferSubData_remap_index },
   { 35307, CopyTextureSubImage1D_remap_index },
   { 35339, CopyTextureSubImage2D_remap_index },
   { 35373, CopyTextureSubImage3D_remap_index },
   { 33633, CreateBuffers_remap_index },
   { 34084, CreateFramebuffers_remap_index },
   { 36326, CreateProgramPipelines_remap_index },
   { 36355, CreateQueries_remap_index },
   { 34722, CreateRenderbuffers_remap_index },
   { 36305, CreateSamplers_remap_index },
   { 34865, CreateTextures_remap_index },
   { 33433, CreateTransformFeedbacks_remap_index },
   { 35863, CreateVertexArrays_remap_index },
   { 35888, DisableVertexArrayAttrib_remap_index },
   { 35919, EnableVertexArrayAttrib_remap_index },
   { 33921, FlushMappedNamedBufferRange_remap_index },
   { 35565, GenerateTextureMipmap_remap_index },
   { 35640, GetCompressedTextureImage_remap_index },
   { 33989, GetNamedBufferParameteri64v_remap_index },
   { 33956, GetNamedBufferParameteriv_remap_index },
   { 34024, GetNamedBufferPointerv_remap_index },
   { 34054, GetNamedBufferSubData_remap_index },
   { 34673, GetNamedFramebufferAttachmentParameteriv_remap_index },
   { 34635, GetNamedFramebufferParameteriv_remap_index },
   { 34826, GetNamedRenderbufferParameteriv_remap_index },
   { 36439, GetQueryBufferObjecti64v_remap_index },
   { 36376, GetQueryBufferObjectiv_remap_index },
   { 36472, GetQueryBufferObjectui64v_remap_index },
   { 36407, GetQueryBufferObjectuiv_remap_index },
   { 35614, GetTextureImage_remap_index },
   { 35674, GetTextureLevelParameterfv_remap_index },
   { 35709, GetTextureLevelParameteriv_remap_index },
   { 35773, GetTextureParameterIiv_remap_index },
   { 35803, GetTextureParameterIuiv_remap_index },
   { 35744, GetTextureParameterfv_remap_index },
   { 35834, GetTextureParameteriv_remap_index },
   { 33599, GetTransformFeedbacki64_v_remap_index },
   { 33567, GetTransformFeedbacki_v_remap_index },
   { 33537, GetTransformFeedbackiv_remap_index },
   { 36271, GetVertexArrayIndexed64iv_remap_index },
   { 36239, GetVertexArrayIndexediv_remap_index },
   { 36215, GetVertexArrayiv_remap_index },
   { 34351, InvalidateNamedFramebufferData_remap_index },
   { 34389, InvalidateNamedFramebufferSubData_remap_index },
   { 33828, MapNamedBuffer_remap_index },
   { 33849, MapNamedBufferRange_remap_index },
   { 33680, NamedBufferData_remap_index },
   { 33653, NamedBufferStorage_remap_index },
   { 33704, NamedBufferSubData_remap_index },
   { 34250, NamedFramebufferDrawBuffer_remap_index },
   { 34283, NamedFramebufferDrawBuffers_remap_index },
   { 34146, NamedFramebufferParameteri_remap_index },
   { 34318, NamedFramebufferReadBuffer_remap_index },
   { 34109, NamedFramebufferRenderbuffer_remap_index },
   { 34180, NamedFramebufferTexture_remap_index },
   { 34212, NamedFramebufferTextureLayer_remap_index },
   { 34748, NamedRenderbufferStorage_remap_index },
   { 34781, NamedRenderbufferStorageMultisample_remap_index },
   { 34887, TextureBuffer_remap_index },
   { 34908, TextureBufferRange_remap_index },
   { 35484, TextureParameterIiv_remap_index },
   { 35511, TextureParameterIuiv_remap_index },
   { 35408, TextureParameterf_remap_index },
   { 35433, TextureParameterfv_remap_index },
   { 35459, TextureParameteri_remap_index },
   { 35539, TextureParameteriv_remap_index },
   { 34936, TextureStorage1D_remap_index },
   { 34961, TextureStorage2D_remap_index },
   { 35014, TextureStorage2DMultisample_remap_index },
   { 34987, TextureStorage3D_remap_index },
   { 35052, TextureStorage3DMultisample_remap_index },
   { 35091, TextureSubImage1D_remap_index },
   { 35120, TextureSubImage2D_remap_index },
   { 35151, TextureSubImage3D_remap_index },
   { 33464, TransformFeedbackBufferBase_remap_index },
   { 33499, TransformFeedbackBufferRange_remap_index },
   { 33877, UnmapNamedBufferEXT_remap_index },
   { 36150, VertexArrayAttribBinding_remap_index },
   { 36048, VertexArrayAttribFormat_remap_index },
   { 36082, VertexArrayAttribIFormat_remap_index },
   { 36116, VertexArrayAttribLFormat_remap_index },
   { 36182, VertexArrayBindingDivisor_remap_index },
   { 35949, VertexArrayElementBuffer_remap_index },
   { 35980, VertexArrayVertexBuffer_remap_index },
   { 36013, VertexArrayVertexBuffers_remap_index },
   { 36541, GetCompressedTextureSubImage_remap_index },
   { 36506, GetTextureSubImage_remap_index },
   { 36622, BufferPageCommitmentARB_remap_index },
   { 36691, NamedBufferPageCommitmentARB_remap_index },
   { 37518, GetUniformi64vARB_remap_index },
   { 37562, GetUniformui64vARB_remap_index },
   { 37608, GetnUniformi64vARB_remap_index },
   { 37635, GetnUniformui64vARB_remap_index },
   { 37663, ProgramUniform1i64ARB_remap_index },
   { 37877, ProgramUniform1i64vARB_remap_index },
   { 38097, ProgramUniform1ui64ARB_remap_index },
   { 38319, ProgramUniform1ui64vARB_remap_index },
   { 37715, ProgramUniform2i64ARB_remap_index },
   { 37932, ProgramUniform2i64vARB_remap_index },
   { 38151, ProgramUniform2ui64ARB_remap_index },
   { 38376, ProgramUniform2ui64vARB_remap_index },
   { 37768, ProgramUniform3i64ARB_remap_index },
   { 37987, ProgramUniform3i64vARB_remap_index },
   { 38206, ProgramUniform3ui64ARB_remap_index },
   { 38433, ProgramUniform3ui64vARB_remap_index },
   { 37822, ProgramUniform4i64ARB_remap_index },
   { 38042, ProgramUniform4i64vARB_remap_index },
   { 38262, ProgramUniform4ui64ARB_remap_index },
   { 38490, ProgramUniform4ui64vARB_remap_index },
   { 36874, Uniform1i64ARB_remap_index },
   { 37028, Uniform1i64vARB_remap_index },
   { 37188, Uniform1ui64ARB_remap_index },
   { 37350, Uniform1ui64vARB_remap_index },
   { 36911, Uniform2i64ARB_remap_index },
   { 37068, Uniform2i64vARB_remap_index },
   { 37227, Uniform2ui64ARB_remap_index },
   { 37392, Uniform2ui64vARB_remap_index },
   { 36949, Uniform3i64ARB_remap_index },
   { 37108, Uniform3i64vARB_remap_index },
   { 37267, Uniform3ui64ARB_remap_index },
   { 37434, Uniform3ui64vARB_remap_index },
   { 36988, Uniform4i64ARB_remap_index },
   { 37148, Uniform4i64vARB_remap_index },
   { 37308, Uniform4ui64ARB_remap_index },
   { 37476, Uniform4ui64vARB_remap_index },
   { 44417, EvaluateDepthValuesARB_remap_index },
   { 44261, FramebufferSampleLocationsfvARB_remap_index },
   { 44334, NamedFramebufferSampleLocationsfvARB_remap_index },
   { 38610, SpecializeShaderARB_remap_index },
   { 31686, InvalidateBufferData_remap_index },
   { 31655, InvalidateBufferSubData_remap_index },
   { 31748, InvalidateFramebuffer_remap_index },
   { 31712, InvalidateSubFramebuffer_remap_index },
   { 31630, InvalidateTexImage_remap_index },
   { 31596, InvalidateTexSubImage_remap_index },
   { 63065, DrawTexfOES_remap_index },
   { 63086, DrawTexfvOES_remap_index },
   { 63026, DrawTexiOES_remap_index },
   { 63047, DrawTexivOES_remap_index },
   { 63104, DrawTexsOES_remap_index },
   { 63125, DrawTexsvOES_remap_index },
   { 63143, DrawTexxOES_remap_index },
   { 63164, DrawTexxvOES_remap_index },
   { 63220, PointSizePointerOES_remap_index },
   { 63247, QueryMatrixxOES_remap_index },
   { 39085, SampleMaskSGIS_remap_index },
   { 39122, SamplePatternSGIS_remap_index },
   { 39164, ColorPointerEXT_remap_index },
   { 39189, EdgeFlagPointerEXT_remap_index },
   { 39215, IndexPointerEXT_remap_index },
   { 39239, NormalPointerEXT_remap_index },
   { 39264, TexCoordPointerEXT_remap_index },
   { 39292, VertexPointerEXT_remap_index },
   { 63269, DiscardFramebufferEXT_remap_index },
   { 25549, ActiveShaderProgram_remap_index },
   { 25654, BindProgramPipeline_remap_index },
   { 25600, CreateShaderProgramv_remap_index },
   { 25704, DeleteProgramPipelines_remap_index },
   { 25761, GenProgramPipelines_remap_index },
   { 27726, GetProgramPipelineInfoLog_remap_index },
   { 25858, GetProgramPipelineiv_remap_index },
   { 25812, IsProgramPipeline_remap_index },
   { 40140, LockArraysEXT_remap_index },
   { 24427, ProgramUniform1d_remap_index },
   { 24617, ProgramUniform1dv_remap_index },
   { 26300, ProgramUniform1f_remap_index },
   { 26890, ProgramUniform1fv_remap_index },
   { 25912, ProgramUniform1i_remap_index },
   { 26490, ProgramUniform1iv_remap_index },
   { 26102, ProgramUniform1ui_remap_index },
   { 26686, ProgramUniform1uiv_remap_index },
   { 24473, ProgramUniform2d_remap_index },
   { 24666, ProgramUniform2dv_remap_index },
   { 26346, ProgramUniform2f_remap_index },
   { 26939, ProgramUniform2fv_remap_index },
   { 25958, ProgramUniform2i_remap_index },
   { 26539, ProgramUniform2iv_remap_index },
   { 26150, ProgramUniform2ui_remap_index },
   { 26737, ProgramUniform2uiv_remap_index },
   { 24520, ProgramUniform3d_remap_index },
   { 24715, ProgramUniform3dv_remap_index },
   { 26393, ProgramUniform3f_remap_index },
   { 26988, ProgramUniform3fv_remap_index },
   { 26005, ProgramUniform3i_remap_index },
   { 26588, ProgramUniform3iv_remap_index },
   { 26199, ProgramUniform3ui_remap_index },
   { 26788, ProgramUniform3uiv_remap_index },
   { 24568, ProgramUniform4d_remap_index },
   { 24764, ProgramUniform4dv_remap_index },
   { 26441, ProgramUniform4f_remap_index },
   { 27037, ProgramUniform4fv_remap_index },
   { 26053, ProgramUniform4i_remap_index },
   { 26637, ProgramUniform4iv_remap_index },
   { 26249, ProgramUniform4ui_remap_index },
   { 26839, ProgramUniform4uiv_remap_index },
   { 24813, ProgramUniformMatrix2dv_remap_index },
   { 27086, ProgramUniformMatrix2fv_remap_index },
   { 24999, ProgramUniformMatrix2x3dv_remap_index },
   { 27272, ProgramUniformMatrix2x3fv_remap_index },
   { 25065, ProgramUniformMatrix2x4dv_remap_index },
   { 27404, ProgramUniformMatrix2x4fv_remap_index },
   { 24875, ProgramUniformMatrix3dv_remap_index },
   { 27148, ProgramUniformMatrix3fv_remap_index },
   { 25131, ProgramUniformMatrix3x2dv_remap_index },
   { 27338, ProgramUniformMatrix3x2fv_remap_index },
   { 25197, ProgramUniformMatrix3x4dv_remap_index },
   { 27536, ProgramUniformMatrix3x4fv_remap_index },
   { 24937, ProgramUniformMatrix4dv_remap_index },
   { 27210, ProgramUniformMatrix4fv_remap_index },
   { 25263, ProgramUniformMatrix4x2dv_remap_index },
   { 27470, ProgramUniformMatrix4x2fv_remap_index },
   { 25329, ProgramUniformMatrix4x3dv_remap_index },
   { 27602, ProgramUniformMatrix4x3fv_remap_index },
   { 40160, UnlockArraysEXT_remap_index },
   { 25503, UseProgramStages_remap_index },
   { 27668, ValidateProgramPipeline_remap_index },
   { 63298, FramebufferTexture2DMultisampleEXT_remap_index },
   { 28744, DebugMessageCallback_remap_index },
   { 28587, DebugMessageControl_remap_index },
   { 28667, DebugMessageInsert_remap_index },
   { 28823, GetDebugMessageLog_remap_index },
   { 30560, GetObjectLabel_remap_index },
   { 30646, GetObjectPtrLabel_remap_index },
   { 30523, ObjectLabel_remap_index },
   { 30604, ObjectPtrLabel_remap_index },
   { 30486, PopDebugGroup_remap_index },
   { 30443, PushDebugGroup_remap_index },
   { 10448, SecondaryColor3fEXT_remap_index },
   { 10494, SecondaryColor3fvEXT_remap_index },
   {  9952, MultiDrawElements_remap_index },
   {  9739, FogCoordfEXT_remap_index },
   {  9769, FogCoordfvEXT_remap_index },
   { 45032, ResizeBuffersMESA_remap_index },
   { 45054, WindowPos4dMESA_remap_index },
   { 45078, WindowPos4dvMESA_remap_index },
   { 45100, WindowPos4fMESA_remap_index },
   { 45124, WindowPos4fvMESA_remap_index },
   { 45146, WindowPos4iMESA_remap_index },
   { 45170, WindowPos4ivMESA_remap_index },
   { 45192, WindowPos4sMESA_remap_index },
   { 45216, WindowPos4svMESA_remap_index },
   { 45238, MultiModeDrawArraysIBM_remap_index },
   { 45270, MultiModeDrawElementsIBM_remap_index },
   { 46052, AreProgramsResidentNV_remap_index },
   { 46081, ExecuteProgramNV_remap_index },
   { 46105, GetProgramParameterdvNV_remap_index },
   { 46137, GetProgramParameterfvNV_remap_index },
   { 46191, GetProgramStringNV_remap_index },
   { 46169, GetProgramivNV_remap_index },
   { 46217, GetTrackMatrixivNV_remap_index },
   { 46244, GetVertexAttribdvNV_remap_index },
   { 46271, GetVertexAttribfvNV_remap_index },
   { 46298, GetVertexAttribivNV_remap_index },
   { 46325, LoadProgramNV_remap_index },
   { 46347, ProgramParameters4dvNV_remap_index },
   { 46378, ProgramParameters4fvNV_remap_index },
   { 46409, RequestResidentProgramsNV_remap_index },
   { 46441, TrackMatrixNV_remap_index },
   { 46882, VertexAttrib1dNV_remap_index },
   { 46905, VertexAttrib1dvNV_remap_index },
   { 46688, VertexAttrib1fNV_remap_index },
   { 46711, VertexAttrib1fvNV_remap_index },
   { 46494, VertexAttrib1sNV_remap_index },
   { 46517, VertexAttrib1svNV_remap_index },
   { 46929, VertexAttrib2dNV_remap_index },
   { 46953, VertexAttrib2dvNV_remap_index },
   { 46735, VertexAttrib2fNV_remap_index },
   { 46759, VertexAttrib2fvNV_remap_index },
   { 46541, VertexAttrib2sNV_remap_index },
   { 46565, VertexAttrib2svNV_remap_index },
   { 46977, VertexAttrib3dNV_remap_index },
   { 47002, VertexAttrib3dvNV_remap_index },
   { 46783, VertexAttrib3fNV_remap_index },
   { 46808, VertexAttrib3fvNV_remap_index },
   { 46589, VertexAttrib3sNV_remap_index },
   { 46614, VertexAttrib3svNV_remap_index },
   { 47026, VertexAttrib4dNV_remap_index },
   { 47052, VertexAttrib4dvNV_remap_index },
   { 46832, VertexAttrib4fNV_remap_index },
   { 46858, VertexAttrib4fvNV_remap_index },
   { 46638, VertexAttrib4sNV_remap_index },
   { 46664, VertexAttrib4svNV_remap_index },
   { 47076, VertexAttrib4ubNV_remap_index },
   { 47103, VertexAttrib4ubvNV_remap_index },
   { 46463, VertexAttribPointerNV_remap_index },
   { 47336, VertexAttribs1dvNV_remap_index },
   { 47232, VertexAttribs1fvNV_remap_index },
   { 47128, VertexAttribs1svNV_remap_index },
   { 47362, VertexAttribs2dvNV_remap_index },
   { 47258, VertexAttribs2fvNV_remap_index },
   { 47154, VertexAttribs2svNV_remap_index },
   { 47388, VertexAttribs3dvNV_remap_index },
   { 47284, VertexAttribs3fvNV_remap_index },
   { 47180, VertexAttribs3svNV_remap_index },
   { 47414, VertexAttribs4dvNV_remap_index },
   { 47310, VertexAttribs4fvNV_remap_index },
   { 47206, VertexAttribs4svNV_remap_index },
   { 47440, VertexAttribs4ubvNV_remap_index },
   { 47523, GetTexBumpParameterfvATI_remap_index },
   { 47554, GetTexBumpParameterivATI_remap_index },
   { 47467, TexBumpParameterfvATI_remap_index },
   { 47495, TexBumpParameterivATI_remap_index },
   { 47865, AlphaFragmentOp1ATI_remap_index },
   { 47895, AlphaFragmentOp2ATI_remap_index },
   { 47928, AlphaFragmentOp3ATI_remap_index },
   { 47668, BeginFragmentShaderATI_remap_index },
   { 47612, BindFragmentShaderATI_remap_index },
   { 47763, ColorFragmentOp1ATI_remap_index },
   { 47794, ColorFragmentOp2ATI_remap_index },
   { 47828, ColorFragmentOp3ATI_remap_index },
   { 47639, DeleteFragmentShaderATI_remap_index },
   { 47695, EndFragmentShaderATI_remap_index },
   { 47585, GenFragmentShadersATI_remap_index },
   { 47720, PassTexCoordATI_remap_index },
   { 47743, SampleMapATI_remap_index },
   { 47964, SetFragmentShaderConstantATI_remap_index },
   { 63343, DepthRangeArrayfvOES_remap_index },
   { 63371, DepthRangeIndexedfOES_remap_index },
   { 48025, ActiveStencilFaceEXT_remap_index },
   { 48431, GetProgramNamedParameterdvNV_remap_index },
   { 48394, GetProgramNamedParameterfvNV_remap_index },
   { 48287, ProgramNamedParameter4dNV_remap_index },
   { 48359, ProgramNamedParameter4dvNV_remap_index },
   { 48250, ProgramNamedParameter4fNV_remap_index },
   { 48324, ProgramNamedParameter4fvNV_remap_index },
   { 58955, PrimitiveRestartNV_remap_index },
   { 62833, GetTexGenxvOES_remap_index },
   { 62855, TexGenxOES_remap_index },
   { 62873, TexGenxvOES_remap_index },
   { 48468, DepthBoundsEXT_remap_index },
   { 48515, BindFramebufferEXT_remap_index },
   { 48489, BindRenderbufferEXT_remap_index },
   { 48540, StringMarkerGREMEDY_remap_index },
   { 48965, BufferParameteriAPPLE_remap_index },
   { 48994, FlushMappedBufferRangeAPPLE_remap_index },
   { 56732, VertexAttribI1iEXT_remap_index },
   { 56910, VertexAttribI1uiEXT_remap_index },
   { 56775, VertexAttribI2iEXT_remap_index },
   { 57141, VertexAttribI2ivEXT_remap_index },
   { 56955, VertexAttribI2uiEXT_remap_index },
   { 57323, VertexAttribI2uivEXT_remap_index },
   { 56819, VertexAttribI3iEXT_remap_index },
   { 57186, VertexAttribI3ivEXT_remap_index },
   { 57001, VertexAttribI3uiEXT_remap_index },
   { 57370, VertexAttribI3uivEXT_remap_index },
   { 56864, VertexAttribI4iEXT_remap_index },
   { 57231, VertexAttribI4ivEXT_remap_index },
   { 57048, VertexAttribI4uiEXT_remap_index },
   { 57417, VertexAttribI4uivEXT_remap_index },
   { 56399, ClearColorIiEXT_remap_index },
   { 56423, ClearColorIuiEXT_remap_index },
   { 58978, BindBufferOffsetEXT_remap_index },
   { 49300, BeginPerfMonitorAMD_remap_index },
   { 49234, DeletePerfMonitorsAMD_remap_index },
   { 49325, EndPerfMonitorAMD_remap_index },
   { 49209, GenPerfMonitorsAMD_remap_index },
   { 49348, GetPerfMonitorCounterDataAMD_remap_index },
   { 49172, GetPerfMonitorCounterInfoAMD_remap_index },
   { 49132, GetPerfMonitorCounterStringAMD_remap_index },
   { 49060, GetPerfMonitorCountersAMD_remap_index },
   { 49095, GetPerfMonitorGroupStringAMD_remap_index },
   { 49029, GetPerfMonitorGroupsAMD_remap_index },
   { 49262, SelectPerfMonitorCountersAMD_remap_index },
   { 48109, GetObjectParameterivAPPLE_remap_index },
   { 48051, ObjectPurgeableAPPLE_remap_index },
   { 48079, ObjectUnpurgeableAPPLE_remap_index },
   { 49473, ActiveProgramEXT_remap_index },
   { 49495, CreateShaderProgramEXT_remap_index },
   { 49447, UseShaderProgramEXT_remap_index },
   { 36584, TextureBarrierNV_remap_index },
   { 59219, VDPAUFiniNV_remap_index },
   { 59360, VDPAUGetSurfaceivNV_remap_index },
   { 59201, VDPAUInitNV_remap_index },
   { 59308, VDPAUIsSurfaceNV_remap_index },
   { 59416, VDPAUMapSurfacesNV_remap_index },
   { 59271, VDPAURegisterOutputSurfaceNV_remap_index },
   { 59235, VDPAURegisterVideoSurfaceNV_remap_index },
   { 59389, VDPAUSurfaceAccessNV_remap_index },
   { 59441, VDPAUUnmapSurfacesNV_remap_index },
   { 59330, VDPAUUnregisterSurfaceNV_remap_index },
   { 55336, BeginPerfQueryINTEL_remap_index },
   { 55283, CreatePerfQueryINTEL_remap_index },
   { 55310, DeletePerfQueryINTEL_remap_index },
   { 55361, EndPerfQueryINTEL_remap_index },
   { 55119, GetFirstPerfQueryIdINTEL_remap_index },
   { 55149, GetNextPerfQueryIdINTEL_remap_index },
   { 55244, GetPerfCounterInfoINTEL_remap_index },
   { 55384, GetPerfQueryDataINTEL_remap_index },
   { 55179, GetPerfQueryIdByNameINTEL_remap_index },
   { 55211, GetPerfQueryInfoINTEL_remap_index },
   { 55451, PolygonOffsetClampEXT_remap_index },
   { 55015, SubpixelPrecisionBiasNV_remap_index },
   { 55045, ConservativeRasterParameterfNV_remap_index },
   { 55082, ConservativeRasterParameteriNV_remap_index },
   { 55501, WindowRectanglesEXT_remap_index },
   { 59821, BufferStorageMemEXT_remap_index },
   { 59575, CreateMemoryObjectsEXT_remap_index },
   { 59523, DeleteMemoryObjectsEXT_remap_index },
   { 60129, DeleteSemaphoresEXT_remap_index },
   { 60106, GenSemaphoresEXT_remap_index },
   { 59638, GetMemoryObjectParameterivEXT_remap_index },
   { 60209, GetSemaphoreParameterui64vEXT_remap_index },
   { 59494, GetUnsignedBytei_vEXT_remap_index },
   { 59468, GetUnsignedBytevEXT_remap_index },
   { 59552, IsMemoryObjectEXT_remap_index },
   { 60155, IsSemaphoreEXT_remap_index },
   { 59604, MemoryObjectParameterivEXT_remap_index },
   { 60011, NamedBufferStorageMemEXT_remap_index },
   { 60175, SemaphoreParameterui64vEXT_remap_index },
   { 60273, SignalSemaphoreEXT_remap_index },
   { 60044, TexStorageMem1DEXT_remap_index },
   { 59675, TexStorageMem2DEXT_remap_index },
   { 59705, TexStorageMem2DMultisampleEXT_remap_index },
   { 59747, TexStorageMem3DEXT_remap_index },
   { 59778, TexStorageMem3DMultisampleEXT_remap_index },
   { 60073, TextureStorageMem1DEXT_remap_index },
   { 59849, TextureStorageMem2DEXT_remap_index },
   { 59883, TextureStorageMem2DMultisampleEXT_remap_index },
   { 59929, TextureStorageMem3DEXT_remap_index },
   { 59964, TextureStorageMem3DMultisampleEXT_remap_index },
   { 60246, WaitSemaphoreEXT_remap_index },
   { 60302, ImportMemoryFdEXT_remap_index },
   { 60328, ImportSemaphoreFdEXT_remap_index },
   { 55528, FramebufferFetchBarrierEXT_remap_index },
   { 55611, NamedRenderbufferStorageMultisampleAdvancedAMD_remap_index },
   { 55559, RenderbufferStorageMultisampleAdvancedAMD_remap_index },
   { 55668, StencilFuncSeparateATI_remap_index },
   { 55699, ProgramEnvParameters4fvEXT_remap_index },
   { 55734, ProgramLocalParameters4fvEXT_remap_index },
   { 56282, EGLImageTargetRenderbufferStorageOES_remap_index },
   { 56249, EGLImageTargetTexture2DOES_remap_index },
   { 61497, AlphaFuncx_remap_index },
   { 61530, ClearColorx_remap_index },
   { 61567, ClearDepthx_remap_index },
   { 61601, Color4x_remap_index },
   { 61630, DepthRangex_remap_index },
   { 61665, Fogx_remap_index },
   { 61686, Fogxv_remap_index },
   { 62964, Frustumf_remap_index },
   { 61709, Frustumx_remap_index },
   { 61742, LightModelx_remap_index },
   { 61777, LightModelxv_remap_index },
   { 61814, Lightx_remap_index },
   { 61840, Lightxv_remap_index },
   { 61868, LineWidthx_remap_index },
   { 61900, LoadMatrixx_remap_index },
   { 61934, Materialx_remap_index },
   { 61966, Materialxv_remap_index },
   { 62000, MultMatrixx_remap_index },
   { 62034, MultiTexCoord4x_remap_index },
   { 62080, Normal3x_remap_index },
   { 62997, Orthof_remap_index },
   { 62110, Orthox_remap_index },
   { 62139, PointSizex_remap_index },
   { 62171, PolygonOffsetx_remap_index },
   { 62212, Rotatex_remap_index },
   { 62241, SampleCoveragex_remap_index },
   { 62284, Scalex_remap_index },
   { 62310, TexEnvx_remap_index },
   { 62338, TexEnvxv_remap_index },
   { 62368, TexParameterx_remap_index },
   { 62408, Translatex_remap_index },
   { 62892, ClipPlanef_remap_index },
   { 62442, ClipPlanex_remap_index },
   { 62925, GetClipPlanef_remap_index },
   { 62475, GetClipPlanex_remap_index },
   { 62514, GetFixedv_remap_index },
   { 62545, GetLightxv_remap_index },
   { 62579, GetMaterialxv_remap_index },
   { 62619, GetTexEnvxv_remap_index },
   { 62655, GetTexParameterxv_remap_index },
   { 62703, PointParameterx_remap_index },
   { 62746, PointParameterxv_remap_index },
   { 62791, TexParameterxv_remap_index },
   { 36839, BlendBarrier_remap_index },
   { 36728, PrimitiveBoundingBox_remap_index },
   { 38547, MaxShaderCompilerThreadsKHR_remap_index },
   { 49562, MatrixLoadfEXT_remap_index },
   { 49583, MatrixLoaddEXT_remap_index },
   { 49604, MatrixMultfEXT_remap_index },
   { 49625, MatrixMultdEXT_remap_index },
   { 49646, MatrixLoadIdentityEXT_remap_index },
   { 49673, MatrixRotatefEXT_remap_index },
   { 49699, MatrixRotatedEXT_remap_index },
   { 49725, MatrixScalefEXT_remap_index },
   { 49749, MatrixScaledEXT_remap_index },
   { 49773, MatrixTranslatefEXT_remap_index },
   { 49801, MatrixTranslatedEXT_remap_index },
   { 49829, MatrixOrthoEXT_remap_index },
   { 49855, MatrixFrustumEXT_remap_index },
   { 49883, MatrixPushEXT_remap_index },
   { 49902, MatrixPopEXT_remap_index },
   { 51959, MatrixLoadTransposefEXT_remap_index },
   { 51989, MatrixLoadTransposedEXT_remap_index },
   { 52019, MatrixMultTransposefEXT_remap_index },
   { 52049, MatrixMultTransposedEXT_remap_index },
   { 50654, BindMultiTextureEXT_remap_index },
   { 52676, NamedBufferDataEXT_remap_index },
   { 52703, NamedBufferSubDataEXT_remap_index },
   { 32367, NamedBufferStorageEXT_remap_index },
   { 52897, MapNamedBufferRangeEXT_remap_index },
   { 50242, TextureImage1DEXT_remap_index },
   { 50273, TextureImage2DEXT_remap_index },
   { 50305, TextureImage3DEXT_remap_index },
   { 50338, TextureSubImage1DEXT_remap_index },
   { 50371, TextureSubImage2DEXT_remap_index },
   { 50406, TextureSubImage3DEXT_remap_index },
   { 50443, CopyTextureImage1DEXT_remap_index },
   { 50477, CopyTextureImage2DEXT_remap_index },
   { 50512, CopyTextureSubImage1DEXT_remap_index },
   { 50548, CopyTextureSubImage2DEXT_remap_index },
   { 50586, CopyTextureSubImage3DEXT_remap_index },
   { 52733, MapNamedBufferEXT_remap_index },
   { 49980, GetTextureParameterivEXT_remap_index },
   { 50013, GetTextureParameterfvEXT_remap_index },
   { 50124, TextureParameteriEXT_remap_index },
   { 50153, TextureParameterivEXT_remap_index },
   { 50183, TextureParameterfEXT_remap_index },
   { 50212, TextureParameterfvEXT_remap_index },
   { 50625, GetTextureImageEXT_remap_index },
   { 50046, GetTextureLevelParameterivEXT_remap_index },
   { 50085, GetTextureLevelParameterfvEXT_remap_index },
   { 52757, GetNamedBufferSubDataEXT_remap_index },
   { 52790, GetNamedBufferPointervEXT_remap_index },
   { 52823, GetNamedBufferParameterivEXT_remap_index },
   { 52859, FlushMappedNamedBufferRangeEXT_remap_index },
   { 52928, FramebufferDrawBufferEXT_remap_index },
   { 52959, FramebufferDrawBuffersEXT_remap_index },
   { 52992, FramebufferReadBufferEXT_remap_index },
   { 53023, GetFramebufferParameterivEXT_remap_index },
   { 53059, CheckNamedFramebufferStatusEXT_remap_index },
   { 53096, NamedFramebufferTexture1DEXT_remap_index },
   { 53134, NamedFramebufferTexture2DEXT_remap_index },
   { 53172, NamedFramebufferTexture3DEXT_remap_index },
   { 53211, NamedFramebufferRenderbufferEXT_remap_index },
   { 53251, GetNamedFramebufferAttachmentParameterivEXT_remap_index },
   { 50681, EnableClientStateiEXT_remap_index },
   { 50739, DisableClientStateiEXT_remap_index },
   { 50799, GetPointerIndexedvEXT_remap_index },
   { 50847, MultiTexEnviEXT_remap_index },
   { 50871, MultiTexEnvivEXT_remap_index },
   { 50896, MultiTexEnvfEXT_remap_index },
   { 50920, MultiTexEnvfvEXT_remap_index },
   { 50945, GetMultiTexEnvivEXT_remap_index },
   { 50973, GetMultiTexEnvfvEXT_remap_index },
   { 51001, MultiTexParameteriEXT_remap_index },
   { 51031, MultiTexParameterivEXT_remap_index },
   { 51062, MultiTexParameterfEXT_remap_index },
   { 51092, MultiTexParameterfvEXT_remap_index },
   { 51191, GetMultiTexImageEXT_remap_index },
   { 51301, MultiTexImage1DEXT_remap_index },
   { 51333, MultiTexImage2DEXT_remap_index },
   { 51366, MultiTexImage3DEXT_remap_index },
   { 51400, MultiTexSubImage1DEXT_remap_index },
   { 51434, MultiTexSubImage2DEXT_remap_index },
   { 51470, MultiTexSubImage3DEXT_remap_index },
   { 51123, GetMultiTexParameterivEXT_remap_index },
   { 51157, GetMultiTexParameterfvEXT_remap_index },
   { 51508, CopyMultiTexImage1DEXT_remap_index },
   { 51543, CopyMultiTexImage2DEXT_remap_index },
   { 51579, CopyMultiTexSubImage1DEXT_remap_index },
   { 51616, CopyMultiTexSubImage2DEXT_remap_index },
   { 51655, CopyMultiTexSubImage3DEXT_remap_index },
   { 51695, MultiTexGendEXT_remap_index },
   { 51719, MultiTexGendvEXT_remap_index },
   { 51744, MultiTexGenfEXT_remap_index },
   { 51768, MultiTexGenfvEXT_remap_index },
   { 51793, MultiTexGeniEXT_remap_index },
   { 51817, MultiTexGenivEXT_remap_index },
   { 51842, GetMultiTexGendvEXT_remap_index },
   { 51870, GetMultiTexGenfvEXT_remap_index },
   { 51898, GetMultiTexGenivEXT_remap_index },
   { 51926, MultiTexCoordPointerEXT_remap_index },
   { 54934, BindImageTextureEXT_remap_index },
   { 52079, CompressedTextureImage1DEXT_remap_index },
   { 52119, CompressedTextureImage2DEXT_remap_index },
   { 52160, CompressedTextureImage3DEXT_remap_index },
   { 52202, CompressedTextureSubImage1DEXT_remap_index },
   { 52245, CompressedTextureSubImage2DEXT_remap_index },
   { 52290, CompressedTextureSubImage3DEXT_remap_index },
   { 52337, GetCompressedTextureImageEXT_remap_index },
   { 52374, CompressedMultiTexImage1DEXT_remap_index },
   { 52415, CompressedMultiTexImage2DEXT_remap_index },
   { 52457, CompressedMultiTexImage3DEXT_remap_index },
   { 52500, CompressedMultiTexSubImage1DEXT_remap_index },
   { 52544, CompressedMultiTexSubImage2DEXT_remap_index },
   { 52590, CompressedMultiTexSubImage3DEXT_remap_index },
   { 52638, GetCompressedMultiTexImageEXT_remap_index },
   { 51221, GetMultiTexLevelParameterivEXT_remap_index },
   { 51261, GetMultiTexLevelParameterfvEXT_remap_index },
   { 63400, FramebufferParameteriMESA_remap_index },
   { 63433, GetFramebufferParameterivMESA_remap_index },
   { 53303, NamedRenderbufferStorageEXT_remap_index },
   { 53339, GetNamedRenderbufferParameterivEXT_remap_index },
   { 49920, ClientAttribDefaultEXT_remap_index },
   { 49948, PushClientAttribDefaultEXT_remap_index },
   { 54225, NamedProgramStringEXT_remap_index },
   { 54256, GetNamedProgramStringEXT_remap_index },
   { 54289, NamedProgramLocalParameter4fEXT_remap_index },
   { 54332, NamedProgramLocalParameter4fvEXT_remap_index },
   { 54373, GetNamedProgramLocalParameterfvEXT_remap_index },
   { 54416, NamedProgramLocalParameter4dEXT_remap_index },
   { 54459, NamedProgramLocalParameter4dvEXT_remap_index },
   { 54500, GetNamedProgramLocalParameterdvEXT_remap_index },
   { 54543, GetNamedProgramivEXT_remap_index },
   { 54572, TextureBufferEXT_remap_index },
   { 54597, MultiTexBufferEXT_remap_index },
   { 54623, TextureParameterIivEXT_remap_index },
   { 54654, TextureParameterIuivEXT_remap_index },
   { 54686, GetTextureParameterIivEXT_remap_index },
   { 54720, GetTextureParameterIuivEXT_remap_index },
   { 54755, MultiTexParameterIivEXT_remap_index },
   { 54787, MultiTexParameterIuivEXT_remap_index },
   { 54820, GetMultiTexParameterIivEXT_remap_index },
   { 54855, GetMultiTexParameterIuivEXT_remap_index },
   { 54891, NamedProgramLocalParameters4fvEXT_remap_index },
   { 53381, GenerateTextureMipmapEXT_remap_index },
   { 53412, GenerateMultiTexMipmapEXT_remap_index },
   { 53444, NamedRenderbufferStorageMultisampleEXT_remap_index },
   { 53492, NamedCopyBufferSubDataEXT_remap_index },
   { 53527, VertexArrayVertexOffsetEXT_remap_index },
   { 53564, VertexArrayColorOffsetEXT_remap_index },
   { 53600, VertexArrayEdgeFlagOffsetEXT_remap_index },
   { 53637, VertexArrayIndexOffsetEXT_remap_index },
   { 53672, VertexArrayNormalOffsetEXT_remap_index },
   { 53708, VertexArrayTexCoordOffsetEXT_remap_index },
   { 53747, VertexArrayMultiTexCoordOffsetEXT_remap_index },
   { 53792, VertexArrayFogCoordOffsetEXT_remap_index },
   { 53830, VertexArraySecondaryColorOffsetEXT_remap_index },
   { 53875, VertexArrayVertexAttribOffsetEXT_remap_index },
   { 53920, VertexArrayVertexAttribIOffsetEXT_remap_index },
   { 53965, EnableVertexArrayEXT_remap_index },
   { 53992, DisableVertexArrayEXT_remap_index },
   { 54020, EnableVertexArrayAttribEXT_remap_index },
   { 54053, DisableVertexArrayAttribEXT_remap_index },
   { 54087, GetVertexArrayIntegervEXT_remap_index },
   { 54120, GetVertexArrayPointervEXT_remap_index },
   { 54153, GetVertexArrayIntegeri_vEXT_remap_index },
   { 54189, GetVertexArrayPointeri_vEXT_remap_index },
   { 30750, ClearNamedBufferDataEXT_remap_index },
   { 30783, ClearNamedBufferSubDataEXT_remap_index },
   { 31487, NamedFramebufferParameteriEXT_remap_index },
   { 31524, GetNamedFramebufferParameterivEXT_remap_index },
   { 28255, VertexArrayVertexAttribLOffsetEXT_remap_index },
   { 19850, VertexArrayVertexAttribDivisorEXT_remap_index },
   { 32111, TextureBufferRangeEXT_remap_index },
   { 32241, TextureStorage2DMultisampleEXT_remap_index },
   { 32283, TextureStorage3DMultisampleEXT_remap_index },
   { 31173, VertexArrayBindVertexBufferEXT_remap_index },
   { 31213, VertexArrayVertexAttribFormatEXT_remap_index },
   { 31256, VertexArrayVertexAttribIFormatEXT_remap_index },
   { 31299, VertexArrayVertexAttribLFormatEXT_remap_index },
   { 31342, VertexArrayVertexAttribBindingEXT_remap_index },
   { 31383, VertexArrayVertexBindingDivisorEXT_remap_index },
   { 36654, NamedBufferPageCommitmentEXT_remap_index },
   { 21701, NamedStringARB_remap_index },
   { 21725, DeleteNamedStringARB_remap_index },
   { 21752, CompileShaderIncludeARB_remap_index },
   { 21784, IsNamedStringARB_remap_index },
   { 21807, GetNamedStringARB_remap_index },
   { 21834, GetNamedStringivARB_remap_index },
   { 56325, EGLImageTargetTexStorageEXT_remap_index },
   { 56360, EGLImageTargetTextureStorageEXT_remap_index },
   { 49524, CopyImageSubDataNV_remap_index },
   { 60496, ViewportSwizzleNV_remap_index },
   { 55415, AlphaToCoverageDitherControlNV_remap_index },
   { 55926, InternalBufferSubDataCopyMESA_remap_index },
   { 60523, Vertex2hNV_remap_index },
   { 60540, Vertex2hvNV_remap_index },
   { 60557, Vertex3hNV_remap_index },
   { 60575, Vertex3hvNV_remap_index },
   { 60592, Vertex4hNV_remap_index },
   { 60611, Vertex4hvNV_remap_index },
   { 60628, Normal3hNV_remap_index },
   { 60646, Normal3hvNV_remap_index },
   { 60663, Color3hNV_remap_index },
   { 60680, Color3hvNV_remap_index },
   { 60696, Color4hNV_remap_index },
   { 60714, Color4hvNV_remap_index },
   { 60730, TexCoord1hNV_remap_index },
   { 60748, TexCoord1hvNV_remap_index },
   { 60767, TexCoord2hNV_remap_index },
   { 60786, TexCoord2hvNV_remap_index },
   { 60805, TexCoord3hNV_remap_index },
   { 60825, TexCoord3hvNV_remap_index },
   { 60844, TexCoord4hNV_remap_index },
   { 60865, TexCoord4hvNV_remap_index },
   { 60884, MultiTexCoord1hNV_remap_index },
   { 60908, MultiTexCoord1hvNV_remap_index },
   { 60933, MultiTexCoord2hNV_remap_index },
   { 60958, MultiTexCoord2hvNV_remap_index },
   { 60983, MultiTexCoord3hNV_remap_index },
   { 61009, MultiTexCoord3hvNV_remap_index },
   { 61034, MultiTexCoord4hNV_remap_index },
   { 61061, MultiTexCoord4hvNV_remap_index },
   { 61384, FogCoordhNV_remap_index },
   { 61401, FogCoordhvNV_remap_index },
   { 61419, SecondaryColor3hNV_remap_index },
   { 61445, SecondaryColor3hvNV_remap_index },
   { 55967, InternalSetError_remap_index },
   { 61086, VertexAttrib1hNV_remap_index },
   { 61109, VertexAttrib1hvNV_remap_index },
   { 61133, VertexAttrib2hNV_remap_index },
   { 61157, VertexAttrib2hvNV_remap_index },
   { 61181, VertexAttrib3hNV_remap_index },
   { 61206, VertexAttrib3hvNV_remap_index },
   { 61230, VertexAttrib4hNV_remap_index },
   { 61256, VertexAttrib4hvNV_remap_index },
   { 61280, VertexAttribs1hvNV_remap_index },
   { 61306, VertexAttribs2hvNV_remap_index },
   { 61332, VertexAttribs3hvNV_remap_index },
   { 61358, VertexAttribs4hvNV_remap_index },
   { 33326, TexPageCommitmentARB_remap_index },
   { 33360, TexturePageCommitmentEXT_remap_index },
   { 60356, ImportMemoryWin32HandleEXT_remap_index },
   { 60424, ImportSemaphoreWin32HandleEXT_remap_index },
   { 60391, ImportMemoryWin32NameEXT_remap_index },
   { 60461, ImportSemaphoreWin32NameEXT_remap_index },
   { 54988, GetObjectLabelEXT_remap_index },
   { 54965, LabelObjectEXT_remap_index },
   { 55989, DrawArraysUserBuf_remap_index },
   { 56011, DrawElementsUserBuf_remap_index },
   { 56043, MultiDrawArraysUserBuf_remap_index },
   { 56070, MultiDrawElementsUserBuf_remap_index },
   { 56106, DrawArraysInstancedBaseInstanceDrawID_remap_index },
   { 56148, DrawElementsInstancedBaseVertexBaseInstanceDrawID_remap_index },
   { 56202, InternalInvalidateFramebufferAncillaryMESA_remap_index },
   {    -1, -1 }
};

