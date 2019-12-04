//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartAxis, TSCHChartSeries, TSCHChartValueAxis, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHBarSeriesModelCache : NSObject
{
    TSCHChartSeries *mSeries;
    TSCHChartValueAxis *mValueAxis;
    TSCHChartAxis *mGroupAxis;
    TSWPParagraphStyle *mParagraphStyle;
    unsigned long long mSeriesIndex;
    _Bool mValueLabelsOn;
    double mBarWidthRatio;
    double mBarGroupGapRatio;
    double mBarGapRatio;
    double mUnitSpaceIntercept;
    unsigned int mLabelPosition;
    TSDShadow *mShadow;
    TSDStroke *mStroke;
    id mFill;
    double mOpacity;
}

@property(readonly) double opacity; // @synthesize opacity=mOpacity;
@property(readonly) id fill; // @synthesize fill=mFill;
@property(readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;
@property(readonly) unsigned int labelPosition; // @synthesize labelPosition=mLabelPosition;
@property(readonly) double unitSpaceIntercept; // @synthesize unitSpaceIntercept=mUnitSpaceIntercept;
@property(readonly) double barGapRatio; // @synthesize barGapRatio=mBarGapRatio;
@property(readonly) double barGroupGapRatio; // @synthesize barGroupGapRatio=mBarGroupGapRatio;
@property(readonly) double barWidthRatio; // @synthesize barWidthRatio=mBarWidthRatio;
@property(readonly) _Bool valueLabelsOn; // @synthesize valueLabelsOn=mValueLabelsOn;
@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly) TSCHChartAxis *groupAxis; // @synthesize groupAxis=mGroupAxis;
@property(readonly) TSCHChartValueAxis *valueAxis; // @synthesize valueAxis=mValueAxis;
@property(readonly) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property(readonly) TSCHChartSeries *series; // @synthesize series=mSeries;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2;

@end

