//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class _ICProactiveTrigger, _ICSearchContext;

@protocol _ICPredictionSourcing
- (void)hibernate;
- (void)warmUp;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(void (^)(NSArray *))arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(void (^)(NSArray *))arg2;
- (void)predictedItemsWithProactiveTrigger:(_ICProactiveTrigger *)arg1 searchContext:(_ICSearchContext *)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
@end

