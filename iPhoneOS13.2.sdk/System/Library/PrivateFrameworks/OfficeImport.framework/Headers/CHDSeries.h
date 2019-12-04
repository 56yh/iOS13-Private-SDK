//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, CHDErrorBar, CHDFormula, EDCollection, EDKeyedCollection, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDSeries : NSObject <EDKeyedObject>
{
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned long long mOrder;
    unsigned long long mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    _Bool mDateTimeFormattingFlag;
    _Bool mHiddenFlag;
}

+ (id)seriesWithChart:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEmpty;
- (id)defaultSeriesNameForIndex:(unsigned long long)arg1;
- (void)setHiddenFlag:(_Bool)arg1;
- (_Bool)isHidden;
- (_Bool)isDateTimeFormattingFlag;
- (void)setDateTimeFormattingFlag:(_Bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setDefaultDataLabel:(id)arg1;
- (id)defaultDataLabel;
- (void)setErrorBarYAxis:(id)arg1;
- (id)errorBarYAxis;
- (void)setErrorBarXAxis:(id)arg1;
- (id)errorBarXAxis;
- (_Bool)hasErrorBars;
- (void)setErrorBar:(id)arg1;
- (_Bool)hasTrendlines;
- (void)setTrendlineCollection:(id)arg1;
- (id)trendlineCollection;
- (void)setDataValuePropertiesCollection:(id)arg1;
- (id)dataValuePropertiesCollection;
- (unsigned long long)categoryCount;
- (void)setCategoryData:(id)arg1;
- (id)categoryData;
- (void)setValueData:(id)arg1;
- (id)valueData;
- (void)setName:(id)arg1;
- (id)name;
- (void)setLastCachedName:(id)arg1;
- (id)lastCachedName;
- (void)setStyleIndex:(unsigned long long)arg1;
- (unsigned long long)styleIndex;
- (void)setOrder:(unsigned long long)arg1;
- (unsigned long long)order;
- (long long)key;
- (void)setChartType:(id)arg1;
- (id)chart;
- (id)chartType;
- (void)clearBackPointers;
- (id)shallowCopy;
- (id)initWithChart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

