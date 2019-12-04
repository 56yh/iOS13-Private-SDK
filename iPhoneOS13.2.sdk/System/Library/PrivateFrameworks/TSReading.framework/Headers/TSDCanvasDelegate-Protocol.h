//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSSet, TSDCanvas, TSDLayout, TSDRep, TSKDocumentRoot;
@protocol TSDLayoutGeometryProvider;

@protocol TSDCanvasDelegate 
- (TSKDocumentRoot *)documentRoot;

@optional
- (id <TSDLayoutGeometryProvider>)canvas:(TSDCanvas *)arg1 layoutGeometryProviderForLayout:(TSDLayout *)arg2;
- (_Bool)supportsAdaptiveLayout;
- (_Bool)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
- (_Bool)isPrintingCanvas;
- (_Bool)isCanvasInteractive;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (void)canvas:(TSDCanvas *)arg1 willLayoutRep:(TSDRep *)arg2;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidUpdateVisibleBounds:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasWillLayout:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
@end

