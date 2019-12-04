//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIPanGestureRecognizer, UIScrollView, _UIFocusEngineJoystickGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRequest : NSObject
{
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGesture;
    NSArray *_pressGestures;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGesture;
    long long _scrollingType;
    unsigned long long _heading;
    unsigned long long _allowedHeadings;
    id /* block */ _didBeginCallback;
    id /* block */ _didEndCallback;
    struct CGPoint _velocity;
}

@property(copy, nonatomic) id /* block */ didEndCallback; // @synthesize didEndCallback=_didEndCallback;
@property(copy, nonatomic) id /* block */ didBeginCallback; // @synthesize didBeginCallback=_didBeginCallback;
@property(nonatomic) unsigned long long allowedHeadings; // @synthesize allowedHeadings=_allowedHeadings;
@property(nonatomic) unsigned long long heading; // @synthesize heading=_heading;
@property(nonatomic) long long scrollingType; // @synthesize scrollingType=_scrollingType;
@property(retain, nonatomic) _UIFocusEngineJoystickGestureRecognizer *joystickGesture; // @synthesize joystickGesture=_joystickGesture;
@property(retain, nonatomic) NSArray *pressGestures; // @synthesize pressGestures=_pressGestures;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;

@end

