//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>
{
    NSData *_continuationMarker;
    NSMutableArray *_zoneSummarys;
}

+ (Class)zoneSummaryType;
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *zoneSummarys; // @synthesize zoneSummarys=_zoneSummarys;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasContinuationMarker;
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoneSummarysCount;
- (void)addZoneSummary:(id)arg1;
- (void)clearZoneSummarys;

@end

