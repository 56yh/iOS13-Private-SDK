//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class NSArray, NSDictionary, TSDCanvas, TSDLayout;
@protocol TSDContainerRep, TSDInfo;

__attribute__((visibility("hidden")))
@interface TSDRep : NSObject <TSDMagicMoveMatching>
{
    TSDCanvas *mCanvas;
    TSDRep<TSDContainerRep> *mParentRep;
    NSDictionary *mTextureAnimationInfo;
    TSDLayout *mTemporaryMixingLayout;
    TSDLayout *mLayout;
    _Bool mHasBeenRemoved;
}

@property(copy, nonatomic) NSDictionary *textureAnimationInfo; // @synthesize textureAnimationInfo=mTextureAnimationInfo;
@property(nonatomic) __weak TSDRep<TSDContainerRep> *parentRep; // @synthesize parentRep=mParentRep;
@property(retain, nonatomic) TSDLayout *temporaryMixingLayout; // @synthesize temporaryMixingLayout=mTemporaryMixingLayout;
@property(readonly, nonatomic) __weak TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(readonly, nonatomic) NSArray *hyperlinkRegions;
@property(readonly, nonatomic) _Bool wantsToDistortWithImagerContext;
@property(readonly, nonatomic) struct CGPoint centerForRotation;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) _Bool masksToBounds;
- (void)willBeRemoved;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dynamicOverrideDidChange;
@property(readonly, nonatomic) NSObject *dynamicOverride;
@property(readonly, nonatomic) struct CGRect frameForMagicMove;
- (void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(_Bool)arg2;
- (id)textureForDescription:(id)arg1;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (struct CGAffineTransform)unRotatedTransform:(struct CGAffineTransform)arg1;
- (double)contentsScale;
- (_Bool)forcesPlacementOnTop;
@property(readonly, nonatomic) struct CGRect boundsForStandardKnobs;
- (void)willLayoutAndRenderInBackground;
- (void)i_configureFontSmoothingForContext:(struct CGContext *)arg1 layer:(id)arg2;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
@property(readonly, nonatomic) struct CGRect clipRect;
@property(readonly, nonatomic) _Bool isDrawingInFlippedContext;
- (void)updateFromLayout;
- (void)didAddChildRep:(id)arg1;
- (void)updateChildrenFromLayout;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
@property(readonly, nonatomic) struct CGRect i_layerFrameInScaledCanvasIgnoringDragging;
@property(readonly, nonatomic) struct CGRect layerFrameInScaledCanvas;
@property(readonly, nonatomic) struct CGRect frameInUnscaledCanvasIncludingChrome;
@property(readonly, nonatomic) struct CGRect frameInUnscaledCanvas;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToUnscaledCanvas:(struct CGPoint)arg1;
- (const struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectFromUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToUnscaledCanvas:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect naturalBounds;
@property(readonly, nonatomic) double angleInRoot;
- (void)addToSet:(id)arg1;
- (void)i_willBeRemoved;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
@property(readonly, nonatomic) NSObject<TSDInfo> *info;
@property(readonly, nonatomic) TSDLayout *layout; // @synthesize layout=mLayout;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (struct CGRect)i_partition_deepClipRect;

@end

