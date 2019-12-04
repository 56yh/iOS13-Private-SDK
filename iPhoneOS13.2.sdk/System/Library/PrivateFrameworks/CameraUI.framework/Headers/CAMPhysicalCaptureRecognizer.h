//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSSet;

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer
{
    _Bool _suspended;
    NSSet *_activeButtons;
    long long _lastActiveButton;
    NSArray *_desiredButtons;
    long long _pressType;
}

@property(nonatomic) long long pressType; // @synthesize pressType=_pressType;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSArray *desiredButtons; // @synthesize desiredButtons=_desiredButtons;
@property(nonatomic) long long lastActiveButton; // @synthesize lastActiveButton=_lastActiveButton;
@property(copy, nonatomic) NSSet *activeButtons; // @synthesize activeButtons=_activeButtons;
- (long long)_captureButtonForPressType:(long long)arg1;
- (void)reset;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)_updateApplicationButtonStatus;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

