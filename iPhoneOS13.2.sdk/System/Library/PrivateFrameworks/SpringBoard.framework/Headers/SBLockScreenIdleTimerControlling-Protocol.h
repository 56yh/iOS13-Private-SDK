//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;
@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerCoordinating;

@protocol SBLockScreenIdleTimerControlling 
@property(nonatomic) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator;

@optional
- (void)removeIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)addIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (id <SBFIdleTimerBehaviorProviding>)requestIdleTimerBehaviorForReason:(NSString *)arg1;
@end

