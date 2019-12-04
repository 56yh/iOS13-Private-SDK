//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_items;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;
- (void)removeAllValues;
- (id)lastValue;
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) long long count;
- (void)addValuesFromHistory:(id)arg1;
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;

@end

