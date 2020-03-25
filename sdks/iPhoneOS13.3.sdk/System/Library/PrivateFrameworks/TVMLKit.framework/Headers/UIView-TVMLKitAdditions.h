//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TVMLKitAdditions)
+ (void)tv_performByPreventingAdditiveAnimations:(id /* CDUnknownBlockType */)arg1;
- (void)_transferAttributesFromElement:(id)arg1;
- (BOOL)tv_shouldAnimatePropertyWithKey:(id)arg1;
- (id)tv_layout;
- (void)tv_setLayout:(id)arg1;
- (id)tv_AccessibilityText;
- (void)tv_setAccessibilityText:(id)arg1;
- (void)tv_setSiriData:(id)arg1;
- (id)tv_siriData;
- (BOOL)tv_marqueeOnHighlight;
- (BOOL)tv_showOnHighlight;
- (BOOL)tv_isPrototypeView;
- (id)tv_elementName;
- (NSUInteger)tv_elementType;
- (id)tv_highlightColor;
- (id)tv_backgroundColor;
- (double)tv_lineSpacing;
- (double)tv_interitemSpacing;
- (double)tv_minWidth;
- (double)tv_minHeight;
- (double)tv_maxWidth;
- (double)tv_maxHeight;
- (double)tv_itemHeight;
- (double)tv_itemWidth;
- (long long)tv_position;
- (long long)tv_contentAlignment;
- (long long)tv_alignment;
- (UIEdgeInsets)tv_padding;
- (UIEdgeInsets)tv_focusMargin;
- (UIEdgeInsets)tv_nonDirectionalMargin;
- (UIEdgeInsets)tv_margin;
- (UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (BOOL)tv_shouldReuseCachedSizeThatFits:(CGSize)arg1 previousTargetSize:(CGSize)arg2 newTargetSize:(CGSize)arg3;
- (CGSize)tv_sizeThatFits:(CGSize)arg1 withSizeCalculation:(id /* CDUnknownBlockType */)arg2;
- (CGSize)tv_sizeThatFits:(CGSize)arg1;
- (void)transferLayoutStylesFromElement:(id)arg1;
- (BOOL)tv_isAnimationDisabledForProperty:(id)arg1;
- (void)tv_disableAnimation:(BOOL)arg1 forProperty:(id)arg2;
- (id)tv_valueForTVViewTag:(id)arg1;
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;
- (id)valueForTVViewStyle:(id)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (void)tv_setShowcaseFactor:(double)arg1;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)didSelect;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)tv_impressionableElementsForDocument:(id)arg1 parentViewController:(id)arg2;
- (id)tv_impressionableElementsForDocument:(id)arg1;
@end
