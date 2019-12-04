//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface TUAnimationFloatFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _startValue;
    double _endValue;
    double _speed;
}

@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double endValue; // @synthesize endValue=_endValue;
@property(nonatomic) double startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (double)solveForTime:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4;
- (id)init;

@end

