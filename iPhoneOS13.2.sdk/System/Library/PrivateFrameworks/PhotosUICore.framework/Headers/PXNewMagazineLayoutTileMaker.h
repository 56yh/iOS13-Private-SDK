//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXNewMagazineRectArray;

@interface PXNewMagazineLayoutTileMaker : NSObject
{
    PXNewMagazineRectArray *_cachedTileRects;
    NSMutableArray *_allFrames;
    double _lastTileWidthPadding;
    double _maxFrameAspectRatio;
    double _minFrameAspectRatio;
    _Bool _startLastPadding;
    NSMutableArray *_sharedTempArray;
    double *_normalizedWeights;
    _Bool _isPerfectEnding;
    _Bool _layoutFromRightToLeft;
    unsigned long long _numberOfColumns;
    double _tileAspectRatio;
    double _height;
    double _interTileSpacing;
    unsigned long long _maxTilesInFrame;
    struct CGSize _referenceSize;
    struct CGSize _defaultTileSize;
}

+ (void)printLayout:(id)arg1 numOfColumns:(unsigned long long)arg2;
+ (void)printInputs:(id)arg1;
+ (void)printPossibleFrames:(unsigned long long)arg1 cellAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 minAspectRato:(double)arg4;
@property(nonatomic) _Bool layoutFromRightToLeft; // @synthesize layoutFromRightToLeft=_layoutFromRightToLeft;
@property(nonatomic) unsigned long long maxTilesInFrame; // @synthesize maxTilesInFrame=_maxTilesInFrame;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(readonly, nonatomic) struct CGSize defaultTileSize; // @synthesize defaultTileSize=_defaultTileSize;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(readonly, nonatomic) double tileAspectRatio; // @synthesize tileAspectRatio=_tileAspectRatio;
- (_Bool)checkAndPrintResults:(_Bool)arg1;
- (long long)_availableFrames:(id *)arg1 maxReturnCount:(unsigned long long)arg2 forAspectRatio:(double)arg3 weight:(double)arg4 maxWidth:(unsigned long long)arg5;
- (id)_getAllFramesInOrder;
- (struct CGRect)_frameFromTileFrame:(struct PXMagazineRect)arg1;
- (_Bool)_findNextTileWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 baseIndex:(unsigned long long)arg3 coordinator:(id)arg4;
- (id)_generateLastTilesWithInputs:(id)arg1 baseIndex:(unsigned long long)arg2 returnFallback:(_Bool)arg3;
- (_Bool)_generateNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 maxY:(unsigned long long)arg3 reserveNumberForPadding:(unsigned long long)arg4 context:(id)arg5;
- (void)_findNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 context:(id)arg3;
- (id)_generateTilesWithInputs:(id)arg1;
- (unsigned long long)_numberOfInputsForLastPadding;
- (_Bool)_isSameRectsArray:(id)arg1 otherArray:(id)arg2;
- (void)_resetWithNumberOfAssets:(unsigned long long)arg1;
- (void)_updateDimensionInfos;
- (void)_setRandomSeedWithInputs:(id)arg1;
- (double *)_normalizeWeightsByInputs:(id)arg1;
- (void)_getFrames:(struct CGRect *)arg1 magazineRects:(struct PXMagazineRect *)arg2 withInputs:(id)arg3;
- (void)getFrames:(struct CGRect *)arg1 withInputs:(id)arg2;
- (_Bool)convertRects:(struct PXMagazineRect *)arg1 outFrames:(struct CGRect *)arg2 count:(unsigned long long)arg3 forReferenceSize:(struct CGSize)arg4;
- (unsigned long long)getMagazineRects:(struct PXMagazineRect *)arg1 withInputs:(id)arg2;
@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)description;
- (void)dealloc;
- (id)initWithReferenceSize:(struct CGSize)arg1 numberOfColumns:(unsigned long long)arg2;

@end

