//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHRenderUtilities : NSObject
{
}

+ (void)updateStackRectsDictionary:(id)arg1 withElementRect:(struct CGRect)arg2 groupIndex:(unsigned long long)arg3 barModelCache:(id)arg4;
+ (CDStruct_d230bf23)barElementsRendererValueRangeForModelCache:(id)arg1 groupIndex:(unsigned long long)arg2;
+ (struct CGLayer *)newCGLayerForUserSpaceRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 outUserSpaceLayerBounds:(struct CGRect *)arg3;
+ (struct CGImage *)newImageFromFills:(id)arg1 size:(struct CGSize)arg2 spaceBetween:(struct CGSize)arg3 scale:(double)arg4 borderColor:(id)arg5 outFillRects:(struct CGRect **)arg6;
+ (struct CGPath *)newStrokedPathFromPath:(struct CGPath *)arg1 stroke:(id)arg2 cap:(int)arg3;
+ (struct CGRect)labelRectFromClipRect:(struct CGRect)arg1 elementSize:(struct CGSize)arg2;
+ (void)addTextSubselectionHalosToArray:(id)arg1 rect:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
+ (void)addTextSubselectionKnobsToArray:(id)arg1 rect:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
+ (struct CGPath *)p_newPlusPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
+ (struct CGPath *)p_newCrossPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newSquarePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
+ (struct CGPath *)p_newYieldPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newCirclePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newPathForSymbol:(int)arg1 context:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6;
+ (id)lightenFillOrStroke:(id)arg1 byPercent:(double)arg2;
+ (struct CGColor *)newLightenedColor:(struct CGColor *)arg1 byPercent:(double)arg2;
+ (struct CGRect)scaleRect:(struct CGRect)arg1 toFit:(struct CGRect)arg2;
+ (struct CGRect)integralFillRenderingRectFromElementRect:(struct CGRect)arg1;
+ (struct CGPath *)newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3;
+ (_Bool)centerPointForSeries:(id)arg1 index:(unsigned long long)arg2 frame:(struct CGRect)arg3 point:(struct CGPoint *)arg4 nullsUseIntercept:(_Bool)arg5;
+ (_Bool)centerPointForSeries:(id)arg1 index:(unsigned long long)arg2 frame:(struct CGRect)arg3 point:(struct CGPoint *)arg4;
+ (void)drawNullFillSwatchInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
+ (void)drawImageFill:(id)arg1 inContext:(struct CGContext *)arg2 path:(struct CGPath *)arg3 withinBounds:(struct CGRect)arg4;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext *)arg2 path:(struct CGPath *)arg3;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext *)arg2 frame:(struct CGRect)arg3;
+ (id)p_fillToRenderWithFill:(id)arg1 inContext:(struct CGContext *)arg2;
+ (void)drawSymbol:(int)arg1 inContext:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(double)arg4 fill:(id)arg5 stroke:(id)arg6;
+ (struct CGPath *)newClipPathForSymbol:(int)arg1 at:(struct CGPoint)arg2 width:(double)arg3 stroke:(id)arg4;
+ (id)printCGPath:(struct CGPath *)arg1;

@end

