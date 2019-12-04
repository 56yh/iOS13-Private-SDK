//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, SBFInfiniteImpulseResponseFilter;

@interface SBFMotionManager : NSObject
{
    double _x;
    double _y;
    double _z;
    CDStruct_91d2e2b9 _attitude;
    double _roll;
    double _pitch;
    double _yaw;
    double _coefficient;
    double _threshold;
    unsigned long long _referenceFrame;
    CMMotionManager *_motionManager;
    _Bool _motionManagerPaused;
    SBFInfiniteImpulseResponseFilter *_motionFilterX;
    SBFInfiniteImpulseResponseFilter *_motionFilterY;
    SBFInfiniteImpulseResponseFilter *_motionFilterZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAX;
    SBFInfiniteImpulseResponseFilter *_motionFilterAY;
    SBFInfiniteImpulseResponseFilter *_motionFilterAZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAW;
    SBFInfiniteImpulseResponseFilter *_motionFilterRoll;
    SBFInfiniteImpulseResponseFilter *_motionFilterPitch;
    SBFInfiniteImpulseResponseFilter *_motionFilterYaw;
}

- (void)stopDeviceAccelerometerUpdates;
- (void)pauseDeviceMotionUpdates;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceAccelerometerUpdates;
- (void)startDeviceMotionUpdates;
- (void)_createFilters;
- (_Bool)zeroMovementSinceLastFrame;
- (_Bool)isDeviceMotionAvailable;
- (void)createMotionManager;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double roll;
@property(readonly, nonatomic) CDStruct_91d2e2b9 attitude;
@property(readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterZ;
@property(readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterY;
@property(readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterX;
@property(readonly, nonatomic) double z;
@property(readonly, nonatomic) double y;
@property(readonly, nonatomic) double x;
@property(nonatomic) double deviceMotionUpdateInterval;
@property(nonatomic) double accelerometerUpdateInterval;
- (id)initWithCoefficient:(double)arg1 threshold:(double)arg2;
- (id)initWithCoefficient:(double)arg1;
- (id)init;

@end

