//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem
{
    double mChartBodyWidth;
    NSString *mEditedString;
    double mMinHitSize;
}

@property(nonatomic) double minHitSize; // @synthesize minHitSize=mMinHitSize;
@property(copy, nonatomic) NSString *editedString; // @synthesize editedString=mEditedString;
@property(nonatomic) double chartBodyWidth; // @synthesize chartBodyWidth=mChartBodyWidth;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(id /* block */)arg2;
- (_Bool)pointHitsTitleRect:(struct CGPoint)arg1;
- (struct CGAffineTransform)searchSelectionTransformForRenderingRange:(struct _NSRange)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingRange:(struct _NSRange)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 forSubselection:(_Bool)arg3;
- (struct CGAffineTransform)p_transformForRenderingRangePtr:(struct _NSRange *)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 forSubselection:(_Bool)arg4 forSearchSelection:(_Bool)arg5;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect)calcOverhangRect;
- (struct CGRect)calcDrawingRect;
- (struct CGSize)calcMinSizeForModel:(id)arg1;
- (struct CGSize)calcMinSize;
- (_Bool)shouldPlaceTitleAtCenter;
- (id)titleText;
- (id)p_titleParagraphStyle;
- (id)initWithParent:(id)arg1;

@end

