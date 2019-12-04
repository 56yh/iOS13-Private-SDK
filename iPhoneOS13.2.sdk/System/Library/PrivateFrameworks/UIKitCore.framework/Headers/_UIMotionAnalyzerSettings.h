//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings
{
    _Bool _showIdleIndicator;
    _Bool _jumpEnabled;
    _Bool _playJumpSound;
    _Bool _directionalLockEnabled;
    _Bool _showDirectionalLockIndicators;
    _Bool _referenceShiftEnabled;
    double _inputSmoothingFactor;
    double _referenceShiftSpeed;
    double _idleLeeway;
    double _delayBeforeIdle;
    double _jumpThreshold;
    double _directionalLockThreshold;
    double _directionalLockStickiness;
    double _directionalLockSharpness;
    double _referenceShiftDistanceDependence;
}

@property double referenceShiftDistanceDependence; // @synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence;
@property _Bool referenceShiftEnabled; // @synthesize referenceShiftEnabled=_referenceShiftEnabled;
@property _Bool showDirectionalLockIndicators; // @synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators;
@property double directionalLockSharpness; // @synthesize directionalLockSharpness=_directionalLockSharpness;
@property double directionalLockStickiness; // @synthesize directionalLockStickiness=_directionalLockStickiness;
@property double directionalLockThreshold; // @synthesize directionalLockThreshold=_directionalLockThreshold;
@property _Bool directionalLockEnabled; // @synthesize directionalLockEnabled=_directionalLockEnabled;
@property _Bool playJumpSound; // @synthesize playJumpSound=_playJumpSound;
@property double jumpThreshold; // @synthesize jumpThreshold=_jumpThreshold;
@property _Bool jumpEnabled; // @synthesize jumpEnabled=_jumpEnabled;
@property _Bool showIdleIndicator; // @synthesize showIdleIndicator=_showIdleIndicator;
@property double delayBeforeIdle; // @synthesize delayBeforeIdle=_delayBeforeIdle;
@property double idleLeeway; // @synthesize idleLeeway=_idleLeeway;
@property double referenceShiftSpeed; // @synthesize referenceShiftSpeed=_referenceShiftSpeed;
@property double inputSmoothingFactor; // @synthesize inputSmoothingFactor=_inputSmoothingFactor;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setDefaultValues;

@end

