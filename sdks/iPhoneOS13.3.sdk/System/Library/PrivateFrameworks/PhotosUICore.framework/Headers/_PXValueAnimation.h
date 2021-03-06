//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PXValueAnimation : NSObject
{
    double _duration;
    double _startTime;
    double _currentMediaTime;
    struct _PXValueAnimationSpec _spec;
}

@property(nonatomic) double currentMediaTime; // @synthesize currentMediaTime=_currentMediaTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) struct _PXValueAnimationSpec spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) BOOL completed;
@property(readonly, nonatomic) double currentValue;
- (double)remainingTime;
- (double)elapsedTime;
- (id)description;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;
- (id)init;

@end

