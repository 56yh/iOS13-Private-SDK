//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <DocumentCamera/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol ICDocCamThumbnailViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout <UICollectionViewDelegate>
{
    _Bool _movingItem;
    _Bool _isScrollingBetweenPages;
    _Bool _isScrubbing;
    _Bool _isUndergoingOrientationChange;
    _Bool _layoutCacheIsValid;
    id <ICDocCamThumbnailViewLayoutDelegate> _delegate;
    double _itemSpacing;
    double _topBottomMargins;
    double _leftMargin;
    double _rightMargin;
    double _itemHeight;
    NSArray *_itemAttributes;
    NSMutableArray *_imageSizeCache;
    unsigned long long _currentItem;
    double _currentInterPageScrollPosition;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
    struct CGSize _cachedContentSize;
}

+ (double)effectiveAspectRatioForSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(retain, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(nonatomic) double currentInterPageScrollPosition; // @synthesize currentInterPageScrollPosition=_currentInterPageScrollPosition;
@property(nonatomic) unsigned long long currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSMutableArray *imageSizeCache; // @synthesize imageSizeCache=_imageSizeCache;
@property(copy, nonatomic) NSArray *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(nonatomic) struct CGSize cachedContentSize; // @synthesize cachedContentSize=_cachedContentSize;
@property(nonatomic) _Bool layoutCacheIsValid; // @synthesize layoutCacheIsValid=_layoutCacheIsValid;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double topBottomMargins; // @synthesize topBottomMargins=_topBottomMargins;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) _Bool isUndergoingOrientationChange; // @synthesize isUndergoingOrientationChange=_isUndergoingOrientationChange;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) _Bool isScrollingBetweenPages; // @synthesize isScrollingBetweenPages=_isScrollingBetweenPages;
@property(nonatomic) _Bool movingItem; // @synthesize movingItem=_movingItem;
@property(readonly, nonatomic) __weak id <ICDocCamThumbnailViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)updateLayoutCacheIfNecessary;
- (void)prepareLayout;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)setCurrentItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setContentOffsetForItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)horizontalContentOffsetForItem:(unsigned long long)arg1;
- (double)horizontalContentOffsetAdjustmentForItem:(unsigned long long)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)setInterPageScrollPosition:(double)arg1;
@property(readonly, nonatomic) double extraSpacingForCurrentItem;
- (struct CGSize)itemSizeForImageSize:(struct CGSize)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

