# $NetBSD: Makefile,v 1.3 2018/03/21 11:48:32 taca Exp $

DISTNAME=	ruby_smb-0.0.23
CATEGORIES=	net

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	https://github.com/rapid7/ruby_smb
COMMENT=	Ruby implementation of the SMB Protocol Family
LICENSE=	modified-bsd

DEPENDS+=	${RUBY_PKGPREFIX}-bindata-[0-9]*:../../devel/ruby-bindata
DEPENDS+=	${RUBY_PKGPREFIX}-windows_error-[0-9]*:../../misc/ruby-windows_error
DEPENDS+=	${RUBY_PKGPREFIX}-rubyntlm-[0-9]*:../../security/ruby-rubyntlm

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
