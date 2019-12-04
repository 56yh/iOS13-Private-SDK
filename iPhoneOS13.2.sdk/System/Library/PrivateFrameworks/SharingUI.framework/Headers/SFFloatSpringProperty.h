//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewFloatAnimatableProperty.h>

#import <SharingUI/UIViewSpringAnimationBehaviorDescribing-Protocol.h>

__attribute__((visibility("hidden")))
@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>
{
    double _dampingRatio;
    double _response;
    double _trackingDampingRatio;
    double _trackingResponse;
    _Bool _primed;
    _Bool _tracking;
}

+ (void)_withoutAnimation:(id /* block */)arg1;
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) _Bool primed; // @synthesize primed=_primed;
- (double)projectForTime:(double)arg1;
- (double)projectForDeceleration:(double)arg1;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
@property(nonatomic) double output;
@property(nonatomic) double input;
- (id)init;

@end

