//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AppSupportUI/NUIArrangementItem-Protocol.h>
#import <AppSupportUI/_UIMultilineTextContentSizing-Protocol.h>

@class NSString;

@interface UIView (NUIContainerView) <NUIArrangementItem, _UIMultilineTextContentSizing>
- (void)setUntransformedFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property(nonatomic) double customFirstBaselineOffsetFromTop;
@property(nonatomic) double customBaselineOffsetFromBottom;
@property(nonatomic) struct UIEdgeInsets customAlignmentRectInsets;
- (void)setLayoutSize:(struct CGSize)arg1 withContentPriority:(float)arg2;
@property(nonatomic) struct CGSize maximumLayoutSize;
@property(nonatomic) struct CGSize minimumLayoutSize;
- (id)containerViewInfoCreateIfNeeded:(_Bool)arg1;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (_Bool)supportsAsynchronousMeasurement;
- (double)effectiveFirstBaselineOffsetFromTop;
- (double)effectiveBaselineOffsetFromBottom;
- (CDStruct_c3b9c2ee)_nui_additionalInsetsForBaselines;
- (long long)_nui_baselineViewType;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)nukeContentLayoutSizeCacheFromOrbit;
- (struct nui_size_cache *)contentLayoutSizeCache;
- (void)_didInvalidateIntrinsicContentSize;
- (double)systemSpacingToSuperView:(id)arg1 edge:(unsigned long long)arg2 baselineRelative:(_Bool)arg3 multiplier:(double)arg4;
- (double)systemSpacingToAdjecentSiblingView:(id)arg1 axis:(long long)arg2 baselineRelative:(_Bool)arg3 multiplier:(double)arg4;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (double)effectiveBaselineOffsetFromContentBottom;
- (struct UIEdgeInsets)effectiveAlignmentRectInsets;
- (double)effectiveScreenScale;
- (struct CGSize)effectiveMaximumLayoutContentSize;
- (struct CGSize)effectiveMinimumLayoutContentSize;
- (struct CGSize)calculateLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)contentLayoutSizeCacheDescription;
- (_Bool)_nui_isImageView;
- (_Bool)_isContainerView;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
