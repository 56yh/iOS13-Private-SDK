//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTMorpherWeightThresholdState : NSObject
{
    _Bool _isAnimating;
    _Bool _isFadingOutAnimation;
    float _currentValue;
    float _target;
    double _t0;
}

@property(nonatomic) float target; // @synthesize target=_target;
@property(nonatomic) float currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double t0; // @synthesize t0=_t0;
@property(nonatomic) _Bool isFadingOutAnimation; // @synthesize isFadingOutAnimation=_isFadingOutAnimation;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;

@end

