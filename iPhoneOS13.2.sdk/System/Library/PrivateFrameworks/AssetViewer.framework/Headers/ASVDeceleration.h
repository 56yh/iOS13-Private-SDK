//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASVDeceleration : NSObject
{
    _Bool _isDecelerating;
    float _velocity;
    float _minEndDelta;
    double _startTime;
    double _currentTime;
    double _previousTime;
    long long _frameCount;
}

@property(nonatomic) _Bool isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) double previousTime; // @synthesize previousTime=_previousTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) float minEndDelta; // @synthesize minEndDelta=_minEndDelta;
@property(nonatomic) float velocity; // @synthesize velocity=_velocity;
- (float)decelerationDelta;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2;

@end

