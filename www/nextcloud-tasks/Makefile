PORTNAME=	tasks
PORTVERSION=	0.14.5
DISTVERSIONPREFIX=	v
CATEGORIES=	www
MASTER_SITES=	https://github.com/nextcloud/${PORTNAME}/releases/download/${DISTVERSIONPREFIX}${PORTVERSION}/
PKGNAMEPREFIX=	nextcloud-
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}
DISTNAME=	${PORTNAME}
DIST_SUBDIR=	nextcloud/${PORTNAME}-${DISTVERSION}

MAINTAINER=	brnrd@FreeBSD.org
COMMENT=	Tasks app for Nextcloud
WWW=		https://apps.nextcloud.com/apps/tasks

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	nextcloud${PHP_PKGNAMESUFFIX}>=23:www/nextcloud@${PHP_FLAVOR}

USES=		php:flavors
IGNORE_WITH_PHP=	82
NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR=		${PREFIX}/www/nextcloud/apps-pkg/${PORTNAME}

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})
	@(cd ${WRKSRC}; ${FIND} . -not -type d) | ${SORT} | \
		${SED} -e 's,^\.,${WWWDIR_REL},' >> ${TMPPLIST}

.include <bsd.port.mk>
