//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFVoiceInfo, NSArray, NSXPCConnection;
@protocol AFSettingsDelegate, OS_dispatch_queue;

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_voicesQueue;
    NSArray *_voices;
    AFVoiceInfo *_selectedVoice;
    id <AFSettingsDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)siriDesignModeIsEnabled:(id /* CDUnknownBlockType */)arg1;
- (void)setSiriDesignModeEnabled:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteSiriHistoryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)shouldSuppressSiriDataSharingOptInAlert:(id /* CDUnknownBlockType */)arg1;
- (void)setSiriDataSharingOptInAlertPresented:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getSiriDataSharingOptInStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)siriGradingIsEnabled:(id /* CDUnknownBlockType */)arg1;
- (void)setSiriGradingEnabled:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)showMultiUsers:(id /* CDUnknownBlockType */)arg1;
- (void)removeMultiUserWithSharedUserID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)removeMultiUserUser:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)stopObservingWirelessSplitterSession;
- (void)startObservingWirelessSplitterSession;
- (void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getPairedBluetoothDeviceInfoArrayWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setSiriOutputVolume:(float)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getSiriOutputVolumeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchExperimentContextWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchExperimentConfigurationsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)sendMetricsToServerWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)resetAnalyticsStoreWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)purgeAnalyticsStoreWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoCrownActivationEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoLanguage:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoOutputVoice:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoRaiseToSpeakEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoPhraseSpotterEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoDictationEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setNanoAssistantEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)getStereoPairState:(id /* CDUnknownBlockType */)arg1;
- (void)getStereoPartnerLastMyriadWinDate:(id /* CDUnknownBlockType */)arg1;
- (void)getMeCard:(id /* CDUnknownBlockType */)arg1;
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getHorsemanSupplementalLanguageDictionary:(id /* CDUnknownBlockType */)arg1;
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getSupplementalLanguagesModificationDate:(id /* CDUnknownBlockType */)arg1;
- (void)getSupplementalLanguagesDictionary:(id /* CDUnknownBlockType */)arg1;
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)stopAllAudioPlaybackRequests:(BOOL)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(BOOL)arg2;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getPeerIdentifiers:(id /* CDUnknownBlockType */)arg1;
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dismissUI;
- (void)startUIRequestWithText:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;
- (void)startUIRequestWithText:(id)arg1;
- (void)startUIRequest:(id)arg1;
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2;
- (void)setLanguage:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setLanguage:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getOfflineDictationStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateVoicesIncludingAssetInfo:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (id)_voices;
- (void)_setVoices:(id)arg1;
- (void)homeOnboardingFlowInvoked:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchMultiUserVoiceIdentificationSetting:(id /* CDUnknownBlockType */)arg1;
- (void)clearOpportuneSpeakingEdgeDetectorSignalOverride;
- (void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(BOOL)arg1;
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setSpokenNotificationShouldAlwaysSpeakNotifications:(BOOL)arg1;
- (void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2;
- (void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)clearSpokenNotificationTemporarilyDisabledStatus;
- (void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1;
- (void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)forceMultiUserSync:(BOOL)arg1 download:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)configOverrides:(id /* CDUnknownBlockType */)arg1;
- (void)setConfigOverrides:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(id /* CDUnknownBlockType */)arg1;
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)disableAndDeleteCloudSyncWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)barrier;
- (void)shutdownSessionIfIdle;
- (void)killDaemon;
- (void)setAssistantLoggingEnabled:(BOOL)arg1;
- (void)setDictationEnabled:(BOOL)arg1;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 setActive:(BOOL)arg2;
- (id)accounts;
- (void)fetchAccountsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSupportedMultiUserLanguageCodes:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSupportedLanguageCodes:(id /* CDUnknownBlockType */)arg1;
- (id)_settingsServiceWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_settingsService;
- (id)_connection;
- (void)_clearConnection;
- (void)dealloc;
- (void)setXPCConnectionManagementQueue:(id)arg1;
- (id)init;
- (void)_tellDelegateServerVerificationReport:(id)arg1;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
@property(nonatomic, setter=_setDelegate:) __weak id <AFSettingsDelegate> _delegate;
- (void)_getSharedUserID:(id /* CDUnknownBlockType */)arg1;
- (void)_updateMultiUserInfoForUser:(id)arg1 score:(id)arg2 companionId:(id)arg3 companionSpeechId:(id)arg4 idsIdentifier:(id)arg5 reset:(BOOL)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)_getSharedCompanionInfo:(id /* CDUnknownBlockType */)arg1;
- (void)_runServiceMaintenance;
- (void)_startDeepSyncVerificationForKeys:(id)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(BOOL)arg1 shouldPostNotification:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_fetchPeerData:(id /* CDUnknownBlockType */)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(BOOL)arg2 reason:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_clearSyncNeededForKey:(id)arg1;
- (void)_setSyncNeededForReason:(id)arg1;

@end

