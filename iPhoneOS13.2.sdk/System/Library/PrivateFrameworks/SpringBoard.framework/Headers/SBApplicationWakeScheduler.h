//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSDate, NSString, SBApplication;
@protocol BSTimer, SBApplicationWakeLifecycleHandling;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable>
{
    id <SBApplicationWakeLifecycleHandling> _lifecycleTracker;
    SBApplication *_application;
    _Bool _invalidated;
    id <BSTimer> _wakeTimer;
    id <BSTimer> _wakeSuspendTimer;
}

@property(retain, nonatomic) id <BSTimer> wakeSuspendTimer; // @synthesize wakeSuspendTimer=_wakeSuspendTimer;
@property(retain, nonatomic) id <BSTimer> wakeTimer; // @synthesize wakeTimer=_wakeTimer;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (id)_createPersistentTimerWithFireDate:(id)arg1 handler:(id /* block */)arg2;
- (id)_createTimerWithFireDate:(id)arg1 handler:(id /* block */)arg2;
- (id)_safelyScheduleTimerForDate:(id)arg1 persistent:(_Bool)arg2 handler:(id /* block */)arg3;
- (id)_expectedFireDateForTimer:(id)arg1;
- (void)_forceInvalidate;
- (id)suspensionDate;
- (void)invalidate;
- (void)endResumeIfAwoken;
- (void)wakeImmediately;
- (void)unschedule;
- (void)scheduleWakeForDate:(id)arg1;
@property(readonly, nonatomic) NSDate *scheduledDate;
- (void)dealloc;
- (id)_initWithLifecycleTracker:(id)arg1 forApplication:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

