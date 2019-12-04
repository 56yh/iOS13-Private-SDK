//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface HKSleepDataProviderCurrentValue : NSObject <HKDataProviderValue>
{
    NSNumber *_timeIntervalSlept;
    NSDate *_date;
    long long _categoryValue;
}

+ (id)dataProviderValueWithSleepQueryResult:(id)arg1;
@property(readonly, nonatomic) long long categoryValue; // @synthesize categoryValue=_categoryValue;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 categoryValue:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

