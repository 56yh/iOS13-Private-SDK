//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPPunchoutForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPPunchoutForFeedback : PBCodable <_CPPunchoutForFeedback, NSSecureCoding>
{
    int _knownBundleIdentifier;
    NSString *_name;
    NSString *_label;
    NSArray *_urls;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

@property(readonly, nonatomic) unsigned long long whichBundleid; // @synthesize whichBundleid=_whichBundleid;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
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
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(id)arg1;
- (void)clearUrls;
- (void)clearBundleid;
- (id)initWithFacade:(id)arg1;
- (id)feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

