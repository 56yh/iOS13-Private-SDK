//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>

@class NSArray, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNEventInvitationResponseNotificationDataSource, CALNNotificationManager;

@interface CALNEventInvitationResponseNotificationSource : NSObject <CALNNotificationSource>
{
    id <CALNEventInvitationResponseNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
}

+ (id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id *)arg2 summaryArgument:(id *)arg3;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNEventInvitationResponseNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithInfo:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)refreshNotifications:(id)arg1;
@property(readonly, nonatomic) NSArray *categories;
- (id)_categoryIdentifier;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

