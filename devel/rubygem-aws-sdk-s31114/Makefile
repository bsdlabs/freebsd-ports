PORTNAME=	aws-sdk-s3
PORTVERSION=	1.114.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1114

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Official AWS Ruby gem for Amazon Simple Storage Service (Amazon S3)
WWW=		https://github.com/aws/aws-sdk-ruby/tree/version-3/gems/aws-sdk-s3

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-aws-sdk-core>=3.127.0<4:devel/rubygem-aws-sdk-core \
		rubygem-aws-sdk-kms>=1<2:devel/rubygem-aws-sdk-kms \
		rubygem-aws-sigv4>=1.4<2:devel/rubygem-aws-sigv4

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.114\.

.include <bsd.port.mk>
