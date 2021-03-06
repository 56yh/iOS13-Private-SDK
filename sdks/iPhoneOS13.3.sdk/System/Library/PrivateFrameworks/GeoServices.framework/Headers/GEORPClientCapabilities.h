//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEORPClientCapabilities : PBCodable <NSCopying>
{
    int _transitMarketSupport;
    BOOL _hasConstrainedProblemStatusSize;
    BOOL _hasFeatureHandle;
    BOOL _hasNoOptInRequest;
    BOOL _hasSupportForIdsBasedNotifications;
    struct {
        unsigned int has_transitMarketSupport:1;
        unsigned int has_hasConstrainedProblemStatusSize:1;
        unsigned int has_hasFeatureHandle:1;
        unsigned int has_hasNoOptInRequest:1;
        unsigned int has_hasSupportForIdsBasedNotifications:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (id)transitMarketSupportAsString:(int)arg1;
@property(nonatomic) BOOL hasTransitMarketSupport;
@property(nonatomic) int transitMarketSupport;
@property(nonatomic) BOOL hasHasSupportForIdsBasedNotifications;
@property(nonatomic) BOOL hasSupportForIdsBasedNotifications;
@property(nonatomic) BOOL hasHasFeatureHandle;
@property(nonatomic) BOOL hasFeatureHandle;
@property(nonatomic) BOOL hasHasNoOptInRequest;
@property(nonatomic) BOOL hasNoOptInRequest;
@property(nonatomic) BOOL hasHasConstrainedProblemStatusSize;
@property(nonatomic) BOOL hasConstrainedProblemStatusSize;

@end

