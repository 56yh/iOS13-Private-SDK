//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUILParseableExpression : SADomainObject
{
}

+ (id)parseableExpressionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parseableExpression;
@property(copy, nonatomic) NSString *expressionString;
@property(retain, nonatomic) SADomainObject *context;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

