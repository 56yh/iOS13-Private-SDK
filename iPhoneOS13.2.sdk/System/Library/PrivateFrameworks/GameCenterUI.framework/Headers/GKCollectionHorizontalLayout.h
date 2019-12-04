//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout
{
    _Bool _centersItemsInExcessSpace;
    _Bool _alignItemsToTop;
    double _extraSectionHeaderToCellSpace;
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    double _scrollStepIntegral;
}

@property(nonatomic) double scrollStepIntegral; // @synthesize scrollStepIntegral=_scrollStepIntegral;
@property(retain, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) NSDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(nonatomic) double extraSectionHeaderToCellSpace; // @synthesize extraSectionHeaderToCellSpace=_extraSectionHeaderToCellSpace;
@property(nonatomic) _Bool alignItemsToTop; // @synthesize alignItemsToTop=_alignItemsToTop;
@property(nonatomic) _Bool centersItemsInExcessSpace; // @synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (long long)lastValidSection;
- (long long)firstValidSection;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (double)maxHeaderHeight;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)applyDefaults;
- (void)dealloc;

@end

