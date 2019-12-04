//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, TUAnimationPointFunction, TUAnimationSizeFunction;

@interface TUAnimationRectFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _speed;
    TUAnimationPointFunction *_originFunction;
    TUAnimationSizeFunction *_sizeFunction;
    struct CGRect _startValue;
    struct CGRect _endValue;
}

@property(retain, nonatomic) TUAnimationSizeFunction *sizeFunction; // @synthesize sizeFunction=_sizeFunction;
@property(retain, nonatomic) TUAnimationPointFunction *originFunction; // @synthesize originFunction=_originFunction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) struct CGRect endValue; // @synthesize endValue=_endValue;
@property(nonatomic) struct CGRect startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void)_reloadFunctions;
- (struct CGRect)solveForTime:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 startRect:(struct CGRect)arg2 endRect:(struct CGRect)arg3 speed:(double)arg4;

@end

