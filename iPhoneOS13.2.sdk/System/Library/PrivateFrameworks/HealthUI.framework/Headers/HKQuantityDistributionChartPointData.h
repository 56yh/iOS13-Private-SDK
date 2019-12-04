//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKUnit, NSArray, NSDate, NSString;

@interface HKQuantityDistributionChartPointData : NSObject <HKGraphSeriesChartData>
{
    NSDate *_startDate;
    NSDate *_endDate;
    double _minimumValue;
    double _maximumValue;
    double _averageValue;
    double _duration;
    double _minimumBucketValue;
    double _bucketIncrement;
    NSArray *_bucketCounts;
    HKUnit *_unit;
}

@property(readonly, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) NSArray *bucketCounts; // @synthesize bucketCounts=_bucketCounts;
@property(readonly, nonatomic) double bucketIncrement; // @synthesize bucketIncrement=_bucketIncrement;
@property(readonly, nonatomic) double minimumBucketValue; // @synthesize minimumBucketValue=_minimumBucketValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double averageValue; // @synthesize averageValue=_averageValue;
@property(readonly, nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithDistributionData:(id)arg1 unit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

