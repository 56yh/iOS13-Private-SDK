//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPResultSectionForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>
{
    int _knownBundleIdentifier;
    NSArray *_results;
    NSString *_identifier;
    double _rankingScore;
    NSData *_fallbackResultSection;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

@property(readonly, nonatomic) unsigned long long whichBundleid; // @synthesize whichBundleid=_whichBundleid;
@property(copy, nonatomic) NSData *fallbackResultSection; // @synthesize fallbackResultSection=_fallbackResultSection;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) int knownBundleIdentifier; // @synthesize knownBundleIdentifier=_knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (void)clearBundleid;
- (id)initWithFacade:(id)arg1;
- (id)feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

