//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSTimeZone, Stock;

@interface StockChartData : NSObject
{
    NSMutableDictionary *_imageSetCache;
    NSMutableDictionary *_yAxisLabelInfoCache;
    NSMutableDictionary *_xAxisLabelInfoCache;
    NSMutableDictionary *_labelPlacementCache;
    _Bool _isUnavailable;
    _Bool _hasVolume;
    unsigned int _stockValueCount;
    float _previousClosePrice;
    int _yAxisFractionDigits;
    Stock *_stock;
    long long _chartInterval;
    CDStruct_d4d9707c *_stockValues;
    NSArray *_interestingIndexes;
    NSDate *_marketOpenDate;
    NSDate *_marketCloseDate;
    NSTimeZone *_marketTimeZone;
    CDStruct_d4d9707c *_minValue;
    CDStruct_d4d9707c *_maxValue;
    double _expirationTime;
    NSDictionary *_dataSeriesDict;
}

@property(retain, nonatomic) NSDictionary *dataSeriesDict; // @synthesize dataSeriesDict=_dataSeriesDict;
@property(nonatomic) int yAxisFractionDigits; // @synthesize yAxisFractionDigits=_yAxisFractionDigits;
@property(nonatomic) _Bool hasVolume; // @synthesize hasVolume=_hasVolume;
@property(nonatomic) _Bool isUnavailable; // @synthesize isUnavailable=_isUnavailable;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) float previousClosePrice; // @synthesize previousClosePrice=_previousClosePrice;
@property(nonatomic) CDStruct_d4d9707c *maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) CDStruct_d4d9707c *minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) NSTimeZone *marketTimeZone; // @synthesize marketTimeZone=_marketTimeZone;
@property(retain, nonatomic) NSDate *marketCloseDate; // @synthesize marketCloseDate=_marketCloseDate;
@property(retain, nonatomic) NSDate *marketOpenDate; // @synthesize marketOpenDate=_marketOpenDate;
@property(retain, nonatomic) NSArray *interestingIndexes; // @synthesize interestingIndexes=_interestingIndexes;
@property(readonly) unsigned int stockValueCount; // @synthesize stockValueCount=_stockValueCount;
@property(readonly) CDStruct_d4d9707c *stockValues; // @synthesize stockValues=_stockValues;
@property(nonatomic) long long chartInterval; // @synthesize chartInterval=_chartInterval;
@property(nonatomic) __weak Stock *stock; // @synthesize stock=_stock;
- (void)dealloc;
- (id)description;
- (void)setLabelPlacement:(long long)arg1 forDisplayMode:(id)arg2;
- (long long)labelPlacementForDisplayMode:(id)arg1;
- (void)setXAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (id)xAxisLabelInfoArrayForMode:(id)arg1;
- (void)setYAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (id)yAxisLabelInfoArrayForMode:(id)arg1;
- (void)clearAllImageSets;
- (void)setImageSet:(id)arg1 forDisplayMode:(id)arg2;
- (id)imageSetForDisplayMode:(id)arg1;
- (CDStruct_d4d9707c *)allocateStockValuesWithCount:(unsigned int)arg1;
- (id)initWithStock:(id)arg1 interval:(long long)arg2;

@end

