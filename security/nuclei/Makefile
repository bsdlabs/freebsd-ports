PORTNAME=	nuclei
DISTVERSIONPREFIX=	v
DISTVERSION=	2.7.9
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	0xdutra@gmail.com
COMMENT=	Fast vulnerability scanner
WWW=		https://github.com/projectdiscovery/nuclei

LICENSE=	MIT

USES=		go:modules
GO_MODULE=	github.com/projectdiscovery/nuclei/v2

GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
