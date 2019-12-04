//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationManagementControllerSettingsDelegate-Protocol.h>

@class NSString, UIAlertController;
@protocol NCNotificationManagementViewPresenterDelegate;

@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate>
{
    id <NCNotificationManagementViewPresenterDelegate> _delegate;
    UIAlertController *_notificationManagementAlertViewController;
}

@property(retain, nonatomic) UIAlertController *notificationManagementAlertViewController; // @synthesize notificationManagementAlertViewController=_notificationManagementAlertViewController;
@property(nonatomic) __weak id <NCNotificationManagementViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationManagementControllerDidDismissManagementView:(id)arg1;
- (void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (_Bool)dismissManagementViewIfPresentedAnimated:(_Bool)arg1;
- (void)presentNotificationManagementViewType:(unsigned long long)arg1 forNotificationRequest:(id)arg2 withPresentingViewController:(id)arg3 withPresentingView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

