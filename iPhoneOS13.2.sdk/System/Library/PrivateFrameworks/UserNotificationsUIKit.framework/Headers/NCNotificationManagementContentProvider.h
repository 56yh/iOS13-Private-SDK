//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCAuxiliaryOptionsProviding-Protocol.h>

@class NCNotificationRequest, NSString;
@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>
{
    NCNotificationRequest *_notificationRequest;
    id <NCNotificationManagementContentProviderDelegate> _managementDelegate;
}

@property(nonatomic) __weak id <NCNotificationManagementContentProviderDelegate> managementDelegate; // @synthesize managementDelegate=_managementDelegate;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
- (void)handleManageAction:(id)arg1;
- (void)configureOptionButtons:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool auxiliaryOptionsVisible;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property(readonly, copy, nonatomic) NSString *optionsSummaryText;
@property(readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property(readonly) Class superclass;

@end

