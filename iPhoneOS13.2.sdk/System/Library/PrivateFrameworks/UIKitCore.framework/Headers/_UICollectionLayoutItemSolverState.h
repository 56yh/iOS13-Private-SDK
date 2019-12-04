//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, _UIRTree;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutItemSolverState : NSObject
{
    NSArray *_itemFrames;
    NSArray *_auxillaryFrames;
    NSDictionary *_supplementaryDictByKindIndex;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryFrameOffsets;
    _UIRTree *_geometricIndexer;
    NSArray *_solutionFrames;
    long long _itemFrameCount;
    long long _supplementaryFrameCount;
    NSArray *_availableLayoutSpaces;
    struct CGRect _solvedFittingFrame;
}

@property(readonly, nonatomic) struct CGRect solvedFittingFrame; // @synthesize solvedFittingFrame=_solvedFittingFrame;
@property(readonly, nonatomic) NSArray *availableLayoutSpaces; // @synthesize availableLayoutSpaces=_availableLayoutSpaces;
@property(readonly, nonatomic) long long supplementaryFrameCount; // @synthesize supplementaryFrameCount=_supplementaryFrameCount;
@property(readonly, nonatomic) long long itemFrameCount; // @synthesize itemFrameCount=_itemFrameCount;
@property(readonly, nonatomic) NSArray *solutionFrames; // @synthesize solutionFrames=_solutionFrames;
- (void)_generateMemoizedSolutionFramesBasedData;
@property(readonly, nonatomic) id <_UICollectionLayoutAuxillaryOffsets> supplementaryFrameOffsets; // @synthesize supplementaryFrameOffsets=_supplementaryFrameOffsets;
@property(readonly, nonatomic) NSDictionary *supplementaryDictByKindIndex; // @synthesize supplementaryDictByKindIndex=_supplementaryDictByKindIndex;
@property(readonly, nonatomic) NSArray *auxillaryFrames; // @synthesize auxillaryFrames=_auxillaryFrames;
@property(readonly, nonatomic) NSArray *itemFrames; // @synthesize itemFrames=_itemFrames;
- (void)_generateGeometricIndexer;
@property(readonly, nonatomic) _UIRTree *geometricIndexer; // @synthesize geometricIndexer=_geometricIndexer;
- (id)initWithSolutionFrames:(id)arg1 itemFrameCount:(long long)arg2 supplementaryFrameCount:(long long)arg3 availableLayoutSpaces:(id)arg4 solvedFittingFrame:(struct CGRect)arg5;

@end

