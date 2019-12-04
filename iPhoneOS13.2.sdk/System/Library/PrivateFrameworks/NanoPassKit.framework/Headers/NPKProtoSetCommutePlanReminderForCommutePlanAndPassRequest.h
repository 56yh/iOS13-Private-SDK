//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSData, NSString;

@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest : PBRequest <NSCopying>
{
    double _reminderInterval;
    NSData *_commutePlanBytes;
    NSString *_uniqueID;
    struct {
        unsigned int reminderInterval:1;
    } _has;
}

@property(nonatomic) double reminderInterval; // @synthesize reminderInterval=_reminderInterval;
@property(retain, nonatomic) NSData *commutePlanBytes; // @synthesize commutePlanBytes=_commutePlanBytes;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasReminderInterval;
@property(readonly, nonatomic) _Bool hasCommutePlanBytes;
@property(readonly, nonatomic) _Bool hasUniqueID;

@end
