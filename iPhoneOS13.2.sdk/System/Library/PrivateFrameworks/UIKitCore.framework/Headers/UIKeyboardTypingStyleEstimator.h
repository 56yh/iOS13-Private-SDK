//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardTypingStyleEstimator : NSObject
{
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
    id <UIKeyboardTypingStyleEstimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <UIKeyboardTypingStyleEstimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)currentTypingStyleEstimation;
- (void)tapTypedKey;
- (void)endedContinuousPath;
- (void)beganContinuousPath;
- (void)_setTypingStyleEstimation:(unsigned long long)arg1;

@end

