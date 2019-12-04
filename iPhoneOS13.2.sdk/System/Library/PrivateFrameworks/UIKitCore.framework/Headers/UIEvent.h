//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, UIEventEnvironment, UIScreen;

@interface UIEvent : NSObject
{
    struct __GSEvent *_gsEvent;
    struct __IOHIDEvent *_hidEvent;
    UIScreen *_cachedScreen;
    NSMutableSet *_eventObservers;
    double _timestamp;
    UIEventEnvironment *_eventEnvironment;
    double __initialTouchTimestamp;
}

@property(readonly, nonatomic) double _initialTouchTimestamp; // @synthesize _initialTouchTimestamp=__initialTouchTimestamp;
@property(nonatomic) __weak UIEventEnvironment *eventEnvironment; // @synthesize eventEnvironment=_eventEnvironment;
@property(nonatomic, setter=_setTimestamp:) double timestamp; // @synthesize timestamp=_timestamp;
- (void)_wasDeliveredToGestureRecognizers;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (void)_removeEventObserver:(id)arg1;
- (void)_addEventObserver:(id)arg1;
- (id)_eventObservers;
- (double)_wheelVelocity;
- (_Bool)isKeyDown;
- (void)_cleanupAfterDispatch;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (id)_screen;
- (id)_initWithEnvironment:(id)arg1;
- (id)_init;
- (_Bool)_isTouchRoutingPolicyBased;
- (struct CGPoint)_digitizerLocation;
- (_Bool)_isKeyDown;
- (unsigned long long)_clickCount;
- (long long)_modifierFlags;
- (id)_unmodifiedInput;
- (id)_modifiedInput;
- (id)_triggeringPhysicalButton;
- (unsigned long long)_focusHeading;
- (long long)_moveDirection;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (struct __IOHIDEvent *)_hidEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (struct __GSEvent *)_gsEvent;
- (void)_setGSEvent:(struct __GSEvent *)arg1;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)predictedTouchesForTouch:(id)arg1;
- (id)coalescedTouchesForTouch:(id)arg1;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
@property(readonly, nonatomic) NSSet *allTouches;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
- (void)dealloc;

@end

