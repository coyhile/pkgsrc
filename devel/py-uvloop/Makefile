# $NetBSD: Makefile,v 1.11 2018/07/05 06:46:17 adam Exp $

DISTNAME=	uvloop-0.11.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_PYPI:=u/uvloop/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/MagicStack/uvloop
COMMENT=	Fast implementation of asyncio event loop on top of libuv
LICENSE=	mit AND apache-2.0

BUILD_DEPENDS+=	${PYPKGPREFIX}-cython-[0-9]*:../../devel/py-cython

PYTHON_VERSIONS_ACCEPTED=	37 36 35

.include "../../devel/libuv/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
