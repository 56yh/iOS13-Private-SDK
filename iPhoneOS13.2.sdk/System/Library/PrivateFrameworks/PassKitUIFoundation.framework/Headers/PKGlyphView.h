//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKFingerprintGlyphViewDelegate-Protocol.h>

@class CALayer, LAUICheckmarkLayer, NSMutableArray, NSObject, NSString, PKFingerprintGlyphView, PKMicaLayer, PKPhoneGlyphLayer, UIColor;
@protocol OS_dispatch_group, PKGlyphViewDelegate;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate>
{
    long long _style;
    _Bool _isPad;
    unsigned long long _transitionIndex;
    _Bool _transitioning;
    _Bool _transitioningAnimated;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    NSObject<OS_dispatch_group> *_lastAnimationGroup;
    double _lastAnimationWillFinish;
    _Bool _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct {
        unsigned int showingPhone:1;
        unsigned int phoneRotated:1;
        unsigned int showingUserIntentPhone:1;
        unsigned int showingUserIntentArrow:1;
    } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    PKPhoneGlyphLayer *_phoneLayer;
    LAUICheckmarkLayer *_checkLayer;
    CALayer *_userIntentLayer;
    PKMicaLayer *_userIntentArrowLayer;
    PKMicaLayer *_userIntentDeviceLayer;
    double _phoneAspectRatio;
    CALayer *_customImageLayer;
    struct UIColor *_secondaryColor;
    struct UIColor *_primaryHighlightColor;
    struct UIColor *_intentPrimaryHighlightColor;
    struct UIColor *_secondaryHighlightColor;
    unsigned int _userIntentEdge;
    long long _colorMode;
    UIColor *_primaryColor;
    struct CGImage *_customImage;
    long long _state;
    id <PKGlyphViewDelegate> _delegate;
    struct UIEdgeInsets _customImageAlignmentEdgeInsets;
}

+ (void)invokeSuccessFeedback;
+ (id)sharedStaticResources;
+ (_Bool)automaticallyNotifiesObserversOfState;
@property(nonatomic) __weak id <PKGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int userIntentEdge; // @synthesize userIntentEdge=_userIntentEdge;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) struct CGImage *customImage; // @synthesize customImage=_customImage;
@property(readonly, nonatomic) struct UIEdgeInsets customImageAlignmentEdgeInsets; // @synthesize customImageAlignmentEdgeInsets=_customImageAlignmentEdgeInsets;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) long long colorMode; // @synthesize colorMode=_colorMode;
- (void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (struct CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (id)createCustomImageLayer;
- (void)setCustomImage:(struct CGImage *)arg1 withAlignmentEdgeInsets:(struct UIEdgeInsets)arg2;
@property(nonatomic) _Bool fadeOnRecognized;
- (void)setColorMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_applyColorMode:(_Bool)arg1;
- (struct UIColor *)_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (struct UIColor *)_primaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (void)_setSecondaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_applyEffectivePrimaryColorToLayersAnimated:(_Bool)arg1;
- (void)_setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_applyEffectiveHighlightColorsToLayersAnimated:(_Bool)arg1;
- (void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_updateCheckViewStateAnimated:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_updateCustomImageLayerOpacityAnimated:(_Bool)arg1;
- (void)_updateUserIntentLayerRotation;
- (void)_updateUserIntentLayoutAnimated:(_Bool)arg1;
- (void)_endPhoneWiggle;
- (void)_startPhoneWiggle;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setState:(long long)arg1;
- (void)_executeAfterMinimumAnimationDurationForStateTransitionWithDelayRatio:(double)arg1 handler:(id /* block */)arg2;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)updateRasterizationScale:(double)arg1;
- (void)updateRotation;
- (void)tintColorDidChange;
- (void)_layoutContentLayer:(id)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

