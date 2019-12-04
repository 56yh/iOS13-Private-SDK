//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

#import <iWorkImport/TSDWrapInvalidationParent-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>
#import <iWorkImport/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, NSMutableSet, NSObject, NSString, TSDCanvas, TSPObject, TSUBezierPath, TSWPLayoutManager, TSWPStorage;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPLayoutParent, TSWPOffscreenColumn, TSWPTopicNumberHints;

__attribute__((visibility("hidden")))
@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner, TSDWrapInvalidationParent>
{
    TSWPLayoutManager *_layoutManager;
    NSMutableArray *_columns;
    _Bool _textLayoutValid;
    TSWPStorage *_storage;
    unsigned long long _lastLayoutMgrChangeCount;
    TSDLayout<TSWPLayoutParent> *_wpLayoutParent;
    NSMutableSet *_markedHiddenInlineDrawableLayouts;
    _Bool _useBlackTextColor;
}

@property(nonatomic) _Bool useBlackTextColor; // @synthesize useBlackTextColor=_useBlackTextColor;
@property(readonly, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) _Bool isLinked;
- (id)textColorOverride;
- (void)markHiddenInlineDrawableLayout:(id)arg1;
- (void)clearHiddenInlineDrawableLayoutMarks;
@property(readonly, nonatomic) TSUBezierPath *interiorClippingPath;
- (id)styleProvider;
- (struct CGRect)p_rectInRootForSelectionPath:(id)arg1 useParagraphModeRects:(_Bool)arg2 forZoom:(_Bool)arg3;
- (struct CGRect)p_rectForSelectionPath:(id)arg1 useParagraphModeRects:(_Bool)arg2;
- (_Bool)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (_Bool)containsStartOfRange:(struct _NSRange)arg1;
- (_Bool)containsStartOfPencilAnnotation:(id)arg1;
- (id)pageAnchorDetailsForPencilAnnotationAtSelectionPath:(id)arg1 attachedType:(long long)arg2;
- (id)unscaledContentRectsToAvoidPencilAnnotationOverlap;
- (id)containedPencilAnnotations;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect)rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (struct CGRect)rectInRootForZoomingToSelectionPath:(id)arg1;
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;
- (id)textWrapper;
- (void)didLayoutWithLayoutManager:(id)arg1;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
@property(readonly, nonatomic) _Bool shouldWrapAroundExternalDrawables;
@property(readonly, nonatomic) _Bool layoutIsValid;
- (_Bool)isLayoutOffscreen;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
@property(readonly, nonatomic) double maxAnchorInBlockDirection;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) int naturalAlignment;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) unsigned long long autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (_Bool)isLastTarget;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
@property(readonly, nonatomic) _Bool isOverflowing;
- (struct CGRect)p_protectedRectWithinLayoutForSelectionRect:(struct CGRect)arg1;
- (void)endResizeWrapInvalidationCluster;
- (void)beginResizeWrapInvalidationCluster;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)parentDidChange;
- (void)p_clearOutLayoutManager;
- (void)parentWillChangeTo:(id)arg1;
- (id)p_wpLayoutParent;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (_Bool)shouldProvideSizingGuides;
- (_Bool)shouldDisplayGuides;
- (_Bool)childLayoutIsCurrentlyHiddenWhileManipulating:(id)arg1;
- (double)textScaleForChild:(id)arg1;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (struct CGSize)p_maximumFrameSizeForChild:(id)arg1;
- (Class)repClassOverride;
- (void)invalidateParentForAutosizing;
- (_Bool)invalidateForPageCountChange;
- (void)invalidateForFootnoteNumberingChange;
- (void)invalidateForcingFullReLayOut;
- (void)p_invalidateTextLayout;
- (void)invalidateTextLayout;
- (void *)initialLayoutState;
- (id)computeLayoutGeometry;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
- (void)i_validateTextLayout;
- (void)validateTextLayoutForcibly;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (_Bool)p_parentAutosizes;
- (void)invalidateInlineSize;
- (void)invalidateSize;
@property(readonly, nonatomic) struct _NSRange containedTextRange;
- (_Bool)descendersCannotClip;
@property(readonly, nonatomic) _Bool isInstructional;
- (_Bool)caresAboutStorageChanges;
- (void)i_setTextLayoutValid:(_Bool)arg1;
@property(readonly, nonatomic) _Bool textLayoutValid;
@property(readonly, nonatomic) TSWPLayoutManager *layoutManager;
- (id)interiorWrapSegments;
- (id)initWithInfo:(id)arg1 storage:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithInfo:(id)arg1;
- (id)additionalReliedOnLayoutsForTextWrap;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool marginsAreMirrored;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) _Bool repShouldPreventCaret;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly) Class superclass;

@end

