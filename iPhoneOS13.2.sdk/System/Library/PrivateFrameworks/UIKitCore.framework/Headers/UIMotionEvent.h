//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class BKSAccelerometer, NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIEvent
{
    BKSAccelerometer *_motionAccelerometer;
    long long _subtype;
    int _shakeState;
    long long _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer *_idleTimer;
    _Bool _sentMotionBegan;
    float _lowPassState[10];
    unsigned long long _lowPassStateIndex;
    unsigned long long _highPassStateIndex;
    float _highPassState[2];
    int notifyToken;
}

@property(nonatomic) int shakeState; // @synthesize shakeState=_shakeState;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg1;
- (void)_enablePeakDetectionIfNecessary;
- (int)_shakeState;
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;
- (float)_lowPass:(float)arg1;
- (void)_resetLowPassState;
- (float)_highPass:(float)arg1;
- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)_idleTimerFired;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;
- (_Bool)_isDetectingMotionEvents;
- (_Bool)_detectWhenNotActive;
- (void)_updateAccelerometerEnabled;
- (void)_willSuspend;
- (void)_willResume;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (id)description;
- (void)_setSubtype:(long long)arg1;
- (long long)subtype;
- (long long)type;
- (void)dealloc;
- (id)_init;

@end

