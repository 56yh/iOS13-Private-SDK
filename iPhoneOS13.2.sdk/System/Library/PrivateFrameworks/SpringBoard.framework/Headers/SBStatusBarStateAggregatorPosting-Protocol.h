//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBStatusBarStateAggregator;

@protocol SBStatusBarStateAggregatorPosting 
- (void)statusBarStateAggregatorDidFinishPost:(SBStatusBarStateAggregator *)arg1 withData:(const CDStruct_0942cde0 *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(SBStatusBarStateAggregator *)arg1 didUpdateNonItemData:(const CDStruct_0942cde0 *)arg2;
- (void)statusBarStateAggregator:(SBStatusBarStateAggregator *)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const CDStruct_0942cde0 *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(SBStatusBarStateAggregator *)arg1;

@optional
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(SBStatusBarStateAggregator *)arg1;
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(SBStatusBarStateAggregator *)arg1;
@end

