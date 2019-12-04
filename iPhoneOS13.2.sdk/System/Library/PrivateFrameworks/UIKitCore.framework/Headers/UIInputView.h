//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UISplittableInputView-Protocol.h>

@class CALayer, NSArray, NSMutableDictionary, NSString, UIImage, UIKBRenderConfig, _UIInputViewContent;

@interface UIInputView : UIView <UISplittableInputView>
{
    long long _style;
    UIKBRenderConfig *_renderConfig;
    _Bool _suppressBackgroundStyling;
    _Bool _disableSplitSupport;
    _UIInputViewContent *_leftContentView;
    _UIInputViewContent *_rightContentView;
    double _contentRatio;
    struct CGSize _leftContentSize;
    struct CGSize _rightContentSize;
    double _gapWidth;
    double _leftOffset;
    _Bool _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    double _transitionRatio;
    UIImage *_mergedImage;
    UIImage *_splitImage;
    NSMutableDictionary *_mergedSliceMap;
    NSMutableDictionary *_splitSliceMap;
    NSArray *_visibleLayers;
    CALayer *_transitionLayer;
    _Bool _allowsSelfSizing;
    _Bool _assertSizingWithPredictionBar;
    struct UIEdgeInsets _backgroundEdgeInsets;
}

+ (void)_setupAppearanceIfNecessary;
@property(nonatomic) struct UIEdgeInsets backgroundEdgeInsets; // @synthesize backgroundEdgeInsets=_backgroundEdgeInsets;
@property(retain, nonatomic) NSMutableDictionary *_splitSliceMap; // @synthesize _splitSliceMap;
@property(retain, nonatomic) NSMutableDictionary *_mergedSliceMap; // @synthesize _mergedSliceMap;
@property(retain, nonatomic) UIImage *_splitImage; // @synthesize _splitImage;
@property(retain, nonatomic) UIImage *_mergedImage; // @synthesize _mergedImage;
@property(nonatomic) struct CGSize rightContentViewSize; // @synthesize rightContentViewSize=_rightContentSize;
@property(nonatomic) struct CGSize leftContentViewSize; // @synthesize leftContentViewSize=_leftContentSize;
@property(nonatomic) double contentRatio; // @synthesize contentRatio=_contentRatio;
@property(readonly, nonatomic) UIView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(readonly, nonatomic) UIView *leftContentView; // @synthesize leftContentView=_leftContentView;
@property(nonatomic) _Bool assertSizingWithPredictionBar; // @synthesize assertSizingWithPredictionBar=_assertSizingWithPredictionBar;
@property(nonatomic) _Bool allowsSelfSizing; // @synthesize allowsSelfSizing=_allowsSelfSizing;
@property(readonly, nonatomic) long long inputViewStyle; // @synthesize inputViewStyle=_style;
- (void)didEndSplitTransition;
- (void)willBeginSplitTransition;
- (struct CGSize)_defaultSize;
- (double)_additionalClipHeight;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (void)_updateClipCorners;
- (id)_toolbarBorderedBackground;
- (id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)updateMergedSubviewConstraints;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)layoutMergedSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateWithSize:(struct CGSize)arg1;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (_Bool)_isTransitioning;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (_Bool)_supportsSplit;
- (void)_setNeedsContentSizeUpdate;
- (_Bool)_isSplit;
- (_Bool)_isToolbars;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setInputViewStyle:(long long)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_setDisableSplitSupport:(_Bool)arg1;
- (_Bool)_disableSplitSupport;
- (void)_setSuppressBackgroundStyling:(_Bool)arg1;
- (_Bool)_suppressBackgroundStyling;
- (id)tintColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

