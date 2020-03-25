//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

@class VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapGestureCameraController : VKGestureCameraBehavior
{
    CGPoint _panLastScreenPoint;
    BOOL _isPitchIncreasing;
    double _beganPitch;
    VKTimedAnimation *_zoomAnimation;
}

- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1 delta:(Matrix_6e1d3589)arg2;
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;
- (BOOL)isPitchIncreasing;
- (void)updatePitch:(CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(CGPoint)arg2;
- (void)updatePan:(CGPoint)arg1 lastScreenPoint:(CGPoint)arg2;
- (void)updateZoom:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end
