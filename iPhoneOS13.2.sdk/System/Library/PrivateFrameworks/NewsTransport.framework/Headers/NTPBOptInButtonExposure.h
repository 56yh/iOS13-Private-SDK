//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSString;

@interface NTPBOptInButtonExposure : PBCodable <NSCopying>
{
    NSData *_groupViewExposureId;
    int _optInButtonLocation;
    NSString *_optInButtonLocationId;
    int _optInButtonType;
    struct {
        unsigned int optInButtonLocation:1;
        unsigned int optInButtonType:1;
    } _has;
}

@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSString *optInButtonLocationId; // @synthesize optInButtonLocationId=_optInButtonLocationId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
@property(readonly, nonatomic) _Bool hasOptInButtonLocationId;
@property(nonatomic) _Bool hasOptInButtonLocation;
@property(nonatomic) int optInButtonLocation; // @synthesize optInButtonLocation=_optInButtonLocation;
@property(nonatomic) _Bool hasOptInButtonType;
@property(nonatomic) int optInButtonType; // @synthesize optInButtonType=_optInButtonType;

@end

