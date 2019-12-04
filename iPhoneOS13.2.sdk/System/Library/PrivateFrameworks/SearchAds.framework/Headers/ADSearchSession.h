//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADCapData, NSString;
@protocol OS_dispatch_queue;

@interface ADSearchSession : NSObject
{
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
    _Bool _notificationReceivedAndWaiting;
    int _appsRank;
    NSString *_appID;
    NSString *_appVersion;
    ADCapData *_capData;
    NSString *_campaignNamespace;
    NSObject *_notificationObserver;
    NSString *_clientRequestID;
}

@property(retain, nonatomic) NSString *clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(nonatomic) _Bool notificationReceivedAndWaiting; // @synthesize notificationReceivedAndWaiting=_notificationReceivedAndWaiting;
@property(retain, nonatomic) NSObject *notificationObserver; // @synthesize notificationObserver=_notificationObserver;
@property(retain, nonatomic) NSString *campaignNamespace; // @synthesize campaignNamespace=_campaignNamespace;
@property(retain, nonatomic) ADCapData *capData; // @synthesize capData=_capData;
@property(nonatomic) int appsRank; // @synthesize appsRank=_appsRank;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)requestSponsoredSearchURL:(id /* block */)arg1;
- (void)updateToroDownloadData:(id)arg1 forType:(long long)arg2;
- (void)updateClickDataWith:(id)arg1;
- (void)updateFrequencyCapData:(id)arg1;
- (void)updateSponsoredFrequencyCapData:(id)arg1;
- (void)requestUserTargetingIdentifier:(id /* block */)arg1;
- (id)sponsoredSearchRequestForLanguageLocale:(id)arg1;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestSearchObjectForLocality:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)populateStoreFrontLanguageLocale:(id)arg1;
- (id)userTargetingProperties;
- (id)adParameters;
- (id)requestedTemplateTypeParameter;
- (id)requestedAdDataParameter;
- (id)privacyDataKeyParameter;
- (id)campaignNamespaceParameter;
- (_Bool)startUpdatingIDs;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3;

@end

