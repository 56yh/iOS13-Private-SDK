//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDate, NSString;
@protocol CALNTravelEngineDelegate;

@protocol CALNTravelEngine 
@property(nonatomic) __weak id <CALNTravelEngineDelegate> delegate;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(NSString *)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(NSString *)arg1;
- (void)requestHypothesisRefreshAtDate:(NSDate *)arg1 forEventWithExternalURL:(NSString *)arg2;
@end

