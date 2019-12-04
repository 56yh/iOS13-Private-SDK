//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationManagementController-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementControllerSettingsDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementViewPresenterDelegate-Protocol.h>

@class NCNotificationManagementView, NCNotificationManagementViewPresenter, NCNotificationRequest, NSString, NSURL;
@protocol NCNotificationManagementControllerSettingsDelegate;

@interface NCNotificationManagementViewController : UIViewController <NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationManagementController>
{
    NCNotificationManagementView *_platterView;
    NCNotificationRequest *_request;
    _Bool _isDeliveredQuietly;
    NSURL *_settingsURL;
    NCNotificationManagementViewPresenter *_viewPresenter;
    id <NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;
}

+ (id)notificationManagementAlertControllerForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;
@property(retain, nonatomic) NCNotificationRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *settingsURL; // @synthesize settingsURL=_settingsURL;
@property(nonatomic) __weak id <NCNotificationManagementControllerSettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
- (void)_setAllowsCriticalAlerts:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setDeliverQuietly:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setAllowsNotifications:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)_onOffToggleButtonTapped:(id)arg1;
- (void)_deliveryButtonTapped:(id)arg1;
- (struct CGSize)preferredContentSize;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_newManagementView;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

