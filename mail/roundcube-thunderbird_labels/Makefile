PORTNAME=	thunderbird_labels
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.0
CATEGORIES=	mail
PKGNAMEPREFIX=	roundcube-
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Thunderbird Labels plugin for RoundCube webmail
WWW=		https://github.com/mike-kfed/roundcube-thunderbird_labels

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	roundcube${PHP_PKGNAMESUFFIX}>=1.4.0:mail/roundcube@${PHP_FLAVOR}

IGNORE_WITH_PHP=	82
USES=		php:flavors

USE_GITHUB=	yes
GH_ACCOUNT=	mike-kfed
GH_PROJECT=	roundcube-thunderbird_labels

NO_ARCH=	yes
NO_BUILD=	yes

PLUGINDIR=	${WWWDIR:S,/${PORTNAME}$$,,}/roundcube/plugins/${PORTNAME}
PLUGINDIR_REL=	${WWWDIR_REL:S,/${PORTNAME}$$,,}/roundcube/plugins/${PORTNAME}
PLIST_SUB=	PLUGINDIR_REL="${PLUGINDIR_REL}"

OPTIONS_DEFINE=	DOCS

# This target is only meant to be used by the port maintainer.
x-generate-plist: build
	make makeplist | \
	${SED} \
	    -e "s,^\(%%PLUGINDIR_REL%%/config\.inc\.php\.sample$$\),@sample \1," \
	    -e "s,^\(%%PLUGINDIR_REL%%/docs/\),%%PORTDOCS%%\1," \
	    >${.CURDIR}/pkg-plist.tmp

do-install:
	@${MKDIR} ${STAGEDIR}${PLUGINDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${PLUGINDIR}
	cd ${STAGEDIR}${PLUGINDIR} && \
		${MV} config.inc.php.dist config.inc.php.sample && \
		${RM} coffee2js.sh docs/_config.yml && \
		${RM} -r coffeescripts

.include <bsd.port.mk>
