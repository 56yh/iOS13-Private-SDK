//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSmartStroke.h>

__attribute__((visibility("hidden")))
@interface TSDCalligraphyStroke : TSDSmartStroke
{
}

+ (Class)mutableClass;
- (double)horizontalMarginForSwatch;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 shouldReverseDrawOrder:(_Bool)arg6;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (struct CGAffineTransform)transformInContext:(struct CGContext *)arg1;
- (struct CGRect)boundsForPath:(id)arg1;
- (struct CGRect)p_superBoundsForPath:(id)arg1;
- (_Bool)drawsOutsideStrokeBounds;
- (_Bool)drawsInOneStep;
- (_Bool)prefersToApplyToShapeRenderableDuringManipulation;
- (_Bool)canApplyToShapeRenderable;
@property(readonly, nonatomic) _Bool chisel;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double angle;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;

@end

