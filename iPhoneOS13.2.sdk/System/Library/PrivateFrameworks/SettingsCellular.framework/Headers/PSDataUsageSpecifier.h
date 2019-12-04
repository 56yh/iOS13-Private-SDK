//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class NSString, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource;

@interface PSDataUsageSpecifier : PSSpecifier
{
    id <PSBillingPeriodSource> _billingPeriodSource;
    PSDataUsageStatisticsCache *_statisticsCache;
    NSString *_bundleID;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(nonatomic) __weak id <PSBillingPeriodSource> billingPeriodSource; // @synthesize billingPeriodSource=_billingPeriodSource;
- (id)dataUsageString;
- (unsigned long long)dataUsage;
- (id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 statisticsCache:(id)arg3;

@end

