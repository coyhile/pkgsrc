# $NetBSD: buildlink3.mk,v 1.2 2018/01/07 13:04:26 rillig Exp $

BUILDLINK_TREE+=	go-vultr

.if !defined(GO_VULTR_BUILDLINK3_MK)
GO_VULTR_BUILDLINK3_MK:=

BUILDLINK_CONTENTS_FILTER.go-vultr=	${EGREP} gopkg/
BUILDLINK_DEPMETHOD.go-vultr?=		build

BUILDLINK_API_DEPENDS.go-vultr+=	go-vultr>=1.8
BUILDLINK_PKGSRCDIR.go-vultr?=		../../net/go-vultr

.include "../../devel/go-mow-cli/buildlink3.mk"
.include "../../devel/go-ratelimit/buildlink3.mk"
.include "../../security/go-crypto/buildlink3.mk"
.endif	# GO_VULTR_BUILDLINK3_MK

BUILDLINK_TREE+=	-go-vultr
