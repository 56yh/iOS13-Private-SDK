//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCIDRSchedulerPeriodGroup : NSObject
{
    unsigned int _basePeriodCount;
    unsigned int _framesPerBasePeriod;
    NSMutableArray *_streams;
    NSMutableArray *_schedulerItems;
}

@property(readonly, nonatomic) unsigned int basePeriodCount; // @synthesize basePeriodCount=_basePeriodCount;
- (id)description;
- (void)computeStreamsIDRPosition;
- (id)computeScheduleItemList;
- (void)addStream:(id)arg1;
- (void)dealloc;
- (id)initWithPeriodCount:(unsigned int)arg1 framesPerBasePeriod:(unsigned int)arg2;

@end

