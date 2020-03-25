//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SACFPEXQuery : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)queryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)query;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *socialLabelType;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *queryTimeOut;
@property(nonatomic) long long queryLimit;
@property(copy, nonatomic) NSArray *people;
@property(copy, nonatomic) NSString *localeIdentifier;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *criteriaType;
@property(copy, nonatomic) NSString *criteriaTimeType;
@property(copy, nonatomic) NSString *criteriaSubType;
@property(copy, nonatomic) NSString *criteriaSemanticTag;
@property(copy, nonatomic) NSArray *criteriaFields;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
