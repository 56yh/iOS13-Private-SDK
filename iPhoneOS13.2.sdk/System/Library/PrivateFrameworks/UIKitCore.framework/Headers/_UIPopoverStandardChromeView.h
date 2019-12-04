//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPopoverBackgroundView.h>

@class UIColor, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView
{
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    UIColor *_popoverBackgroundColor;
    UIColor *_arrowBackgroundColor;
    _Bool _popoverBackgroundColorIsOpaque;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    _Bool _arrowVisible;
    _Bool _wasPinned;
    _Bool useShortMode;
    _Bool _debugMode;
    UIView *viewToMaskWhenContentExtendsOverArrow;
    UIColor *_contentBlendingColor;
    UIView *_arrowView;
    UIView *_leftCapView;
    UIView *_rightCapView;
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowBase;
+ (double)arrowHeight;
@property(readonly, nonatomic) UIView *rightCapView; // @synthesize rightCapView=_rightCapView;
@property(readonly, nonatomic) UIView *leftCapView; // @synthesize leftCapView=_leftCapView;
@property(readonly, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(readonly, nonatomic) UIColor *contentBlendingColor; // @synthesize contentBlendingColor=_contentBlendingColor;
@property(nonatomic) __weak UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow;
@property(nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugMode;
@property(nonatomic) _Bool useShortMode; // @synthesize useShortMode;
- (void)setArrowVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isArrowVisible) _Bool arrowVisible;
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateBackgroundStyle;
- (long long)_resolvedBackgroundStyle;
@property(nonatomic) long long backgroundStyle;
- (_Bool)isRightArrowPinnedToBottom;
- (_Bool)isRightArrowPinnedToTop;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (_Bool)wouldPinForOffset:(double)arg1;
- (_Bool)isPinned;
@property(readonly, nonatomic) _Bool hasComponentViews;
- (void)_loadNecessaryViews;
- (void)_resetComponentViews;
- (struct CGRect)_contentViewFrame;
- (struct UIEdgeInsets)safeAreaInsetsForContentView;
- (_Bool)_shouldUseEqualContentInsetsOnAllSides;
- (void)_removeEffectView;
- (void)_configureEffectView;
- (id)backgroundEffect;
- (void)_updateChrome;
- (id)_shadowPath;
- (struct CGSize)_shadowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct UIEdgeInsets)_shadowInsets;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsUpOrDown;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

