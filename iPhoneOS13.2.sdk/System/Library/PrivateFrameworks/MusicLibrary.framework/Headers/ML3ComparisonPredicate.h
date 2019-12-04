//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate
{
    _Bool _caseInsensitive;
    int _comparison;
    id _value;
    NSString *_treatNullAsString;
    NSString *_transformFunction;
}

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4 treatNullAsString:(id)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *transformFunction; // @synthesize transformFunction=_transformFunction;
@property(readonly, copy, nonatomic) NSString *treatNullAsString; // @synthesize treatNullAsString=_treatNullAsString;
@property(readonly, nonatomic) _Bool caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property(readonly, nonatomic) int comparison; // @synthesize comparison=_comparison;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)valueToBindForOperation:(long long)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)operator;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6;

@end

