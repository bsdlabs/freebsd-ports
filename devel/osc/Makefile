PORTNAME=	osc
PORTVERSION=	0.182.0
CATEGORIES=	devel

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Command Line Interface to work with an openSUSE Build Service
WWW=		https://en.opensuse.org/openSUSE:OSC \
		https://github.com/openSUSE/osc

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}m2crypto>=0:security/py-m2crypto@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}chardet>=0:textproc/py-chardet@${PY_FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	openSUSE

USES=		cpe python
USE_PYTHON=	autoplist distutils noflavors pytest
PLIST_FILES=	bin/osc
NO_ARCH=	yes
PYTEST_BROKEN_TESTS=	testPrdiffDiffstat

CPE_VENDOR=	suse
CPE_PRODUCT=	opensuse_osc

PORTDOCS=	*

OPTIONS_DEFINE=	CA_BUNDLE DOCS
OPTIONS_DEFAULT=CA_BUNDLE
CA_BUNDLE_DESC=	Install CA Certificates

CA_BUNDLE_RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss
CA_BUNDLE_VARS=		CA_PATH=${LOCALBASE}/share/certs/ca-root-nss.crt
CA_BUNDLE_VARS_OFF=	CA_PATH=/etc/ssl

post-patch:
	@${REINPLACE_CMD} -e "s|'share', 'man'|'man'|" ${WRKSRC}/setup.py
	@${REINPLACE_CMD} -e "/cert.pem/ s|\[.*\]|['${CA_PATH}']|" \
		${WRKSRC}/osc/conf.py

post-install:
	${LN} -s osc-wrapper.py ${STAGEDIR}${PREFIX}/bin/osc

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} AUTHORS README.md NEWS TODO \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
