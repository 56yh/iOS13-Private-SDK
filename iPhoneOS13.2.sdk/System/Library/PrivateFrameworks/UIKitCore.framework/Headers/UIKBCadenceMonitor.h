//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIKBRTRecognizerAveragingRuleProtocol-Protocol.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIKBCadenceMonitor : NSObject <_UIKBRTRecognizerAveragingRuleProtocol>
{
    _Bool _isUserTyping;
    float _cadence;
    float _confidence;
    float _typingAvg;
    int _touchCount;
    double _gapAvg;
    double _prevTouchDown;
    UIDelayedAction *_touchLogTimer;
}

@property(retain, nonatomic) UIDelayedAction *touchLogTimer; // @synthesize touchLogTimer=_touchLogTimer;
@property(nonatomic) int touchCount; // @synthesize touchCount=_touchCount;
@property(nonatomic) double prevTouchDown; // @synthesize prevTouchDown=_prevTouchDown;
@property(nonatomic) double gapAvg; // @synthesize gapAvg=_gapAvg;
@property(nonatomic) float typingAvg; // @synthesize typingAvg=_typingAvg;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) float cadence; // @synthesize cadence=_cadence;
@property(nonatomic) _Bool isUserTyping; // @synthesize isUserTyping=_isUserTyping;
- (id)init;
- (void)reset;
- (void)addTypingTouchTime:(double)arg1;
- (void)logUserTyping:(id)arg1;
- (void)typingCadence:(double)arg1;
- (void)updateConfidenceWithGap:(double)arg1;
- (id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2;
- (id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2;

@end

