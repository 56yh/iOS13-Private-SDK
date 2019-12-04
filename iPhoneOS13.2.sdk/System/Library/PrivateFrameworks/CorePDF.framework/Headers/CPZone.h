//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

#import <CorePDF/CPGraphicUser-Protocol.h>

@class CPCharSequence, CPZoneProfile, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZone : CPRegion <CPGraphicUser>
{
    NSMutableArray *zoneBorders;
    struct CGPoint *outerVertices;
    struct CGPoint *swollenOuterVertices;
    double area;
    _Bool isStraddleZone;
    CPZoneProfile *zoneProfile;
    NSArray *leftGuides;
    NSArray *rightGuides;
    NSArray *gutters;
    NSArray *spacers;
    CPCharSequence *charactersInZone;
    NSMutableArray *textLinesInZone;
    NSArray *graphicsInZone;
    NSMutableArray *backgroundGraphics;
    unsigned int usedGraphicCount;
}

- (unsigned int)usedGraphicCount;
- (void)incrementUsedGraphicCount;
- (id)spacers;
- (void)setSpacers:(id)arg1;
- (id)gutters;
- (void)setGutters:(id)arg1;
- (id)rightGuides;
- (void)setRightGuides:(id)arg1;
- (id)leftGuides;
- (void)setLeftGuides:(id)arg1;
- (void)setZoneProfile:(id)arg1;
- (id)zoneProfile;
- (void)setIsStraddleZone:(_Bool)arg1;
- (_Bool)isStraddleZone;
- (long long)compareArea:(id)arg1;
- (void)addContentFrom:(id)arg1;
- (id)charactersInZone;
- (void)setCharactersInZone:(id)arg1;
- (void)addPDFChar:(void *)arg1;
- (_Bool)canContain:(struct CGRect)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)rectangleBordersAtLeft:(id *)arg1 top:(id *)arg2 right:(id *)arg3 bottom:(id *)arg4;
- (_Bool)isRectangular;
- (struct CGRect)swollenZoneBounds;
- (struct CGRect)zoneBounds;
- (struct CGRect)zoneBoundsFromVertices:(struct CGPoint *)arg1 ofCount:(unsigned int)arg2;
- (double)area;
- (struct CGPoint *)swollenOuterVertices;
- (void)accept:(id)arg1;
- (struct CGPoint *)outerVertices;
- (long long)neighborZOrder;
- (long long)borderZOrder;
- (unsigned int)vertexCount;
- (void)removeUnfilledNeighborShapes;
- (id)backgroundGraphics;
- (struct CGColor *)newBackgroundColor;
- (_Bool)hasNeighborShape:(id)arg1;
- (_Bool)bordersWindClockwise;
- (void)setZoneBorders:(id)arg1;
- (id)zoneBorders;
- (_Bool)hasBorders;
- (_Bool)isZone;
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (unsigned int)wordCount;
- (id)graphicsInZone;
- (id)textLinesInZone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

