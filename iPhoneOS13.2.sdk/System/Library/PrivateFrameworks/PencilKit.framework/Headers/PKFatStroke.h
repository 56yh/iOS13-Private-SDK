//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKStroke.h>

@interface PKFatStroke : PKStroke
{
    vector_acef39cc _maskPaths;
    vector_63c28b85 _centerlineSlices;
}

+ (id)sliceWithEraser:(vector_acef39cc *)arg1 toClip:(id)arg2 clipType:(int)arg3;
+ (id)sliceWithEraser:(vector_acef39cc *)arg1 toClip:(id)arg2;
- (id).cxx_construct;
- (_Bool)intersectsClosedStroke:(id)arg1;
- (_Bool)intersectsLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 minThreshold:(double)arg3;
- (void)generatePolyHull;
- (void)debugRender:(struct CGContext *)arg1;
- (struct CGPath *)newPathRepresentation;
- (void)calculateCenterlineSlices;
- (id)sliceWithMask:(vector_acef39cc *)arg1;
- (id)sliceWithEraser:(vector_acef39cc *)arg1;
- (struct CGRect)_calculateBounds;
- (void)_appendPointsOfInterestForSelection:(vector_e1abc270 *)arg1;
- (vector_63c28b85 *)centerlineSlices;
- (vector_acef39cc *)maskPaths;
- (id)initWithStroke:(id)arg1 hidden:(_Bool)arg2 version:(struct _PKStrokeID)arg3 ink:(id)arg4 transform:(struct CGAffineTransform)arg5 tRange:(CDStruct_88b945db)arg6;
- (id)initWithStroke:(id)arg1;
- (unsigned int)saveToArchive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(_Bool)arg4 parent:(id)arg5 transient:(_Bool)arg6;
- (id)initWithArchive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(_Bool)arg5;

@end

