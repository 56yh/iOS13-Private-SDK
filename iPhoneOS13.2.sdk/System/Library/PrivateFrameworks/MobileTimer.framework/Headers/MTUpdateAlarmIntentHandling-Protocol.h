//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MTUpdateAlarmIntent;

@protocol MTUpdateAlarmIntentHandling 
- (void)handleUpdateAlarm:(MTUpdateAlarmIntent *)arg1 completion:(void (^)(MTUpdateAlarmIntentResponse *))arg2;

@optional
- (void)confirmUpdateAlarm:(MTUpdateAlarmIntent *)arg1 completion:(void (^)(MTUpdateAlarmIntentResponse *))arg2;
@end

