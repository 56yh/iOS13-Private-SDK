//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SAUILParseableExpression;

@interface SAUILParsedExpression : SADomainObject
{
}

+ (id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parsedExpression;
@property(copy, nonatomic) NSString *parsedOutput;
@property(retain, nonatomic) SAUILParseableExpression *parseableExpression;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

