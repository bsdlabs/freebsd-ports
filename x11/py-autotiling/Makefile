PORTNAME=	autotiling
DISTVERSION=	1.8
CATEGORIES=	x11
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fuz@fuz.su
COMMENT=	Automatically switch the window split orientation in sway and i3
WWW=		https://github.com/nwg-piotr/autotiling

LICENSE=	GPLv3+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}i3ipc>0:x11/py-i3ipc@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
