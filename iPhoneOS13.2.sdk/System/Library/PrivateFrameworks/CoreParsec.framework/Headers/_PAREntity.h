//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_PAREntity-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PAREntity : PBCodable <_PAREntity, NSSecureCoding>
{
    float _probabilityScore;
    int _category;
    NSString *_name;
    NSArray *_topics;
}

@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) int category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float probabilityScore; // @synthesize probabilityScore=_probabilityScore;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

