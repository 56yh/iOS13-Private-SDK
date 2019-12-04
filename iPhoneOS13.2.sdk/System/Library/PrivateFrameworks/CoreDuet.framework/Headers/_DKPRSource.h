//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface _DKPRSource : PBCodable <NSCopying>
{
    NSString *_bundleID;
    NSString *_deviceID;
    NSString *_groupID;
    NSString *_itemID;
    NSString *_sourceID;
    int _userID;
    struct {
        unsigned int userID:1;
    } _has;
}

@property(nonatomic) int userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUserID;
@property(readonly, nonatomic) _Bool hasDeviceID;
@property(readonly, nonatomic) _Bool hasGroupID;
@property(readonly, nonatomic) _Bool hasItemID;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasSourceID;

@end

