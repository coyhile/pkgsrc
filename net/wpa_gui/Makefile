# $NetBSD: Makefile,v 1.29 2018/03/12 11:17:24 wiz Exp $

DISTNAME=	wpa_supplicant-2.6
PKGNAME=	${DISTNAME:S/supplicant/gui/}
PKGREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://hostap.epitest.fi/releases/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://hostap.epitest.fi/wpa_supplicant/
COMMENT=	QT GUI for wpa_supplicant(8)
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c c++
BUILD_DIRS=	wpa_supplicant
BUILD_TARGET=	wpa_gui-qt4
USE_TOOLS+=	gmake

LRELEASE=	${QTDIR}/bin/lrelease
MAKE_ENV+=	LRELEASE=${LRELEASE}

INSTALLATION_DIRS=	sbin ${PKGMANDIR}/man8

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wpa_supplicant/wpa_gui-qt4/wpa_gui \
		${DESTDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/wpa_supplicant/doc/docbook/wpa_gui.8 \
                ${DESTDIR}${PREFIX}/${PKGMANDIR}/man8/

.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../x11/qt4-libs/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
