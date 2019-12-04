//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/CAAnimationDelegate-Protocol.h>

@class CSHomeAffordanceView, NSArray, NSObject, NSString, SBUICallToActionLabel, SBUILegibilityLabel, UIButton, UILabel, _UILegibilitySettings;
@protocol OS_dispatch_source;

@interface SBDashBoardSetupView : UIView <CAAnimationDelegate>
{
    UILabel *_titleLabel;
    UILabel *_storeRestrictedLabel;
    UIView *_homeAffordanceContainer;
    CSHomeAffordanceView *_homeAffordanceView;
    UIView *_homeAffordanceCallToActionContainer;
    SBUILegibilityLabel *_homeAffordanceCallToActionLabel;
    SBUICallToActionLabel *_homeButtonCallToActionLabel;
    NSObject<OS_dispatch_source> *_homeButtonCallToActionTimer;
    NSArray *_activationInfoViewConstraints;
    UIView *_activationInfoView;
    UIView *_regulatoryInfoView;
    _UILegibilitySettings *_legibilitySettings;
    UIButton *_infoButton;
}

@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *regulatoryInfoView; // @synthesize regulatoryInfoView=_regulatoryInfoView;
@property(retain, nonatomic) UIView *activationInfoView; // @synthesize activationInfoView=_activationInfoView;
- (void)_updateLegibilitySettings;
- (void)_adjustTitleVisibilityForInfoViews;
- (void)_removeNormalAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 dispatchGroup:(id)arg3;
- (void)_animateHomeAffordanceToActive:(_Bool)arg1 withDispatchGroup:(id)arg2;
- (void)_animateHomeAffordanceCallToActionToActive:(_Bool)arg1 withDispatchGroup:(id)arg2;
- (void)_animateHomeButtonCallToActionToActive:(_Bool)arg1 withDispatchGroup:(id)arg2;
- (void)_animateView:(id)arg1 toActive:(_Bool)arg2 withDispatchGroup:(id)arg3;
- (void)_layoutHomeAffordance;
- (void)_layoutHomeAffordanceCallToAction;
- (void)_layoutHomeButtonCallToAction;
- (void)_layoutActivationInfoView;
- (void)_layoutRegulatoryInfo;
- (void)_setupActivationInfoConstraintsIfNeeded;
- (void)_setupConstraints;
- (void)_addHomeAffordanceCallToAction;
- (void)_addHomeAffordance;
- (void)_addHomeButtonCallToAction;
- (void)_addStoreRestrictedLabel;
- (void)_addTitleLabel;
- (void)_addInfoButton;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)layoutSubviews;
- (void)animateComponents:(unsigned long long)arg1 toActive:(_Bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setInfoButtonVisible:(_Bool)arg1 animated:(_Bool)arg2 withDelay:(double)arg3;
- (void)setCallToActionString:(id)arg1 forLanguage:(id)arg2;
- (void)setStoreRestrictedString:(id)arg1 forLanguage:(id)arg2;
- (void)setTitleString:(id)arg1 forLanguage:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 usingHomeAffordance:(_Bool)arg2 isStoreRestricted:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

