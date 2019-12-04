//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppSupportUI/NUIContainerView.h>

#import <AppSupportUI/_NUIGridArrangementContainer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer>
{
    NSMutableArray *_viewRows;
    struct _NUIGridArrangement _arrangement;
    CDStruct_0d6b4eb6 _visibleCount;
    struct map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange>>>> _viewRanges;
    struct CGSize _spacing;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
    struct {
        unsigned int horzAlign:8;
        unsigned int vertAlign:8;
        unsigned int inInsertOrRemove:1;
        unsigned int hasMutations:1;
    } _gridViewFlags;
    double _rowHeight;
    double _columnWidth;
}

+ (id)containerGridViewWithArrangedSubviewRows:(id)arg1;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (id).cxx_construct;
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;
- (void)_setupViewRangesIfNeeded;
- (long long)_verticalAlignmentOfView:(id)arg1 row:(long long)arg2;
- (long long)_horizontalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (double)_heightOfRowAtIndex:(long long)arg1;
- (double)_widthOfColumnAtIndex:(long long)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)setNeedsInvalidation:(long long)arg1;
- (id)debugDictionary;
- (id)debugArrayForDimension:(id)arg1;
- (id)debugDictionaryForDimensionConfiguration:(id)arg1;
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;
- (id)arrangedDescription;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)_calculateArrangedSizeFittingSize:(struct CGSize)arg1 forLayout:(_Bool)arg2;
- (id)viewForLastBaselineLayoutInRowAtIndex:(long long)arg1;
- (id)viewForFirstBaselineLayoutInRowAtIndex:(long long)arg1;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;
- (id)_baselineViewVendForFirstBaseline:(_Bool)arg1 fromViews:(id)arg2;
@property(nonatomic) double columnSpacing;
@property(nonatomic) double rowSpacing;
@property(nonatomic) long long verticalDistribution;
@property(nonatomic) long long horizontalDistribution;
@property(nonatomic) long long verticalAlignment;
@property(nonatomic) long long horizontalAlignment;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;
- (void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (id)addColumnWithArrangedSubviews:(id)arg1;
- (id)columnAtIndex:(long long)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (id)addRowWithArrangedSubviews:(id)arg1;
- (id)rowAtIndex:(long long)arg1;
- (long long)columnIndexForArrangedSubview:(id)arg1;
- (long long)rowIndexForArrangedSubview:(id)arg1;
- (void)getColumnRange:(struct _NSRange *)arg1 rowRange:(struct _NSRange *)arg2 forArrangedSubview:(id)arg3;
- (id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2;
@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) long long numberOfRows;
@property(copy, nonatomic) NSArray *arrangedSubviewRows;
- (void)ensureArrangedSubviewsAreValid;
- (_Bool)_verifyInternalGridConsistencyWarningOnly:(_Bool)arg1;
- (void)dealloc;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)setBaselineRelativeArrangement:(_Bool)arg1;
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

