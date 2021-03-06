$NetBSD: patch-libstdc++-v3_config_os_bsd_netbsd_ctype__base.h,v 1.1 2015/07/16 12:03:36 ryoon Exp $

--- libstdc++-v3/config/os/bsd/netbsd/ctype_base.h.orig	2013-02-03 17:54:05.000000000 +0000
+++ libstdc++-v3/config/os/bsd/netbsd/ctype_base.h
@@ -43,9 +43,22 @@ _GLIBCXX_BEGIN_NAMESPACE_VERSION
 
     // NB: Offsets into ctype<char>::_M_table force a particular size
     // on the mask type. Because of this, we don't use an enum.
-    typedef unsigned char      	mask;
 
-#ifndef _CTYPE_U
+#if defined(_CTYPE_BL)
+    typedef unsigned short      mask;
+    static const mask upper     = _CTYPE_U;
+    static const mask lower     = _CTYPE_L;
+    static const mask alpha     = _CTYPE_A;
+    static const mask digit     = _CTYPE_D;
+    static const mask xdigit    = _CTYPE_X;
+    static const mask space     = _CTYPE_S;
+    static const mask print     = _CTYPE_R;
+    static const mask graph     = _CTYPE_G;
+    static const mask cntrl     = _CTYPE_C;
+    static const mask punct     = _CTYPE_P;
+    static const mask alnum     = _CTYPE_A | _CTYPE_D;
+#elif !defined(_CTYPE_U)
+    typedef unsigned char      	mask;
     static const mask upper    	= _U;
     static const mask lower 	= _L;
     static const mask alpha 	= _U | _L;
@@ -58,6 +71,7 @@ _GLIBCXX_BEGIN_NAMESPACE_VERSION
     static const mask punct 	= _P;
     static const mask alnum 	= _U | _L | _N;
 #else
+    typedef unsigned char      	mask;
     static const mask upper    	= _CTYPE_U;
     static const mask lower 	= _CTYPE_L;
     static const mask alpha 	= _CTYPE_U | _CTYPE_L;
