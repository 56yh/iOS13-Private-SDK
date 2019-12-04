//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMediaTimingFunction, CLKDevice, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NTKVictoryLogoButton, UIImage;
@protocol NTKVictoryAnalogBackgroundColorPalette, NTKVictoryAnalogBackgroundViewDelegate;

@interface NTKVictoryAnalogBackgroundView : UIView
{
    CLKDevice *_device;
    UIImage *_dotImage;
    UIView *_contentView;
    NSMutableArray *_ringLayers;
    _Bool _ringLayerIsDigit[12];
    NSArray *_largeHourMarkerLabels;
    NSArray *_mediumNumberLayers;
    NSMutableDictionary *_smallHourMarkerLabelsByIndex;
    NSArray *_temporaryNumberLayers;
    NSArray *_activeDigitIndices;
    _Bool _canonicalDigitStatesByStyle[3][12];
    NSDictionary *_transitionDigitTargetStates;
    NSArray *_transitionDigitIndices;
    NSArray *_transitionStaticDigitIndices;
    unsigned long long _transitionFromStyle;
    unsigned long long _transitionToStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryLogoButton *_logoButton;
    NTKVictoryLogoButton *_smallLogoButton;
    struct CGPoint _logoPositionRing;
    struct CGPoint _logoPositionNoDigits;
    struct CGPoint _logoPositionBig;
    struct CGPoint _logoPositionCircularDial;
    double _dialShapeFraction;
    id <NTKVictoryAnalogBackgroundColorPalette> _palette;
    unsigned long long _style;
    unsigned long long _dialShape;
    id <NTKVictoryAnalogBackgroundViewDelegate> _delegate;
}

+ (id)_disabledLayerActions;
@property(nonatomic) __weak id <NTKVictoryAnalogBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long dialShape; // @synthesize dialShape=_dialShape;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) id <NTKVictoryAnalogBackgroundColorPalette> palette; // @synthesize palette=_palette;
- (id)_dotImage;
- (id)_circularDialLogoImage;
- (id)_logoImage;
- (id)_bigNumberInitialTransforms;
- (struct CGAffineTransform)_affineTransformFromTransform3D:(struct CATransform3D)arg1;
- (id)_createAndAddLayersWithCount:(unsigned long long)arg1;
- (id)_createSmallHourMarkerLabelForIndex:(id)arg1;
- (id)_createHourMarkerLabelsWithFontSize:(double)arg1;
- (void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
- (void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
- (unsigned long long)_digitForIndex:(unsigned long long)arg1;
- (void)_createRingLayersIfNeeded;
- (void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(_Bool)arg2;
- (void)willBeginEditing;
- (double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4;
- (struct CGColor *)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4 animateElements:(_Bool)arg5;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4;
- (void)_applyPalette:(id)arg1 forStyle:(unsigned long long)arg2;
- (struct CGPoint)logoPositionForStyle:(unsigned long long)arg1;
- (void)_clearTransitionStateForStyle:(unsigned long long)arg1;
- (struct CATransform3D)_intermediateTransformForBigNumberAtIndex:(unsigned long long)arg1 fraction:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 fromPalette:(id)arg4 toPalette:(id)arg5;
- (id)_activeRingObjects;
- (id)_activeRingLayers;
- (void)applyTransitionFraction:(double)arg1 fromOlympusStyle:(unsigned long long)arg2 toOlympusStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDialShape:(unsigned long long)arg2 toDialShape:(unsigned long long)arg3;
- (_Bool)isCircularDial;
- (void)setInTimeTravel:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_ringDigitOffsetAtIndex:(unsigned long long)arg1;
- (void)layoutNumbers;
- (struct CGPoint)centerPointForSmallHourMarkerAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_logoTapped:(id)arg1;
- (void)addSmallLogoButtonIfNeeded;
- (void)addLogoButtonIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end

