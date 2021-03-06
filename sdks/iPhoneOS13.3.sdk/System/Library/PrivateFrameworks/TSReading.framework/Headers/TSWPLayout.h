//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDLayout.h>

#import <TSReading/TSWPLayoutOwner-Protocol.h>
#import <TSReading/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, TSDBezierPath, TSDCanvas, TSPObject, TSWPLayoutManager;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner>
{
    TSWPLayoutManager *_layoutManager;
    NSMutableArray *_columns;
    BOOL _textLayoutValid;
}

@property(readonly, retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
- (id)textColorOverride;
@property(readonly, nonatomic) unsigned int lineCount;
@property(readonly, nonatomic) TSDBezierPath *interiorClippingPath;
- (id)styleProvider;
- (CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(BOOL)arg2;
- (CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (CGRect)rectForSelection:(id)arg1;
- (id)lineHintsForTarget:(id)arg1;
- (id)textWrapper;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(NSUInteger)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly, nonatomic) BOOL ignoresEquationAlignment;
@property(readonly, nonatomic) unsigned int maxLineCount;
@property(readonly, nonatomic) BOOL allowsLastLineTruncation;
@property(readonly, nonatomic) BOOL layoutIsValid;
- (BOOL)isLayoutOffscreen;
@property(readonly, nonatomic) CGRect maskRect;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) NSUInteger pageNumber;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
@property(readonly, nonatomic) double maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
- (NSUInteger)iterativeAttachmentPositioningMaxPassCount;
- (BOOL)shouldPositionAttachmentsIteratively;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (CGRect)targetRectForCanvasRect:(CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(CGRect)arg1;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) CGPoint anchorPoint;
@property(readonly, nonatomic) CGPoint position;
@property(readonly, nonatomic) CGSize currentSize;
@property(readonly, nonatomic) CGSize maxSize;
@property(readonly, nonatomic) CGSize minSize;
- (BOOL)isLastTarget;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints nextTargetTopicNumbers;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(NSUInteger)arg1 outRange:(NSRange )arg2;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* CDUnknownBlockType */)arg1;
- (void)layoutSearchForString:(id)arg1 options:(NSUInteger)arg2 hitBlock:(id /* CDUnknownBlockType */)arg3;
- (CGPoint)calculatePointFromSearchReference:(id)arg1;
- (CGRect)p_protectedRectWithinLayoutForSelectionRect:(CGRect)arg1;
- (CGRect)frameForCulling;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shouldDisplayGuides;
- (Class)repClassOverride;
- (double)baselineForCharIndex:(unsigned int)arg1;
- (void)invalidateParentForAutosizing;
- (BOOL)invalidateForPageCountChange;
- (void)invalidateForFootnoteNumberingChange;
- (void)p_invalidateTextLayout;
- (void)invalidateMaxAutoGrowWidth;
- (void)invalidateTextLayout;
- (void )initialLayoutState;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
- (void)p_validateTextLayout;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (BOOL)p_parentAutosizes;
- (id)p_wpLayoutParent;
- (void)invalidateSize;
- (BOOL)caresAboutStorageChanges;
@property(readonly, nonatomic) BOOL textLayoutValid;
@property(readonly, nonatomic) TSWPLayoutManager *layoutManager;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 frame:(CGRect)arg2;
- (id)initWithInfo:(id)arg1;

@end

