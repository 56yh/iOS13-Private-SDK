//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIColor, UILabel, UIView;

@interface UIToolbarButton : UIControl
{
    struct CGRect _hitRect;
    UIView *_info;
    UILabel *_label;
    long long _barStyle;
    long long _style;
    struct UIEdgeInsets _glowAdjust;
    _Bool _onState;
    _Bool _barHeight;
    _Bool _bezel;
    double _minimumWidth;
    double _maximumWidth;
    double _labelHeight;
    struct UIEdgeInsets _infoInsets;
    UIColor *_toolbarTintColor;
    id _appearanceStorage;
    _Bool _isInTopBar;
    Class _appearanceGuideClass;
    struct UIEdgeInsets __additionalSelectionInsets;
}

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;
+ (id)defaultButtonFont;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets=__additionalSelectionInsets;
@property(nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (_Bool)_accessibilityShouldActivateOnHUDLift;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (id)_info;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(_Bool)arg1;
- (void)_adjustToolbarButtonInfo;
- (void)_updateInfoTextColorsForState:(unsigned long long)arg1;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (_Bool)_useBarHeight;
- (void)_setBarHeight:(float)arg1;
- (double)_paddingForLeft:(_Bool)arg1;
- (_Bool)_shouldApplyPadding;
- (_Bool)_canGetPadding;
- (_Bool)_infoIsButton;
- (_Bool)_isBordered;
- (_Bool)_isBorderedOtherThanAccessibility;
- (void)layoutSubviews;
- (void)_adjustPushButtonForMiniBar:(_Bool)arg1 isChangingBarHeight:(_Bool)arg2;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setTouchHasHighlighted:(_Bool)arg1;
- (void)_setLastHighlightSuccessful:(_Bool)arg1;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)_setInfoFlexibleWidth:(_Bool)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(_Bool)arg2;
- (void)_setInfoWidth:(float)arg1;
- (void)setUseSelectedImage:(_Bool)arg1;
- (void)_setPressed:(_Bool)arg1;
- (struct CGRect)_buttonBarHitRect;
- (void)_setButtonBarHitRect:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
@property(nonatomic, setter=_setCreatedByBarButtonItem:) _Bool _createdByBarButtonItem;
- (_Bool)_wantsAccessibilityButtonShapes;
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(_Bool)arg1;
- (void)_setWantsLetterpressContent;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(double)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(struct UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(_Bool)arg11 imageInsets:(struct UIEdgeInsets)arg12 glowInsets:(struct UIEdgeInsets)arg13 landscape:(_Bool)arg14;
- (void)_setInTopBar:(_Bool)arg1;

@end

