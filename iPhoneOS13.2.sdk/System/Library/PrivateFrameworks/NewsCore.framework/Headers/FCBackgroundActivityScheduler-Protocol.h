//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDate, NSString;

@protocol FCBackgroundActivityScheduler 
- (void)requestBackgroundAppRefreshStartingAfter:(NSDate *)arg1 before:(NSDate *)arg2;
- (void)cancelRepeatingTaskWithIdentifier:(NSString *)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(NSString *)arg2 task:(void (^)(void (^)(long long), _Bool (^)(void)))arg3;
@end

