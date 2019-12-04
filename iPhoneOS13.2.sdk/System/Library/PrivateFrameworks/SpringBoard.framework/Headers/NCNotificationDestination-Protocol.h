//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BSServiceConnectionEndpoint, NCNotificationRequest, NCNotificationSectionSettings, NSString;
@protocol NCNotificationDestinationDelegate;

@protocol NCNotificationDestination 
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
- (_Bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (_Bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
@end

