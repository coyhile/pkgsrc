# $NetBSD: Makefile,v 1.19 2018/03/04 15:32:37 wiz Exp $

DISTNAME=		Mozilla-CA-20180117
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		security perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Mozilla/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Mozilla-CA/
COMMENT=		Mozilla's CA cert bundle for Perl
LICENSE=		mpl-2.0

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Mozilla/CA/.packlist
REPLACE_PERL+=		mk-ca-bundle.pl

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
