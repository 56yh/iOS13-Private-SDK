//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, UNNotificationResponse, _UNNotificationExtensionHostViewController;

@protocol _UNNotificationExtensionHostDelegate 
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 setUserNotificationActions:(NSArray *)arg2;
- (void)notificationHostExtensionRequestsDismiss:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionRequestsDefaultAction:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 setTitle:(NSString *)arg2;
- (void)notificationHost:(_UNNotificationExtensionHostViewController *)arg1 extensionDidCompleteResponse:(UNNotificationResponse *)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtensionDidUpdateControls:(_UNNotificationExtensionHostViewController *)arg1;
@end
