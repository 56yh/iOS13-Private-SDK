//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate
{
    NSArray *_properties;
}

@property(readonly, copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (id)description;
- (_Bool)isCompatibleWithPredicate:(id)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;

@end

