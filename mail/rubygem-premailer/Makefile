PORTNAME=	premailer
PORTVERSION=	1.18.0
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Improve the rendering of HTML emails
WWW=		https://github.com/premailer/premailer

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-addressable>=0:www/rubygem-addressable \
		rubygem-css_parser>=1.12.0:textproc/rubygem-css_parser \
		rubygem-htmlentities>=4.0.0:textproc/rubygem-htmlentities

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/premailer

.include <bsd.port.mk>
