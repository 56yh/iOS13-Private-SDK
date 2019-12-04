//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssetViewer/ASVAROnboardingUIUpdateManagerDelegate-Protocol.h>

@class ARSession, ASVGlyphRenderer, ASVRoundedButton, ASVUpdateManager, NSLayoutConstraint, NSString, SensorInterceptor, UILabel, UISelectionFeedbackGenerator;
@protocol ASVAROnboardingUIViewDelegate;

@interface ASVAROnboardingUIView : UIView <ASVAROnboardingUIUpdateManagerDelegate>
{
    unsigned long long _currentTrackingState;
    unsigned long long _previousTrackingState;
    unsigned long long _animationState;
    UIView *_backgroundView;
    UIView *_moveDeviceTextContainer;
    UILabel *_moveDeviceText;
    UILabel *_relocalizeText;
    ASVRoundedButton *_resetButton;
    ARSession *_session;
    SensorInterceptor *_motionSensorInterceptor;
    ASVUpdateManager *_updateManager;
    ASVGlyphRenderer *_renderer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSLayoutConstraint *_resetButtonBottomLayoutConstraint;
    long long _currentResetButtonOrientation;
    // Error parsing type: [10], name: _recentPositions
    float _recentAccelerationValues[30];
    // Error parsing type: , name: _initialCameraTranslation
    // Error parsing type: , name: _initialCameraRotation
    // Error parsing type: , name: _lastCameraTranslation
    // Error parsing type: , name: _lastCameraRight
    // Error parsing type: , name: _currentCameraTranslation
    // Error parsing type: , name: _rotationStartCameraTranslation
    // Error parsing type: , name: _rotationStartCameraRight
    double _showUITime;
    double _lastUpdateTime;
    double _startShutdownTime;
    double _currentStateTime;
    double _lastAccelOverThresholdTime;
    float _lastOrientationRotation;
    float _accelerationBaseline;
    float _accelerationThreshold;
    float _currentCubeAngle;
    _Bool _initialTransformSet;
    _Bool _isAnimating;
    _Bool _isRelocalizing;
    _Bool _accelerationBaselineCalculated;
    _Bool _hasDisplayedPreviously;
    int _currentPositionIndex;
    int _accelOverThresholdCount;
    int _currentAccelerationIndex;
    _Bool _allowRotateAutoDismiss;
    _Bool _showResumeTextAfterFirstDisplay;
    _Bool _showAllAnimationStatesBeforeHiding;
    _Bool _showAnimatedUI;
    _Bool _interceptARKitSensorData;
    _Bool _enableHapticFeedback;
    float _resetButtonLandscapeVerticalOffset;
    float _resetButtonPortraitVerticalOffset;
    float _moveDistanceThreshold;
    id <ASVAROnboardingUIViewDelegate> _delegate;
    double _inactiveTimeBeforeShowUI;
    double _minimumAnimationTime;
}

@property(nonatomic) _Bool enableHapticFeedback; // @synthesize enableHapticFeedback=_enableHapticFeedback;
@property(nonatomic) _Bool interceptARKitSensorData; // @synthesize interceptARKitSensorData=_interceptARKitSensorData;
@property(nonatomic) _Bool showAnimatedUI; // @synthesize showAnimatedUI=_showAnimatedUI;
@property(nonatomic) _Bool showAllAnimationStatesBeforeHiding; // @synthesize showAllAnimationStatesBeforeHiding=_showAllAnimationStatesBeforeHiding;
@property(nonatomic) float moveDistanceThreshold; // @synthesize moveDistanceThreshold=_moveDistanceThreshold;
@property(nonatomic) double minimumAnimationTime; // @synthesize minimumAnimationTime=_minimumAnimationTime;
@property(nonatomic) double inactiveTimeBeforeShowUI; // @synthesize inactiveTimeBeforeShowUI=_inactiveTimeBeforeShowUI;
@property(nonatomic) _Bool showResumeTextAfterFirstDisplay; // @synthesize showResumeTextAfterFirstDisplay=_showResumeTextAfterFirstDisplay;
@property(nonatomic) _Bool allowRotateAutoDismiss; // @synthesize allowRotateAutoDismiss=_allowRotateAutoDismiss;
@property(nonatomic) float resetButtonPortraitVerticalOffset; // @synthesize resetButtonPortraitVerticalOffset=_resetButtonPortraitVerticalOffset;
@property(nonatomic) float resetButtonLandscapeVerticalOffset; // @synthesize resetButtonLandscapeVerticalOffset=_resetButtonLandscapeVerticalOffset;
@property(nonatomic) __weak id <ASVAROnboardingUIViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasHomeButton;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)buttonPress:(id)arg1;
- (void)drawInDrawable:(id)arg1 withCommandBuffer:(id)arg2 timeDelta:(double)arg3;
- (void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2;
- (void)resizeForDrawable:(id)arg1;
- (void)hideResetButton:(double)arg1;
- (void)hideOrientationUI:(double)arg1;
- (_Bool)isShowingRelocalizeUI;
- (_Bool)isShowingMoveDeviceUI;
- (void)showRelocalizeUI:(double)arg1;
- (void)updateMoveDeviceText:(id)arg1 fadeText:(_Bool)arg2;
- (void)showMoveDeviceUI:(double)arg1;
- (_Bool)isShowingBackground;
- (void)hideBackground:(double)arg1;
- (void)showBackground:(double)arg1;
- (void)hideAll:(double)arg1;
- (void)updatePositionData:(id)arg1 currentTime:(double)arg2;
- (void)resetAccelerationBaseline;
- (float)calculateAverageAcceleration;
- (void)populateRecentPositions: /* Error: Ran out of types for this method. */;
-     // Error parsing type: 16@0:8, name: calculateAveragePosition
- (void)update:(double)arg1;
- (void)clampToNearestQuarterRotation;
-     // Error parsing type: {?=[4]}40@0:8f16f20f24f28f32f36, name: ortho2d:right:bottom:top:near:far:
-     // Error parsing type: {?=[4]}64@0:8163248, name: lookAt:center:up:
-     // Error parsing type: {?=[4]}32@0:8f16f20f24f28, name: perspective_fov:aspect:near:far:
- (float)radians:(float)arg1;
- (void)shutdown;
- (void)relocalize;
- (void)activate;
- (void)prepare;
- (void)hide;
- (void)orientationChanged;
- (void)updateConstraints;
- (void)createConstraintsForCurrentDeviceOrientation;
- (void)layoutSubviews;
- (void)updateMetalLayer;
- (void)restoreSensorDelegates;
- (void)interceptSensorDelegates;
- (void)shutdownRenderer;
- (void)startupRenderer;
- (void)cleanupAnimatedUI;
- (void)prepareAnimatedUI;
- (void)prepareOnboardingUI;
- (void)updateMoveText:(_Bool)arg1;
- (void)updateResetButtonWithFadeIn:(_Bool)arg1;
- (void)hideOnboardingUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak ARSession *session;
- (_Bool)isRelocalizing;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)setAnimationState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animationState;
@property(nonatomic) unsigned long long state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

