PORTNAME=	nest-asyncio
PORTVERSION=	1.5.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	nest_asyncio-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Patch asyncio to allow nested event loops
WWW=		https://github.com/erdewit/nest_asyncio

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:3.5+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
