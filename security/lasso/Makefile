# $NetBSD: Makefile,v 1.32 2018/07/03 05:03:30 adam Exp $

CONFIGURE_ARGS+=	--disable-python
CONFIGURE_ARGS+=	--disable-php5
CONFIGURE_ARGS+=	--disable-perl

PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 37 # not yet ported as of 2.4.1
PYTHON_FOR_BUILD_ONLY=	yes

EXTRACT_USING=		bsdtar

#PKGREVISION= 1
PKGREVISION= 1
.include "../../security/lasso/Makefile.common"
