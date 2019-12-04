//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/AFClockAlarmListening-Protocol.h>
#import <SiriActivation/AFClockTimerListening-Protocol.h>

@class AFClockAlarmObserver, AFClockTimerObserver, CMMotionActivityManager, FBSDisplayLayoutMonitor, NSString, SASLockStateMonitor;
@protocol OS_dispatch_semaphore;

@interface SASMyriadController : NSObject <AFClockAlarmListening, AFClockTimerListening>
{
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;
    CMMotionActivityManager *_activityManager;
    _Bool _isLifted;
    double _liftEndTime;
    _Bool _isLocked;
    SASLockStateMonitor *_lockStateMonitor;
    FBSDisplayLayoutMonitor *_displayMonitor;
    double _raiseToWakeTime;
    struct {
        AFClockAlarmObserver *alarmObserver;
        AFClockTimerObserver *timerObserver;
        _Bool isAlarmFiring;
        _Bool isTimerFiring;
    } _mobileClockObserver;
    _Bool _canceledByMyriad;
}

+ (id)currentController;
@property(nonatomic) _Bool canceledByMyriad; // @synthesize canceledByMyriad=_canceledByMyriad;
- (void)_handleCMMotionActivity:(id)arg1;
- (void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;
- (void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2;
- (void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2;
- (void)clockAlarmObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;
- (void)clockAlarmObserver:(id)arg1 alarmDidDismiss:(id)arg2;
- (void)clockAlarmObserver:(id)arg1 alarmDidFire:(id)arg2;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (void)activateForInTaskRequest:(_Bool)arg1 isVisible:(_Bool)arg2;
- (_Bool)activateForRequest:(id)arg1 visible:(_Bool)arg2;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
