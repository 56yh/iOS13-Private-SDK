//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator
{
    struct CGPoint _origin;
    double _referenceHeight;
}

@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (_Bool)_addSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_addColumnWithTiles:(struct PXTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(id /* block */)arg4;
- (_Bool)_addColumnWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_isAtEndOfColumn;
- (_Bool)_hasLeftSuboptimalColumn;
- (_Bool)_scanNonPanoramaSequence:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_scanSpecialSequenceColumn:(struct PXTileInfo *)arg1 count:(long long *)arg2;
- (_Bool)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_scanTripletWithLargeLead:(struct PXTileInfo *)arg1;
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;
- (_Bool)_parseSpecialSequence;
- (_Bool)_parseSpecialTileTriplet;
- (_Bool)_parseTileTriplet;
- (_Bool)_parseTilePair;
- (_Bool)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (_Bool)parseNextTiles;
- (void)willParseTiles;

@end

