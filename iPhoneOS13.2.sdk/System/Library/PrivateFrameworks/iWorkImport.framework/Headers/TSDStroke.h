//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDPathPainter-Protocol.h>
#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>

@class NSString, TSDStrokePattern, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDStroke : NSObject <TSSPropertyCommandSerializing, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying>
{
    int _cap;
    int _join;
    TSUColor *_color;
    double _width;
    double _miterLimit;
    TSDStrokePattern *_pattern;
    double _actualWidth;
}

+ (_Bool)canMixWithNilObjects;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)emptyStroke;
+ (id)stroke;
+ (id)i_newEmptyStroke;
+ (id)i_newStroke;
+ (Class)mutableClass;
+ (id)editedStrokeFromModelStroke:(id)arg1 selectedStroke:(id)arg2;
+ (long long)indexOfStroke:(id)arg1 strokeArray:(id)arg2;
+     // Error parsing type: @32@0:8r^{StrokeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{StrokePatternArchive}^{SmartStrokeArchive}^{FrameArchive}^{PatternedStrokeArchive}fiif}16@24, name: instanceWithArchive:unarchiver:
+ (id)portalStroke;
+ (id)mergeRangeEmptyStroke;
+ (id)zeroWidthEmptyStroke;
+ (id)emptyStrokeWithWidth:(double)arg1;
@property(nonatomic) double i_actualWidth; // @synthesize i_actualWidth=_actualWidth;
@property(copy, nonatomic, setter=i_setPattern:) TSDStrokePattern *i_pattern; // @synthesize i_pattern=_pattern;
@property(nonatomic) double i_miterLimit; // @synthesize i_miterLimit=_miterLimit;
@property(nonatomic) int i_join; // @synthesize i_join=_join;
@property(nonatomic, setter=i_setCap:) int i_cap; // @synthesize i_cap=_cap;
@property(nonatomic) double i_width; // @synthesize i_width=_width;
@property(copy, nonatomic) TSUColor *i_color; // @synthesize i_color=_color;
- (_Bool)canDrawWithOtherStroke:(id)arg1;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) _Bool usesOpenGL;
@property(readonly, nonatomic) _Bool shouldAntialiasDefeat;
@property(readonly, nonatomic) _Bool drawsInOneStep;
- (_Bool)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isNearlyWhite;
@property(readonly, nonatomic) _Bool isFrame;
@property(readonly, nonatomic) double suggestedMinimumLineWidth;
@property(readonly, nonatomic) _Bool supportsLineOptions;
@property(readonly, nonatomic) _Bool supportsColor;
@property(readonly, nonatomic) _Bool supportsWidth;
@property(readonly, nonatomic) _Bool supportsPattern;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (double)horizontalMarginForSwatch;
- (id)pathForLineEnd:(id)arg1 wrapPath:(_Bool)arg2 atPoint:(struct CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (void)p_strokePathChunk:(const struct CGPath *)arg1 inContext:(struct CGContext *)arg2 wantsInteriorStroke:(_Bool)arg3;
- (void)paintPath:(const struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 shouldReverseDrawOrder:(_Bool)arg6;
- (void)paintPath:(const struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(const struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)colorForCGContext:(struct CGContext *)arg1;
- (id)strokeLineEnd:(id)arg1;
- (double)lineEndInsetAdjustment;
@property(readonly, nonatomic) _Bool shouldRender;
@property(readonly, nonatomic) _Bool isNullStroke;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (void)applyToContext:(struct CGContext *)arg1;
- (void)i_setPatternPropertiesFromStroke:(id)arg1;
- (void)i_setPropertiesFromStroke:(id)arg1;
@property(readonly, nonatomic) struct _TSDStrokeOutsets outsets;
- (struct CGRect)boundsForPath:(id)arg1;
- (id)pathToStrokeFromTSUBezierPath:(id)arg1;
- (const struct CGPath *)pathToStrokeFromCGPath:(const struct CGPath *)arg1;
@property(readonly, nonatomic) _Bool needsToExtendJoinsForBoundsCalculation;
@property(readonly, nonatomic) _Bool drawsOutsideStrokeBounds;
@property(readonly, nonatomic) _Bool isRoundDash;
@property(readonly, nonatomic) _Bool isDash;
@property(readonly, nonatomic) double dashSpacing;
@property(readonly, nonatomic) double renderedWidth;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double actualWidth;
@property(readonly, copy, nonatomic) TSDStrokePattern *pattern;
@property(readonly, nonatomic) double miterLimit;
@property(readonly, nonatomic) int join;
@property(readonly, nonatomic) int cap;
@property(readonly, nonatomic) double width;
@property(readonly, copy, nonatomic) TSUColor *color;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (id)init;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
-     // Error parsing type: v32@0:8^{StrokeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{StrokePatternArchive}^{SmartStrokeArchive}^{FrameArchive}^{PatternedStrokeArchive}fiif}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{StrokeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{StrokePatternArchive}^{SmartStrokeArchive}^{FrameArchive}^{PatternedStrokeArchive}fiif}16@24, name: initWithArchive:unarchiver:
- (_Bool)isPortalStroke;
- (_Bool)isEqualToStroke:(id)arg1;
@property(readonly, nonatomic) _Bool solid;
@property(readonly, nonatomic) _Bool empty;
@property(readonly, nonatomic) _Bool dontClearBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

