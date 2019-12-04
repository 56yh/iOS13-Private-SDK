//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationSectionSettingsProvider-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSDate, NSDictionary, NSSet, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationDestinationDelegate <NCNotificationSectionSettingsProvider>
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)destination:(id <NCNotificationDestination>)arg1 executeAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 requestAuthentication:(_Bool)arg4 withParameters:(NSDictionary *)arg5 completion:(void (^)(_Bool))arg6;
- (void)destination:(id <NCNotificationDestination>)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withParameters:(NSDictionary *)arg4 completion:(void (^)(_Bool))arg5;

@optional
- (void)destination:(id <NCNotificationDestination>)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <NCNotificationDestination>)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <NCNotificationDestination>)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
@end

