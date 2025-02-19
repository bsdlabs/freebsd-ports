PORTNAME=	rgbds
DISTVERSION=	0.6.1
CATEGORIES=	devel games
MASTER_SITES=	https://github.com/gbdev/rgbds/releases/download/v${DISTVERSION}/

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Free assembler/linker for the Game Boy and Game Boy Color
WWW=		https://rgbds.gbdev.io/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpng.so:graphics/png

USES=		bison compiler:c11 dos2unix pkgconfig
MAKE_ARGS=	Q= # verbose builds
WRKSRC=		${WRKDIR}/rgbds

do-configure:
# yank _POSIX_C_SOURCE when there is no support for _ISOC11_SOURCE
	@cd ${WRKSRC}; ${PRINTF} '#include <assert.h>\nint main(){static_assert(1, "");}' | \
		${CC} -std=gnu11 -D_POSIX_C_SOURCE=200809L -D_ISOC11_SOURCE -xc - 2>/dev/null || \
		${REINPLACE_CMD} 's,-D_POSIX_C_SOURCE=200809L,,' ${WRKSRC}/Makefile

.include <bsd.port.pre.mk>

# clang build fails on 13.1 and 14 current
# see https://github.com/gbdev/rgbds/issues/1091
.if ${OSVERSION} >= 1300000
USE_GCC=	yes
.endif

.include <bsd.port.post.mk>
