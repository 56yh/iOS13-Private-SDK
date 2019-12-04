//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKInsulinChartPoint : NSObject <HKChartPoint>
{
    NSDate *_startDate;
    NSNumber *_basalSum;
    NSNumber *_totalSum;
    NSDate *_midDate;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *midDate; // @synthesize midDate=_midDate;
@property(retain, nonatomic) NSNumber *totalSum; // @synthesize totalSum=_totalSum;
@property(retain, nonatomic) NSNumber *basalSum; // @synthesize basalSum=_basalSum;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

