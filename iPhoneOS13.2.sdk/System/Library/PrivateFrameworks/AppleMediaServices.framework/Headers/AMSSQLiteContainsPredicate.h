//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>



@class AMSSQLiteQuery, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate <NSCopying>
{
    _Bool _negative;
    AMSSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) AMSSQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

