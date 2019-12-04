//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeLayout.h>

@class TSWPTOCLayoutHint;

__attribute__((visibility("hidden")))
@interface TSWPTOCLayout : TSWPShapeLayout
{
    TSWPTOCLayoutHint *_hint;
    unsigned long long _initialCharIndex;
    unsigned long long _storageChangeCount;
    _Bool _textIsVertical;
    struct CGSize _maxSize;
}

@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (_Bool)shrinkTextToFit;
- (_Bool)alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (unsigned long long)columnCount;
- (id)layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (_Bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned long long)autosizeFlagsForTextLayout:(id)arg1;
- (_Bool)descendersCannotClip;
- (id)commandToClampModelToLayoutSizeWithAdditionalTransform:(struct CGAffineTransform)arg1;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;
- (_Bool)isDraggable;
- (struct CGRect)boundsForStandardKnobs;
- (id)computeLayoutGeometry;
- (_Bool)textLayoutShouldLayoutVertically:(id)arg1;
@property(readonly, nonatomic, getter=isLastLayoutInTOC) _Bool lastLayoutInTOC;
@property(readonly, nonatomic) unsigned long long initialCharIndex;
@property(readonly, nonatomic) TSWPTOCLayoutHint *hint;
- (id)initWithInfo:(id)arg1 initialCharIndex:(unsigned long long)arg2 textIsVertical:(_Bool)arg3 maxSize:(struct CGSize)arg4;
- (id)initWithInfo:(id)arg1;

@end

