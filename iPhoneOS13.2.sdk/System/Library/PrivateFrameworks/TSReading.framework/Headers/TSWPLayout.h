//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDLayout.h>

#import <TSReading/TSWPLayoutOwner-Protocol.h>
#import <TSReading/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, NSString, TSDBezierPath, TSDCanvas, TSPObject, TSWPLayoutManager;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner>
{
    TSWPLayoutManager *_layoutManager;
    NSMutableArray *_columns;
    _Bool _textLayoutValid;
}

@property(readonly, retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) _Bool shouldWrapAroundExternalDrawables;
- (id)textColorOverride;
@property(readonly, nonatomic) unsigned int lineCount;
@property(readonly, nonatomic) TSDBezierPath *interiorClippingPath;
- (id)styleProvider;
- (struct CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(_Bool)arg2;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect)rectForSelection:(id)arg1;
- (id)lineHintsForTarget:(id)arg1;
- (id)textWrapper;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly, nonatomic) _Bool ignoresEquationAlignment;
@property(readonly, nonatomic) unsigned int maxLineCount;
@property(readonly, nonatomic) _Bool allowsLastLineTruncation;
@property(readonly, nonatomic) _Bool layoutIsValid;
- (_Bool)isLayoutOffscreen;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
@property(readonly, nonatomic) double maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (_Bool)shouldPositionAttachmentsIteratively;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (_Bool)isLastTarget;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* block */)arg1;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (struct CGRect)p_protectedRectWithinLayoutForSelectionRect:(struct CGRect)arg1;
- (struct CGRect)frameForCulling;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (_Bool)shouldProvideSizingGuides;
- (_Bool)shouldDisplayGuides;
- (Class)repClassOverride;
- (double)baselineForCharIndex:(unsigned int)arg1;
- (void)invalidateParentForAutosizing;
- (_Bool)invalidateForPageCountChange;
- (void)invalidateForFootnoteNumberingChange;
- (void)p_invalidateTextLayout;
- (void)invalidateMaxAutoGrowWidth;
- (void)invalidateTextLayout;
- (void *)initialLayoutState;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
- (void)p_validateTextLayout;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (_Bool)p_parentAutosizes;
- (id)p_wpLayoutParent;
- (void)invalidateSize;
- (_Bool)caresAboutStorageChanges;
@property(readonly, nonatomic) _Bool textLayoutValid;
@property(readonly, nonatomic) TSWPLayoutManager *layoutManager;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsDescendersToClip;
@property(readonly, nonatomic) _Bool alwaysAllowWordSplit;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool pushAscendersIntoColumn;
@property(readonly, nonatomic) double reservedWidthWhenTruncating;
@property(readonly) Class superclass;

@end

