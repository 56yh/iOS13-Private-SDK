//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/NTKContainerViewLayoutDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKControl-Protocol.h>

@class CLKDevice, NSString, NTKContainerView, NTKFaceColorScheme, UIColor, UIView;
@protocol CLKMonochromeFilterProvider;

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate, NTKControl, CLKMonochromeComplicationView>
{
    NTKContainerView *_contentView;
    UIView *_highlightView;
    id <CLKMonochromeFilterProvider> filterProvider;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_secondaryForegroundColor;
    UIColor *_highlightBackgroundColor;
    double _contentHeight;
    double _contentHeightOffset;
    double _highlightAlpha;
    NTKFaceColorScheme *_colorScheme;
    double _highlightCornerRadius;
    UIColor *_overrideColor;
}

+ (double)cornerRadiusForComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (double)_defaultCornerRadiusForDevice:(id)arg1;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) double highlightCornerRadius; // @synthesize highlightCornerRadius=_highlightCornerRadius;
@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) double highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property(nonatomic) double contentHeightOffset; // @synthesize contentHeightOffset=_contentHeightOffset;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryForegroundColor; // @synthesize secondaryForegroundColor=_secondaryForegroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)layoutContainerView:(id)arg1;
- (_Bool)shouldCancelTouchesInScrollview;
- (void)setHighlighted:(_Bool)arg1;
- (void)_enumerateAllForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)naturalHorizontalLayoutForViewsAndSpacing:(id)arg1 columnAlignmentSpacing:(_Bool)arg2;
- (id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2 space:(double)arg3 view:(id)arg4;
- (id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2;
- (void)applyColorScheme:(id)arg1;
- (void)_applyMonochromeTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)_updateColors;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

