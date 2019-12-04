//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UITraitCollection;
@protocol WFActionDrawerCategoriesMetricsProviderCellDimension;

@interface WFActionDrawerCategoriesMetrics : NSObject
{
    _Bool _verticalPresentation;
    _Bool _valid;
    NSArray *_sizesForCells;
    double _heightForDisplay;
    NSArray *_categories;
    UITraitCollection *_traitCollection;
    id <WFActionDrawerCategoriesMetricsProviderCellDimension> _cellDimensions;
    struct CGSize _maximumSizeCellThatFits;
    struct CGSize _containerSize;
}

@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) id <WFActionDrawerCategoriesMetricsProviderCellDimension> cellDimensions; // @synthesize cellDimensions=_cellDimensions;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) __weak UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) _Bool verticalPresentation; // @synthesize verticalPresentation=_verticalPresentation;
- (_Bool)shouldStackVertically;
- (_Bool)canFitVertically;
- (_Bool)isAccessibilityContentSize;
- (void)computeHeightForDisplay;
@property(readonly, nonatomic) double heightForDisplay; // @synthesize heightForDisplay=_heightForDisplay;
- (void)computeMaximumSizeCellThatFits;
@property(readonly, nonatomic) struct CGSize maximumSizeCellThatFits; // @synthesize maximumSizeCellThatFits=_maximumSizeCellThatFits;
- (struct CGSize)sizeForCellAtIndex:(unsigned long long)arg1;
- (struct CGSize)computeSizeForCell:(id)arg1;
- (void)computeSizesForCells;
@property(readonly, nonatomic) NSArray *sizesForCells; // @synthesize sizesForCells=_sizesForCells;
- (struct CGSize)sizeForLabel:(id)arg1 inSize:(struct CGSize)arg2;
- (struct UIEdgeInsets)containerEdgeInsets;
- (struct UIEdgeInsets)textPadding;
- (struct UIEdgeInsets)cellPadding;
- (struct CGSize)cellImageSize;
- (unsigned long long)numberOfCellsPerRow;
- (void)recompute;
- (void)recomputeIfNeeded;
- (void)loadCellDimensions;
- (unsigned long long)numberOfRowsRequired;
- (id)initWithCategories:(id)arg1;

@end

