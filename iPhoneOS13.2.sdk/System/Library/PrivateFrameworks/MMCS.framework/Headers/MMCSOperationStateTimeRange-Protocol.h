//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDate;
@protocol MMCSOperationStateTimeRange;

@protocol MMCSOperationStateTimeRange 
@property(readonly) double absoluteStop;
@property(readonly) double absoluteStart;
@property(readonly) double duration;
@property(readonly) NSDate *startDate;
@property(readonly) unsigned long long operationState;
- (long long)compareStopTime:(id <MMCSOperationStateTimeRange>)arg1;
- (long long)compareStartTime:(id <MMCSOperationStateTimeRange>)arg1;
@end

