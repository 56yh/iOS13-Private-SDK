//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKUtilityComplicationFactoryDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKVictoryAnalogBackgroundViewDelegate-Protocol.h>

@class NSString, NTKRoundedCornerOverlayView, NTKUtilityComplicationFactory, NTKVictoryAnalogBackgroundView;

@interface NTKVictoryAnalogFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate, NTKUtilityComplicationFactoryDelegate>
{
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKVictoryAnalogBackgroundView *_backgroundView;
    NTKRoundedCornerOverlayView *_cornerView;
    _Bool _isFullBleed;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (_Bool)slotUsesCurvedText:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_keylineEdgeGapForState:(long long)arg1;
- (void)_loadLayoutRules;
- (id)_slotForUtilitySlot:(long long)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (void)logoTappedFromRect:(struct CGRect)arg1;
- (void)_prepareForEditing;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColor:(id)arg1 toComplicationView:(id)arg2;
- (void)_applyComplicationViewColor:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (double)_timeTravelCaptionLabelMaxWidth;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (void)_setFullBleed:(_Bool)arg1;
- (_Bool)_wantsStatusBarIconShadow;
- (double)_verticalPaddingForStatusBar;
- (struct CGPoint)_contentCenterOffset;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyDataMode;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_configureTimeView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

