PORTNAME=	demjson
PORTVERSION=	3.0.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		http://deron.meranda.us/python/demjson/dist/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}3-${PORTVERSION}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Encoder, Decoder and Lint/Validator for JSON
WWW=		http://deron.meranda.us/python/demjson/

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python:3.7+ shebangfix
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
