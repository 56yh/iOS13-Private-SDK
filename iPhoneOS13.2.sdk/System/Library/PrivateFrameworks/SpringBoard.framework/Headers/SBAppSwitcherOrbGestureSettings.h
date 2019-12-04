//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBAppSwitcherOrbGestureAnimationSettings;

@interface SBAppSwitcherOrbGestureSettings : PTSettings
{
    _Bool _useOrbGesture;
    _Bool _canPop;
    _Bool _forceDrivesInitialProgress;
    _Bool _canPlayInitialHaptic;
    _Bool _canPlayCommitHaptic;
    double _orbGestureRegionMax;
    double _maxIconScrollProgressAllowed;
    double _appToAppCurveMinimum;
    double _homeToAppCurveMinimum;
    double _minPanTranslation;
    double _maxPopPanTranslation;
    double _additionalThrowDisplacement;
    double _commitToPreviousAppTranslation;
    double _commitToNextAppTranslation;
    double _dimmingValue;
    double _forcePeekAdjustApex;
    double _forceAdjustMax;
    double _maxAverageBreathingVelocity;
    double _maxBreathingVelocityInterval;
    SBAppSwitcherOrbGestureAnimationSettings *_animationSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAppSwitcherOrbGestureAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property _Bool canPlayCommitHaptic; // @synthesize canPlayCommitHaptic=_canPlayCommitHaptic;
@property _Bool canPlayInitialHaptic; // @synthesize canPlayInitialHaptic=_canPlayInitialHaptic;
@property _Bool forceDrivesInitialProgress; // @synthesize forceDrivesInitialProgress=_forceDrivesInitialProgress;
@property _Bool canPop; // @synthesize canPop=_canPop;
@property double maxBreathingVelocityInterval; // @synthesize maxBreathingVelocityInterval=_maxBreathingVelocityInterval;
@property double maxAverageBreathingVelocity; // @synthesize maxAverageBreathingVelocity=_maxAverageBreathingVelocity;
@property double forceAdjustMax; // @synthesize forceAdjustMax=_forceAdjustMax;
@property double forcePeekAdjustApex; // @synthesize forcePeekAdjustApex=_forcePeekAdjustApex;
@property double dimmingValue; // @synthesize dimmingValue=_dimmingValue;
@property double commitToNextAppTranslation; // @synthesize commitToNextAppTranslation=_commitToNextAppTranslation;
@property double commitToPreviousAppTranslation; // @synthesize commitToPreviousAppTranslation=_commitToPreviousAppTranslation;
@property double additionalThrowDisplacement; // @synthesize additionalThrowDisplacement=_additionalThrowDisplacement;
@property double maxPopPanTranslation; // @synthesize maxPopPanTranslation=_maxPopPanTranslation;
@property double minPanTranslation; // @synthesize minPanTranslation=_minPanTranslation;
@property double homeToAppCurveMinimum; // @synthesize homeToAppCurveMinimum=_homeToAppCurveMinimum;
@property double appToAppCurveMinimum; // @synthesize appToAppCurveMinimum=_appToAppCurveMinimum;
@property double maxIconScrollProgressAllowed; // @synthesize maxIconScrollProgressAllowed=_maxIconScrollProgressAllowed;
@property double orbGestureRegionMax; // @synthesize orbGestureRegionMax=_orbGestureRegionMax;
@property _Bool useOrbGesture; // @synthesize useOrbGesture=_useOrbGesture;
- (double)valueAlongDefaultForcePressCurveWithMinY:(double)arg1 progress:(double)arg2 fromHomeScreen:(_Bool)arg3;
- (void)setDefaultValues;

@end

