//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer
{
    NSMutableSet *_hu_activeTouches;
    double _currentSampleForceMultiplier;
    double _currentSampleTimestamp;
    double _overallForceMultiplierExcludingCurrentSample;
    double _touchStartTime;
}

@property(nonatomic) double touchStartTime; // @synthesize touchStartTime=_touchStartTime;
@property(nonatomic) double overallForceMultiplierExcludingCurrentSample; // @synthesize overallForceMultiplierExcludingCurrentSample=_overallForceMultiplierExcludingCurrentSample;
@property(nonatomic) double currentSampleTimestamp; // @synthesize currentSampleTimestamp=_currentSampleTimestamp;
@property(nonatomic) double currentSampleForceMultiplier; // @synthesize currentSampleForceMultiplier=_currentSampleForceMultiplier;
@property(readonly, nonatomic) NSMutableSet *hu_activeTouches; // @synthesize hu_activeTouches=_hu_activeTouches;
@property(readonly, nonatomic) double overallForceMultiplier;
@property(readonly, nonatomic) double currentForceMultiplier;
- (void)_logForceMultiplierSample;
- (void)_resetForceSamples;
- (double)_forceMultiplierIncludingCurrentSample;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
