//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

@class HFItem, HUCameraView, HUGridCameraCellLayoutOptions, HULegibilityLabel, HUVisualEffectContainerView, NADecayingTimer, NSArray, UILabel, UIView, _UILegibilitySettings;

@interface HUGridCameraCell : HUGridCell
{
    HFItem *_item;
    HUGridCameraCellLayoutOptions *_layoutOptions;
    UIView *_topBarView;
    UIView *_recordingIndicator;
    UILabel *_titleLabel;
    HULegibilityLabel *_descriptionLabel;
    HUCameraView *_cameraView;
    _UILegibilitySettings *_legibilitySettings;
    NSArray *_allConstraints;
    NSArray *_labelsConstraints;
    NADecayingTimer *_descriptionLabelUpdateTimer;
    HUVisualEffectContainerView *_exclamationView;
}

+ (Class)layoutOptionsClass;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) HUVisualEffectContainerView *exclamationView; // @synthesize exclamationView=_exclamationView;
@property(retain, nonatomic) NADecayingTimer *descriptionLabelUpdateTimer; // @synthesize descriptionLabelUpdateTimer=_descriptionLabelUpdateTimer;
@property(retain, nonatomic) NSArray *labelsConstraints; // @synthesize labelsConstraints=_labelsConstraints;
@property(retain, nonatomic) NSArray *allConstraints; // @synthesize allConstraints=_allConstraints;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) HUCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) HULegibilityLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *recordingIndicator; // @synthesize recordingIndicator=_recordingIndicator;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) HUGridCameraCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void)setItem:(id)arg1;
- (id)item;
- (id)_descriptionLabelText:(id)arg1;
- (void)_updateRecordIndicatorColor;
- (void)_updateCameraViewAppearance;
- (void)_animateTransitionWithView:(id)arg1 animations:(id /* block */)arg2;
- (void)updateConstraints;
- (void)layoutOptionsDidChange;
- (_Bool)shouldDisplayAccessModeErrorContent;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (_Bool)shouldDisplayErrorContent;
- (struct CGRect)cameraViewFrame;
@property(readonly, nonatomic) UIView *cameraContentView;
@property(nonatomic) double cameraViewAlpha;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
