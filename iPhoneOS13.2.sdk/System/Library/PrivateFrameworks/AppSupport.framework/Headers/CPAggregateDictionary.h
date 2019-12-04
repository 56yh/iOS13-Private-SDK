//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPAggregateDictionary : NSObject
{
}

+ (id)sharedAggregateDictionary;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)decrementKey:(id)arg1;
- (void)incrementKey:(id)arg1;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)clearScalarKey:(id)arg1;
- (int)commit;
- (void)significantTimeChanged;

@end

