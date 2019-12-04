//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTColor, NSArray, NSString;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialSettingsInterpolator : NSObject
{
    double _previousWeighting;
    double _weighting;
    id <MTRecipeMaterialSettingsProviding> _finalSettings;
    NSString *_finalConfiguration;
    id <MTRecipeMaterialSettingsProviding> _initialSettings;
    NSString *_initialConfiguration;
    id /* block */ _blurRadiusTransformer;
}

+ (id)_filteringProtocolGetterNames;
@property(copy, nonatomic) id /* block */ blurRadiusTransformer; // @synthesize blurRadiusTransformer=_blurRadiusTransformer;
@property(copy, nonatomic) NSString *initialConfiguration; // @synthesize initialConfiguration=_initialConfiguration;
@property(retain, nonatomic) id <MTRecipeMaterialSettingsProviding> initialSettings; // @synthesize initialSettings=_initialSettings;
@property(copy, nonatomic) NSString *finalConfiguration; // @synthesize finalConfiguration=_finalConfiguration;
@property(retain, nonatomic) id <MTRecipeMaterialSettingsProviding> finalSettings; // @synthesize finalSettings=_finalSettings;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
- (id)description;
- (id)_backdropScaleWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_colorMatrixColorWithSettings:(id)arg1 configuration:(id)arg2 alpha:(double)arg3;
- (id)_zoomWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_tintAlphaWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_colorMatrixWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_brightnessWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_saturationWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_luminanceAmountWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_blurRadiusWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_filteringProperty:(id)arg1 withSettings:(id)arg2 configuration:(id)arg3;
- (_Bool)_isTintEnabledWithSettings:(id)arg1 configuration:(id)arg2;
- (_Bool)_isBackdropRequiredWithSettings:(id)arg1 configuration:(id)arg2;
- (_Bool)_isBackdropRequiredWithSubSettings:(id)arg1;
- (id)_subSettingsForRecipeSettings:(id)arg1 configuration:(id)arg2;
- (id)_luminanceInputValues;
- (id)_colorWithGetterBlock:(id /* block */)arg1;
- (double)_floatPropertyValueForProperty:(id)arg1;
- (double)_floatPropertyValueForProperty:(id)arg1 withTransformer:(id /* block */)arg2;
- (id)_propertyValueForProperty:(id)arg1 withTransformer:(id /* block */)arg2;
- (_Bool)_isPropertyEnabled:(id)arg1 consideringWeighting:(_Bool)arg2;
@property(readonly, copy, nonatomic) MTColor *tintColor;
@property(readonly, nonatomic, getter=isBlurAtEnd) _Bool blurAtEnd;
@property(readonly, copy, nonatomic) NSString *blurInputQuality;
@property(readonly, nonatomic) double backdropScale;
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) double tintAlpha;
@property(readonly, nonatomic) struct CAColorMatrix colorMatrix;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, copy, nonatomic) NSArray *luminanceValues;
@property(readonly, nonatomic) double luminanceAmount;
@property(readonly, nonatomic) double blurRadius;
@property(readonly, nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property(readonly, nonatomic, getter=isTintEnabled) _Bool tintEnabled;
@property(readonly, nonatomic, getter=isColorMatrixEnabled) _Bool colorMatrixEnabled;
@property(readonly, nonatomic, getter=isBrightnessEnabled) _Bool brightnessEnabled;
@property(readonly, nonatomic, getter=isSaturationEnabled) _Bool saturationEnabled;
@property(readonly, nonatomic, getter=isLuminanceEnabled) _Bool luminanceEnabled;
@property(readonly, nonatomic, getter=isBlurEnabled) _Bool blurEnabled;
@property(readonly, nonatomic, getter=isOverlay) _Bool overlay;
@property(readonly, nonatomic, getter=isBackdropRequiredEver) _Bool backdropRequiredEver;
@property(readonly, nonatomic, getter=isBackdropRequiredFinally) _Bool backdropRequiredFinally;
@property(readonly, nonatomic, getter=isBackdropRequiredInitially) _Bool backdropRequiredInitially;
- (void)finalizeWeighting;
@property(readonly, nonatomic, getter=isWeightingChanging) _Bool weightingChanging;
- (id)initWithSettings:(id)arg1 configuration:(id)arg2;

@end

