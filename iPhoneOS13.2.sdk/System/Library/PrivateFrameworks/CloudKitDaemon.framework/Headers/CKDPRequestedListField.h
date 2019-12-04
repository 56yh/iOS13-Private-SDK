//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class CKDPRecordFieldIdentifier, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRequestedListField : PBCodable <NSCopying>
{
    CKDPRecordFieldIdentifier *_fieldId;
    NSMutableArray *_ranges;
}

+ (Class)rangeType;
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldId; // @synthesize fieldId=_fieldId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangesCount;
- (void)addRange:(id)arg1;
- (void)clearRanges;
@property(readonly, nonatomic) _Bool hasFieldId;

@end

