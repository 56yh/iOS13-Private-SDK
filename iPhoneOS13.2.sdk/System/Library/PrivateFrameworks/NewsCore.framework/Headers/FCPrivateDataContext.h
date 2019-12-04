//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataContext-Protocol.h>

@class FCIssueReadingHistory, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;
@protocol FCContentContext, FCPrivateDataContextInternal, FCPushNotificationHandling;

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext>
{
    _Bool _privateDataSyncingEnabled;
    FCIssueReadingHistory *_issueReadingHistory;
    FCPersonalizationData *_personalizationData;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    FCUserInfo *_userInfo;
    NSString *_privateDataDirectory;
    FCTagSettings *_tagSettings;
    id <FCPushNotificationHandling> _privatePushNotificationHandler;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCPrivateDataContextInternal> _internalPrivateDataContext;
    id <FCContentContext> _contentContext;
}

@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext; // @synthesize internalPrivateDataContext=_internalPrivateDataContext;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled; // @synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled;
@property(readonly, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory; // @synthesize privateDataDirectory=_privateDataDirectory;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler; // @synthesize privatePushNotificationHandler=_privatePushNotificationHandler;
@property(readonly, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData; // @synthesize personalizationData=_personalizationData;
@property(readonly, nonatomic) FCIssueReadingHistory *issueReadingHistory; // @synthesize issueReadingHistory=_issueReadingHistory;
- (id)_privateDataControllers;
- (void)preparePrivateDataControllersForUse;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDatabase:(id)arg3 privateDataDirectory:(id)arg4 privateDataActionProvider:(id)arg5 encryptionDelegate:(id)arg6 networkBehaviorMonitor:(id)arg7 privateDataSyncingEnabled:(_Bool)arg8;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDataHostDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(_Bool)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

