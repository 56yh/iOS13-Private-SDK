//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMBasketExtractor : NSObject
{
    double _samplingInterval;
}

@property double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(_Bool)arg2;
- (id)extractTemporalItemsFromDate:(id)arg1;
- (id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2;
- (id)slotForHourOfDay:(id)arg1;
- (id)initWithSamplingInterval:(double)arg1;

@end

