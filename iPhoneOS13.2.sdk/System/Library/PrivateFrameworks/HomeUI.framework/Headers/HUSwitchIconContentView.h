//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIView, UIViewPropertyAnimator;

@interface HUSwitchIconContentView : HUPrimaryStateIconContentView
{
    HUShapeLayerView *_frameView;
    HUVisualEffectContainerView *_frameContainerView;
    UIView *_switchBackgroundView;
    UIView *_visibleSwitchView;
    HUShapeLayerView *_switchTopIndicatorView;
    HUVisualEffectContainerView *_switchTopIndicatorContainerView;
    HUShapeLayerView *_switchBottomIndicatorView;
    HUVisualEffectContainerView *_switchBottomIndicatorContainerView;
    UIViewPropertyAnimator *_switchAnimator;
}

@property(retain, nonatomic) UIViewPropertyAnimator *switchAnimator; // @synthesize switchAnimator=_switchAnimator;
@property(retain, nonatomic) HUVisualEffectContainerView *switchBottomIndicatorContainerView; // @synthesize switchBottomIndicatorContainerView=_switchBottomIndicatorContainerView;
@property(retain, nonatomic) HUShapeLayerView *switchBottomIndicatorView; // @synthesize switchBottomIndicatorView=_switchBottomIndicatorView;
@property(retain, nonatomic) HUVisualEffectContainerView *switchTopIndicatorContainerView; // @synthesize switchTopIndicatorContainerView=_switchTopIndicatorContainerView;
@property(retain, nonatomic) HUShapeLayerView *switchTopIndicatorView; // @synthesize switchTopIndicatorView=_switchTopIndicatorView;
@property(retain, nonatomic) UIView *visibleSwitchView; // @synthesize visibleSwitchView=_visibleSwitchView;
@property(retain, nonatomic) UIView *switchBackgroundView; // @synthesize switchBackgroundView=_switchBackgroundView;
@property(retain, nonatomic) HUVisualEffectContainerView *frameContainerView; // @synthesize frameContainerView=_frameContainerView;
@property(retain, nonatomic) HUShapeLayerView *frameView; // @synthesize frameView=_frameView;
- (struct CGRect)switchBottomIndicatorFrameForVisibleSwitchBounds:(struct CGRect)arg1 switchOn:(_Bool)arg2;
- (struct CGRect)switchTopIndicatorFrameForVisibleSwitchBounds:(struct CGRect)arg1 switchOn:(_Bool)arg2;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)_setIconState:(long long)arg1 animated:(_Bool)arg2;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (id)managedVisualEffectViews;
- (_Bool)wantsManagedVibrancyEffect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

