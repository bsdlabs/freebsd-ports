#
# !!!NOTE!!! Any PORTVERSION update to this port must be accompanied by
# PORTREVISION bumps of depending ports.

PORTNAME=	pulseaudio
DISTVERSION=	14.2
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	https://freedesktop.org/software/pulseaudio/releases/

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	Sound server for UNIX
WWW=		https://pulseaudio.org/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LGPL

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser
LIB_DEPENDS=	libsndfile.so:audio/libsndfile \
		libfftw3.so:math/fftw3 \
		libfftw3f.so:math/fftw3-float \
		libdbus-1.so:devel/dbus \
		libltdl.so:devel/libltdl \
		libck-connector.so:sysutils/consolekit2

USES=		compiler:c11 cpe gettext gmake gnome iconv libtool:build localbase:ldflags \
		pathfix pkgconfig python:run shebangfix ssl tar:xz

USE_GNOME=	glib20
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	PTHREAD_LIBS="-lpthread" \
		OPENSSL_CFLAGS="-I${OPENSSLINC}" \
		OPENSSL_LIBS="-L${OPENSSLLIB} -lcrypto -lssl" \
		LIBS="-lm -lintl" \
		ac_cv_header_linux_input_h=""
INSTALL_TARGET=	install-strip

SHEBANG_FILES=	shell-completion/bash/pulseaudio \
		src/utils/pa-info \
		src/utils/qpaeq
bash_CMD=	${SETENV} bash
SUB_FILES=	pkg-message

CONFIGURE_ARGS=	--localstatedir=/var \
		--without-caps \
		--disable-esound \
		--disable-udev \
		--disable-gtk3 \
		--disable-gconf \
		--disable-systemd-daemon \
		--disable-systemd-journal \
		--disable-systemd-login \
		--disable-neon-opt \
		--disable-lirc # untested

USERS=		pulse
GROUPS=		pulse pulse-access pulse-rt

OPTIONS_SUB=	yes
OPTIONS_DEFINE=	AVAHI GSETTINGS SIMD TEST X11
OPTIONS_DEFAULT=AVAHI SIMD SIMPLE SOXR SPEEX WEBRTC_AEC X11
AVAHI_CONFIGURE_ENABLE=	avahi
AVAHI_LIB_DEPENDS=	libavahi-client.so:net/avahi-app
GSETTINGS_DESC=	GSettings configuration backend support
GSETTINGS_CONFIGURE_ENABLE=	gsettings
GSETTINGS_VARS=	GLIB_SCHEMAS=org.freedesktop.pulseaudio.gschema.xml
SIMD_CONFIGURE_ENABLE=	orc
SIMD_LIB_DEPENDS=	liborc-0.4.so:devel/orc
TEST_TEST_TARGET=	check
TEST_CONFIGURE_ENABLE=	tests default-build-tests
TEST_BUILD_DEPENDS=	check>0:devel/check
X11_CONFIGURE_ENABLE=	x11
X11_USES=	xorg
X11_USE=	XORG=ice,sm,x11,xcb,xtst

OPTIONS_GROUP=	AUDIO
OPTIONS_GROUP_AUDIO=	ALSA JACK SOXR SPEEX WEBRTC_AEC
AUDIO_DESC=	Audio support
ALSA_CONFIGURE_ENABLE=	alsa
ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
JACK_CONFIGURE_ENABLE=	jack
JACK_LIB_DEPENDS=	libjack.so:audio/jack
SOXR_CONFIGURE_WITH=	soxr
SOXR_LIB_DEPENDS=	libsoxr.so:audio/libsoxr
SPEEX_DESC=	Speex resampler and AEC support
SPEEX_CONFIGURE_WITH=	speex
SPEEX_LIB_DEPENDS=	libspeexdsp.so:audio/speexdsp
WEBRTC_AEC_DESC=	WebRTC-based echo canceller
WEBRTC_AEC_LIB_DEPENDS=	libwebrtc_audio_processing.so:audio/webrtc-audio-processing0
WEBRTC_AEC_CONFIGURE_ENABLE=	webrtc-aec

OPTIONS_SINGLE=	DATABASE
OPTIONS_SINGLE_DATABASE=	TDB GDBM SIMPLE
DATABASE_DESC=	Database support
GDBM_DESC=	GNU database manager support
GDBM_CONFIGURE_ON=	--with-database=gdbm
GDBM_LIB_DEPENDS=	libgdbm.so:databases/gdbm
SIMPLE_DESC=	Simple database support
SIMPLE_CONFIGURE_ON=	--with-database=simple
TDB_DESC=	Trivial database support
TDB_CONFIGURE_ON=	--with-database=tdb
TDB_LIB_DEPENDS=	libtdb.so:databases/tdb

PULSE_VERSION=	${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
PLIST_SUB=	PULSE_VERSION=${PULSE_VERSION}

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/share|${LOCALBASE}/share|g' \
		${WRKSRC}/src/daemon/default.pa.in
	@${REINPLACE_CMD} -e 's|/etc|${PREFIX}/etc|g' \
		-e 's|--directory|-d|g' \
		${WRKSRC}/src/utils/pa-info
	@${REINPLACE_CMD} -e 's|-Wmissing-include-dirs||g' \
		-e 's|main ()|main (void)|g' \
		${WRKSRC}/configure

pre-install-TEST-on: do-test

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/pulse
.for ii in default.pa daemon.conf client.conf system.pa
	${INSTALL_DATA} ${WRKSRC}/src/${ii} \
		${STAGEDIR}${PREFIX}/etc/pulse/${ii}.sample
.endfor
# Delete ${STAGEDIR}${PREFIX}/libexec/pulse directory, if it's empty
	@(cd ${STAGEDIR}${PREFIX}/libexec && \
		${FIND} * -maxdepth 0 -type d -empty -name pulse -delete)

.include <bsd.port.mk>
