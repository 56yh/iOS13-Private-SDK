//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class RBAssertion, RBAssertionManagerEventQueue, RBSProcessIdentity;

@protocol RBAssertionManagerQueueDelegate 
- (double)eventQueue:(RBAssertionManagerEventQueue *)arg1 remainingRuntimeForProcessIdentity:(RBSProcessIdentity *)arg2;
- (double)eventQueue:(RBAssertionManagerEventQueue *)arg1 startTimeForAssertion:(RBAssertion *)arg2;
- (void)eventQueue:(RBAssertionManagerEventQueue *)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(RBSProcessIdentity *)arg2 expirationTime:(double)arg3;
- (void)eventQueue:(RBAssertionManagerEventQueue *)arg1 handleWarningEventForAssertion:(RBAssertion *)arg2;
- (void)eventQueue:(RBAssertionManagerEventQueue *)arg1 handleInvalidationEventForAssertion:(RBAssertion *)arg2;
@end

