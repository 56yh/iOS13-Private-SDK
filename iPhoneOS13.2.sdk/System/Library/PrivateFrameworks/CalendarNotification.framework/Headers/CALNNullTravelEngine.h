//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTravelEngine-Protocol.h>

@class NSString;
@protocol CALNTravelEngineDelegate;

@interface CALNNullTravelEngine : NSObject <CALNTravelEngine>
{
    id <CALNTravelEngineDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <CALNTravelEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

