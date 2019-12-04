//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, SYMessageHeader;

@interface SYChangeMessage : PBCodable <NSCopying>
{
    NSMutableArray *_changes;
    SYMessageHeader *_header;
}

+ (Class)changesType;
@property(retain, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)changesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changesCount;
- (void)addChanges:(id)arg1;
- (void)clearChanges;

@end

