# $NetBSD: Makefile,v 1.58 2017/12/30 13:14:17 wiz Exp $

DISTNAME=	Archive-Zip-1.60
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	archivers perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Archive/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Archive-Zip/
COMMENT=	Perl5 module interface to manipulate zip files
LICENSE=	${PERL5_LICENSE}

#DEPENDS+=	{perl>=5.10.1,p5-IO-Compress>=2.017}:../../devel/p5-IO-Compress	# Compress::Raw::Zlib>=2.017
BUILD_DEPENDS+=	p5-Test-MockModule-[0-9]*:../../devel/p5-Test-MockModule
DEPENDS+=	p5-SUPER-[0-9]*:../../devel/p5-SUPER
# TEST_DEPENDS? Perhaps run dependency? NetBSD's unzip is not good enough
BUILD_DEPENDS+=	unzip-[0-9]*:../../archivers/unzip

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Archive/Zip/.packlist

post-extract:
	rm -rf ${WRKSRC}/PaxHeader ${WRKSRC}/*/PaxHeader ${WRKSRC}/*/*/PaxHeader

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
