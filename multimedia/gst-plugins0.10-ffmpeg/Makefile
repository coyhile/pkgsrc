# $NetBSD: Makefile,v 1.37 2018/02/26 08:19:29 adam Exp $
#

DISTNAME=	gst-ffmpeg-0.10.13
PKGREVISION=	16
CATEGORIES=	multimedia
MASTER_SITES=	https://gstreamer.freedesktop.org/src/gst-ffmpeg/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://gstreamer.freedesktop.org/src/gst-ffmpeg/
COMMENT=	GStreamer ffmpeg plugin

USE_PKGLOCALEDIR=	yes
USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes
#OVERRIDE_DIRDEPTH=	3
USE_TOOLS+=		pkg-config gmake perl
PKGSRC_MAKE_ENV+=	PERL=${PERL5}

.include "../../multimedia/gstreamer0.10/buildlink3.mk"
.include "../../multimedia/gst-plugins0.10-base/buildlink3.mk"
# the upstream developers only want to support building against
# the included ffmpeg version, since the ffmpeg API/ABI is unstable
# and there are no releases
.include "../../multimedia/ffmpeg010/buildlink3.mk"
CONFIGURE_ARGS+= --with-system-ffmpeg
.include "../../devel/orc/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
