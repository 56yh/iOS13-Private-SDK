//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSString;

@interface HMIPIDController : HMFObject <HMFTimerDelegate>
{
    float _kp;
    float _ki;
    float _ts;
    float _target;
    float _integrator;
    float _integratorMin;
    float _integratorMax;
    float _engageDelta;
    int _controlEffortMin;
    int _controlEffortMax;
    long long _controlEffort;
    HMFTimer *_tick;
}

+ (id)sharedInstance;
@property(readonly) HMFTimer *tick; // @synthesize tick=_tick;
@property(readonly) long long controlEffort; // @synthesize controlEffort=_controlEffort;
- (void)suspendMonitoring;
- (void)resumeMonitoring;
- (void)timerDidFire:(id)arg1;
- (void)setControlEffort:(long long)arg1;
- (void)updateControlEffortFromValue:(float)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

