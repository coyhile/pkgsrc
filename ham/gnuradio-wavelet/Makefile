# $NetBSD: Makefile,v 1.10 2018/04/29 21:31:48 adam Exp $

PKGNAME=	gnuradio-wavelet-${VERSION}
PKGREVISION=	4
COMMENT=	Wavelet transform of GNU Radio

.include	"../../ham/gnuradio-core/Makefile.common"
.include	"../../ham/gnuradio-core/Nocore.mk"

CMAKE_ARGS+=	-DENABLE_DEFAULT=False
CMAKE_ARGS+=	-DENABLE_GR_WAVELET=True

.include	"../../math/gsl/buildlink3.mk"
.include	"../../mk/bsd.pkg.mk"
