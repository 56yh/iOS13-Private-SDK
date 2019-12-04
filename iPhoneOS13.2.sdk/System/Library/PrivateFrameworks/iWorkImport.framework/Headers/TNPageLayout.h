//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPPageLayout.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSString, TNPageContentLayout, TNPageController, TNSheet, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TNPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>
{
    _Bool mIsChildLayoutsValid;
    struct TSUCellCoord mPageCoordinate;
    TNPageController *mPageController;
    TNPageContentLayout *mContentLayout;
    _Bool mIsPlaceholder;
    TNSheet *mSheet;
}

+ (id)pageLayoutWithPageController:(id)arg1 pageCoordinate:(struct TSUCellCoord)arg2;
@property(retain) TNSheet *sheet; // @synthesize sheet=mSheet;
@property(getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=mIsPlaceholder;
@property(retain) TNPageContentLayout *contentLayout; // @synthesize contentLayout=mContentLayout;
@property TNPageController *pageController; // @synthesize pageController=mPageController;
@property struct TSUCellCoord pageCoordinate; // @synthesize pageCoordinate=mPageCoordinate;
@property(readonly, copy) NSString *description;
- (_Bool)textIsVertical;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (unsigned long long)pageNumber;
- (unsigned long long)pageCount;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
@property(readonly, nonatomic) double textScaleFactor;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned long long)autosizeFlagsForTextLayout:(id)arg1;
- (_Bool)descendersCannotClip;
- (void)invalidateSize;
- (id)dependentLayouts;
- (void)parentDidChange;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4;
- (void)updateChildrenFromInfo;
- (_Bool)containsLayoutForInfo:(id)arg1;
- (void)setChildren:(id)arg1;
@property(readonly) _Bool pageLayoutDirectionIsRTL;
- (void)addChild:(id)arg1;
@property(readonly) struct CGRect contentFrame;
@property(readonly) struct CGRect pageBounds;
- (id)p_pageInfo;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)performBlockForEachHeaderFooterLayout:(id /* block */)arg1;
- (struct CGRect)bodyRect;
- (id)headerFooterProvider;
- (void)dealloc;
- (id)initWithPageController:(id)arg1 pageCoordinate:(struct TSUCellCoord)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

