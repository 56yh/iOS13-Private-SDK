//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval, NSNumber, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphDataPoint : NSObject
{
    unsigned long long _timePeriod;
    unsigned long long _itemType;
    NSDateInterval *_dateInterval;
    NSNumber *_total;
    double _totalAsPercentageOfMax;
    NSString *_indicatorImageName;
    UIColor *_indicatorImageColor;
    NSArray *_segments;
}

@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(copy) UIColor *indicatorImageColor; // @synthesize indicatorImageColor=_indicatorImageColor;
@property(copy, nonatomic) NSString *indicatorImageName; // @synthesize indicatorImageName=_indicatorImageName;
@property(nonatomic) double totalAsPercentageOfMax; // @synthesize totalAsPercentageOfMax=_totalAsPercentageOfMax;
@property(copy, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long timePeriod; // @synthesize timePeriod=_timePeriod;
- (id)description;
- (id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 dateInterval:(id)arg3 total:(id)arg4 totalAsPercentageOfMax:(double)arg5 segments:(id)arg6;
@property(readonly, nonatomic) NSDate *date;

@end

