//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIScrollDynamics.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics
{
    double _durationUntilStop;
    double _durationUntilStopIgnoringRubberbanding;
    struct CGSize _absDisplacementVectorIgnoringRubberbanding;
    double _linearDisplacementIgnoringRubberbanding;
    struct CGPoint _destinationIgnoringRubberbanding;
    double _durationUntilRubberband;
    struct CGPoint _initialRubberbandingOrigin;
    struct CGVector _initialRubberbandingVelocity;
    double _decelerationRate;
}

- (_Bool)isRubberBandingAfterDuration:(double)arg1;
- (struct CGPoint)positionAfterDuration:(double)arg1;
- (struct CGVector)velocityAfterDuration:(double)arg1;
- (double)speedAfterDuration:(double)arg1;
- (double)durationUntilStop;
- (void)calculateToReachDecelerationTarget;
- (void)calculateDecelerationTarget;
- (id)init;

@end

