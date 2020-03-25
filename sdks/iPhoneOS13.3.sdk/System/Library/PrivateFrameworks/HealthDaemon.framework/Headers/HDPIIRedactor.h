//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDataDetector, NSRegularExpression, NSSet;

@interface HDPIIRedactor : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_names;
    NSDataDetector *_dataDetectorAll;
    NSDataDetector *_dataDetectorSkipLink;
    NSDataDetector *_dataDetectorSkipPhoneNumbers;
    NSDataDetector *_dataDetectorSkipLinkSkipPhoneNumbers;
    NSRegularExpression *_fullWordRegex;
    NSRegularExpression *_SSNRegex;
    NSRegularExpression *_longNumberRegex;
}

+ (BOOL)supportsSecureCoding;
+ (id)_longNumberRegexWithError:(id )arg1;
+ (id)_redactFullWordRegexWithError:(id )arg1;
+ (void)_addNames:(id)arg1 toSet:(id)arg2;
+ (void)_addName:(id)arg1 toSet:(id)arg2;
+ (void)_addNamesFromMeContact:(id)arg1 toSet:(id)arg2;
+ (id)_meContactNameKeys;
+ (id)_namesToRedactWithProfile:(id)arg1 error:(id )arg2;
+ (id)_SSNRegularExpressionWithError:(id )arg1;
+ (id)redactorWithProfile:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSRegularExpression *longNumberRegex; // @synthesize longNumberRegex=_longNumberRegex;
@property(readonly, nonatomic) NSRegularExpression *SSNRegex; // @synthesize SSNRegex=_SSNRegex;
@property(readonly, nonatomic) NSRegularExpression *fullWordRegex; // @synthesize fullWordRegex=_fullWordRegex;
@property(readonly, nonatomic) NSDataDetector *dataDetectorSkipLinkSkipPhoneNumbers; // @synthesize dataDetectorSkipLinkSkipPhoneNumbers=_dataDetectorSkipLinkSkipPhoneNumbers;
@property(readonly, nonatomic) NSDataDetector *dataDetectorSkipPhoneNumbers; // @synthesize dataDetectorSkipPhoneNumbers=_dataDetectorSkipPhoneNumbers;
@property(readonly, nonatomic) NSDataDetector *dataDetectorSkipLink; // @synthesize dataDetectorSkipLink=_dataDetectorSkipLink;
@property(readonly, nonatomic) NSDataDetector *dataDetectorAll; // @synthesize dataDetectorAll=_dataDetectorAll;
@property(readonly, nonatomic) NSSet *names; // @synthesize names=_names;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)_redactLongNumbersFromString:(id)arg1;
- (NSUInteger)_redactNamesFromString:(id)arg1;
- (NSUInteger)_redactSSNsFromString:(id)arg1;
- (NSUInteger)_redactDataDetectorTypesFromString:(id)arg1 options:(NSUInteger)arg2;
- (id)redactedStringWithString:(id)arg1 options:(NSUInteger)arg2 redactedCount:(NSUInteger )arg3;
- (id)redactedStringWithString:(id)arg1 options:(NSUInteger)arg2;
- (id)redactedStringWithString:(id)arg1 redactedCount:(NSUInteger )arg2;
- (id)redactedStringWithString:(id)arg1;

@end
