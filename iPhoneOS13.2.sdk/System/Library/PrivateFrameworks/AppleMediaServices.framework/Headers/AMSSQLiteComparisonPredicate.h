//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>



__attribute__((visibility("hidden")))
@interface AMSSQLiteComparisonPredicate : AMSSQLitePropertyPredicate <NSCopying>
{
    long long _comparisonType;
    id _value;
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

