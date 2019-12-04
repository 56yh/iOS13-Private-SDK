//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSSet, _UICollectionLayoutAuxillaryOffsets, _UIRTree;
@protocol _UICollectionLayoutAuxillaryHosting;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryItemSolver : NSObject
{
    long long _memoizedSupplementaryKind;
    NSArray *_memoizedAuxillaryItems;
    NSSet *_elementKinds;
    _Bool _hasEstimatedSizes;
    NSIndexSet *_pinnedSupplementaryIndexes;
    _UICollectionLayoutAuxillaryOffsets *_supplementariesThatCanAffectContentSize;
    id <_UICollectionLayoutAuxillaryHosting> _auxillaryHost;
    NSArray *_frames;
    NSDictionary *_enrolledSupplementaryFramesDict;
    NSDictionary *_supplementaryFramesKeyedByKindIndex;
    _UIRTree *_supplementaryItemGeometricIndexer;
    struct CGSize _contentSize;
    struct CGPoint _hostContentOffset;
    struct NSDirectionalEdgeInsets _hostContentSizeInsets;
}

@property(retain, nonatomic) _UIRTree *supplementaryItemGeometricIndexer; // @synthesize supplementaryItemGeometricIndexer=_supplementaryItemGeometricIndexer;
@property(retain, nonatomic) NSDictionary *supplementaryFramesKeyedByKindIndex; // @synthesize supplementaryFramesKeyedByKindIndex=_supplementaryFramesKeyedByKindIndex;
@property(retain, nonatomic) NSDictionary *enrolledSupplementaryFramesDict; // @synthesize enrolledSupplementaryFramesDict=_enrolledSupplementaryFramesDict;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) __weak id <_UICollectionLayoutAuxillaryHosting> auxillaryHost; // @synthesize auxillaryHost=_auxillaryHost;
@property(nonatomic) _Bool hasEstimatedSizes; // @synthesize hasEstimatedSizes=_hasEstimatedSizes;
@property(retain, nonatomic) _UICollectionLayoutAuxillaryOffsets *supplementariesThatCanAffectContentSize; // @synthesize supplementariesThatCanAffectContentSize=_supplementariesThatCanAffectContentSize;
@property(nonatomic) struct NSDirectionalEdgeInsets hostContentSizeInsets; // @synthesize hostContentSizeInsets=_hostContentSizeInsets;
@property(readonly, nonatomic) struct CGPoint hostContentOffset; // @synthesize hostContentOffset=_hostContentOffset;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSIndexSet *pinnedSupplementaryIndexes; // @synthesize pinnedSupplementaryIndexes=_pinnedSupplementaryIndexes;
- (id)_effectiveBoundarySupplementrayItem:(id)arg1 forLayoutAxis:(int)arg2;
@property(readonly, nonatomic) NSArray *memoizedSupplementaryItems;
@property(readonly, nonatomic) long long memoizedSupplementaryKind;
- (id)_normalizedFramesAlongLayoutAxisForFrames:(id)arg1 layoutAxis:(int)arg2;
- (struct CGPoint)_offsetForContentSizeInsets:(struct NSDirectionalEdgeInsets)arg1;
- (struct CGSize)_requiredContentSizeForSupplementaryFrames:(id)arg1 forLayoutAxis:(int)arg2 containerSize:(struct CGSize)arg3;
- (struct CGSize)_largestPossibleHostContentSizeForContainerSize:(struct CGSize)arg1 layoutAxis:(int)arg2;
- (struct CGSize)_computeContentSizeForEmptyHostContentSizeForContainer:(id)arg1 hostContentSize:(struct CGSize)arg2 layoutAxis:(int)arg3 supplementaryFrames:(id)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6 supplementaryKind:(long long)arg7;
- (struct CGRect)_frameForSupplementaryItem:(id)arg1 container:(id)arg2 contentSize:(struct CGSize)arg3 frameOffset:(struct CGPoint)arg4 applyPinning:(_Bool)arg5 visibleBounds:(struct CGRect)arg6 preferredSizes:(id)arg7 preferredIndex:(long long)arg8 layoutRTL:(_Bool)arg9;
- (id)_queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (void)_updateGeometricIndexer;
- (id)_rearrangedFramesForFrames:(id)arg1 container:(id)arg2 contentSize:(struct CGSize)arg3 applyPinning:(_Bool)arg4 frameOffset:(struct CGPoint)arg5 visibleBounds:(struct CGRect)arg6 preferredSizes:(id)arg7 layoutRTL:(_Bool)arg8 supplementaryKind:(long long)arg9;
- (id)_rearrangeSupplementaryItems:(id)arg1 byUpdatingPinning:(_Bool)arg2 forVisibleBounds:(struct CGRect)arg3 frameOffset:(struct CGPoint)arg4;
- (void)_solveForPinning:(_Bool)arg1 visibleRect:(struct CGRect)arg2;
@property(readonly, nonatomic) _Bool contentSizeDiffersFromHostContentSize;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)supplementaryFramesWithOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, nonatomic) NSArray *supplementaryFrames;
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (void)resolveSupplementaryItemsForVisibleBounds:(struct CGRect)arg1;
- (void)resolve;
- (id)visualDescription;
- (id)initWithAuxillaryHost:(id)arg1;

@end

