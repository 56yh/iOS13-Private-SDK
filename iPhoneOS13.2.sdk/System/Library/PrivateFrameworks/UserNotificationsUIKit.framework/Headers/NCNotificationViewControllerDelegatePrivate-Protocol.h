//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewControllerDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationViewController;
@protocol NCAuxiliaryOptionsProviding, NCNotificationStaticContentProviding;

@protocol NCNotificationViewControllerDelegatePrivate <NCNotificationViewControllerDelegate>

@optional
- (id <NCAuxiliaryOptionsProviding>)notificationViewController:(NCNotificationViewController *)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 withLongLook:(_Bool)arg3;
- (id <NCNotificationStaticContentProviding>)notificationViewController:(NCNotificationViewController *)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;
@end

