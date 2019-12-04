//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPResultRankingFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@interface _CPResultRankingFeedback : PBCodable <_CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding>
{
    unsigned int _localResultPosition;
    unsigned long long _timestamp;
    _CPSearchResultForFeedback *_result;
    NSArray *_hiddenResults;
    NSArray *_duplicateResults;
    double _personalizationScore;
}

@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned int localResultPosition; // @synthesize localResultPosition=_localResultPosition;
@property(copy, nonatomic) NSArray *duplicateResults; // @synthesize duplicateResults=_duplicateResults;
@property(copy, nonatomic) NSArray *hiddenResults; // @synthesize hiddenResults=_hiddenResults;
@property(retain, nonatomic) _CPSearchResultForFeedback *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (void)addDuplicateResults:(id)arg1;
- (void)clearDuplicateResults;
- (id)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (void)addHiddenResults:(id)arg1;
- (void)clearHiddenResults;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

