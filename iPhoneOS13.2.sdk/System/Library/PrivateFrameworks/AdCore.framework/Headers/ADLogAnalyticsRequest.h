//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSData, NSMutableArray, NSString;

@interface ADLogAnalyticsRequest : PBRequest <NSCopying>
{
    NSString *_bundleID;
    NSData *_contentiAdID;
    NSData *_dPID;
    NSMutableArray *_events;
    NSData *_iAdID;
}

+ (Class)eventsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasContentiAdID;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasIAdID;

@end

