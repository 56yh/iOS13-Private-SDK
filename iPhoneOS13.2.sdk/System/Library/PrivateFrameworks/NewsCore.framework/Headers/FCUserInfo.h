//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCTagSettingsDelegate-Protocol.h>

@class FCMTWriterLock, FCTagSettings, NSDate, NSDictionary, NSNumber, NSString;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate>
{
    _Bool _useParsecResults;
    FCTagSettings *_tagSettings;
    NSDictionary *_readOnlyUserInfo;
    FCMTWriterLock *_userInfoLock;
}

+ (id)overrideFeldsparID;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)userInfoCKRecordFromUserInfoDictionary:(id)arg1;
+ (id)iCloudDataKeys;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterLock *userInfoLock; // @synthesize userInfoLock=_userInfoLock;
@property(retain, nonatomic) NSDictionary *readOnlyUserInfo; // @synthesize readOnlyUserInfo=_readOnlyUserInfo;
@property(readonly, nonatomic) _Bool useParsecResults; // @synthesize useParsecResults=_useParsecResults;
@property(retain, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (id)_userInfoValueForKey:(id)arg1;
- (void)_modifyUserInfoWithBlock:(id /* block */)arg1;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)handleSyncWithDeletedUserInfoRecord;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)syncWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)asCKRecord;
@property(nonatomic) _Bool newIssueNotificationsEnabled;
@property(nonatomic) _Bool marketingNotificationsEnabled;
@property(copy, nonatomic) NSString *canonicalLanguage;
@property(copy, nonatomic) NSString *editorialArticleVersion;
@property(readonly, nonatomic) NSDate *dateLastViewedSaved;
- (void)markSavedAsViewed;
- (void)maybeUpdateOnboardingVersion:(id /* block */)arg1;
- (void)updateOnboardingVersion;
- (void)refreshOnboardingVersion:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool mightNeedToUpdateOnboardingVersion;
@property(copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property(copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property(copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property(copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property(copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property(copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property(nonatomic) _Bool userHasCompletedFavoritesSetup;
@property(nonatomic) _Bool hasShownProgressivePersonalizationWelcomeBrick;
@property(readonly, nonatomic) unsigned long long progressivePersonalization;
@property(readonly, nonatomic) _Bool shouldShowDefaultForYou;
@property(copy, nonatomic) NSDate *dateLastOpened;
@property(copy, nonatomic) NSDate *userStartDate;
@property(copy, nonatomic) NSNumber *onboardingVersionNumber;
@property(readonly, copy, nonatomic) NSString *notificationsUserID;
@property(copy, nonatomic) NSString *feldsparID;
- (void)prepareForUse;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

