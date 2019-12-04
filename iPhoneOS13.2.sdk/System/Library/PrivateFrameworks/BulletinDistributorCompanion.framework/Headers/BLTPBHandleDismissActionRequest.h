//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class BLTPBActionInformation, NSString;

@interface BLTPBHandleDismissActionRequest : PBRequest <NSCopying>
{
    BLTPBActionInformation *_actionInfo;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property(retain, nonatomic) BLTPBActionInformation *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasActionInfo;
@property(readonly, nonatomic) _Bool hasSectionID;
@property(readonly, nonatomic) _Bool hasRecordID;
@property(readonly, nonatomic) _Bool hasPublisherBulletinID;

@end

