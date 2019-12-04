//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID, TSCHChartAxisLineLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisTitleLayoutItem, TSCHChartReferenceLineLabelPaddingLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
    int mAxisPosition;
    TSCHChartAxisTitleLayoutItem *mAxisTitle;
    TSCHChartAxisPaddingLayoutItem *mAxisPadding;
    TSCHChartAxisTickMarksLayoutItem *mTickMarks;
    TSCHChartAxisLineLayoutItem *mAxisLine;
    TSCHChartReferenceLineLabelPaddingLayoutItem *mRefLineLabelPadding;
    TSCHChartReferenceLineLabelsLayoutItem *mRefLineLabels;
    struct CGSize mChartBodySize;
    TSCHChartAxisID *mReferenceLineLabelAxisID;
}

@property(retain, nonatomic) TSCHChartAxisID *referenceLineLabelAxisID; // @synthesize referenceLineLabelAxisID=mReferenceLineLabelAxisID;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *refLineLabels; // @synthesize refLineLabels=mRefLineLabels;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelPaddingLayoutItem *refLineLabelPadding; // @synthesize refLineLabelPadding=mRefLineLabelPadding;
@property(nonatomic) struct CGSize chartBodySize; // @synthesize chartBodySize=mChartBodySize;
@property(readonly, nonatomic) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem; // @synthesize axisPaddingLayoutItem=mAxisPadding;
@property(readonly, nonatomic) TSCHChartAxisLineLayoutItem *axisLineLayoutItem; // @synthesize axisLineLayoutItem=mAxisLine;
@property(readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem; // @synthesize axisTickMarksLayoutItem=mTickMarks;
@property(readonly, nonatomic) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem; // @synthesize axisTitleLayoutItem=mAxisTitle;
@property(readonly, nonatomic) int axisPosition; // @synthesize axisPosition=mAxisPosition;
@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (void)p_layoutLabelsNow;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (id)p_description;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect)calcOverhangRect;
- (struct CGSize)calcMinSize;
- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;

@end

