//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDWorkoutSessionController-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionStateController-Protocol.h>

@class HDDefaultWorkoutSessionController;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionStateController;

@interface HDFirstPartyWorkoutSessionController : NSObject <HDWorkoutSessionController, HDWorkoutSessionStateController>
{
    id <HDWorkoutSessionStateController> _sessionStateController;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    long long _currentState;
}

+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;
+ (id)recoveryIdentifier;
- (_Bool)_isAutoPauseEnabled;
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (_Bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (void)generateMetadata:(id)arg1;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)finishAggregationWithDate:(id)arg1;
- (void)finish;
- (void)endHeartRateRecovery;
- (void)autoResumeWithDate:(id)arg1;
- (void)autoPauseWithDate:(id)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)endWithError:(id *)arg1;
- (_Bool)stopActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)startActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)prepareWithError:(id *)arg1;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;

@end

