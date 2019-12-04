//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/AVAudioPlayerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, AVAudioPlayer, AVAudioSession, HMAccessory, HMHome, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, RPCompanionLinkClient, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, SFSession, SSAccount, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate>
{
    _Bool _activateCalled;
    RPCompanionLinkClient *_companionLinkClient;
    _Bool _invalidateCalled;
    unsigned long long _startTicks;
    int _proxSetupActiveToken;
    _Bool _audioProgress;
    AVAudioSession *_audioSession;
    AVAudioPlayer *_audioPlayerStart;
    AVAudioPlayer *_audioPlayerStep;
    id /* block */ _audioPlayerCompletion;
    _Bool _preflightEnabled;
    int _preflightWiFiState;
    int _preflightiCloudState;
    _Bool _preventAppleWiFi;
    ACAccountStore *_iCloudAccountStore;
    ACAccount *_iCloudAccount;
    NSString *_iCloudUserID;
    int _iCloudAccountState;
    _Bool _homeiCloudEnabled;
    int _preflightiTunesState;
    SSAccount *_iTunesAccount;
    _Bool _iTunesSignInSkip;
    NSString *_iTunesUserID;
    _Bool _appleMusicEnabled;
    int _appleMusicState;
    _Bool _appleMusicForce;
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;
    int _preflightAppleMusicState;
    int _preflightMiscState;
    _Bool _locationEnabled;
    _Bool _locationDecided;
    _Bool _siriEnabled;
    _Bool _prefStereoPairEnabled;
    _Bool _prefStereoWait;
    NSArray *_potentialStereoCounterparts;
    HMAccessory *_stereoCounterpartAccessory;
    int _stereoPairUserInputState;
    int _stereoPairRole;
    SFSession *_sfSession;
    _Bool _sfSessionSecured;
    int _sfSessionState;
    int _preAuthState;
    _Bool _preAuthStartedProgress;
    unsigned int _siriFlags;
    NSArray *_siriLanguageCodes;
    long long _siriLanguageIndex;
    _Bool _siriLanguagePicked;
    int _siriLanguageState;
    NSString *_siriPreferredLanguage;
    _Bool _siriPasscodeEnabled;
    _Bool _siriPasscodeInitDone;
    _Bool _siriPasscodeSecured;
    int _siriPasscodeState;
    unsigned int _pairSetupFlags;
    int _pairSetupState;
    double _pairSetupSecs;
    int _recognizeVoiceEnabled;
    int _recognizeVoiceState;
    int _recognizeVoiceStepState;
    int _personalRequestsState;
    int _personalRequestsChoice;
    _Bool _siriForEveryoneAnswered;
    int _siriForEveryoneState;
    int _siriDataSharing;
    int _termsState;
    _Bool _termsAgreed;
    int _shareSettingsState;
    _Bool _shareSettingsAgreed;
    int _authKitTrustState;
    int _basicConfigState;
    unsigned long long _basicConfigStartTicks;
    double _basicConfigSecs;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    double _wifiSetupStepSecs;
    double _wifiBonjourTestSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    unsigned long long _trSetupConfigurationStartTicks;
    double _trSetupConfigurationSecs;
    _Bool _trNeedsNetwork;
    NSSet *_trUnauthServices;
    int _trActivationState;
    unsigned long long _trActivationStartTicks;
    double _trActivationSecs;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    _Bool _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    double _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    _Bool _hasExistingHomePod;
    int _multiUserEnableState;
    int _multiUserEnableStepState;
    int _finishState;
    unsigned long long _finishStartTicks;
    double _finishSecs;
    double _iTunesWaitSecs;
    double _mediaSystemWaitSecs;
    double _totalSecs;
    _Bool _prefBonjourTest;
    _Bool _prefForceSiriGreeting;
    _Bool _prefLEDPasscodeEnabled;
    _Bool _prefMultiUser;
    _Bool _hasMultipleUsers;
    _Bool _liveOn;
    _Bool _pauseAfterPreAuth;
    unsigned char _stereoCounterpartColor;
    _Bool _touchRemoteEnabled;
    int _bonjourTestState;
    NSDictionary *_additionalMetrics;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    unsigned long long _peerFeatureFlags;
    NSDictionary *_preAuthResponse;
    UIViewController *_presentingViewController;
    unsigned long long _testFlags;
    id /* block */ _preAuthHandler;
    id /* block */ _progressHandler;
    id /* block */ _promptForAppleMusicHandler;
    id /* block */ _promptForHomeHandler;
    id /* block */ _promptForHomeiCloudHandler;
    id /* block */ _promptForiTunesSignInHandler;
    id /* block */ _promptForLocationEnableHandler;
    id /* block */ _promptForPersonalRequestsHandler;
    id /* block */ _promptForPINHandler;
    id /* block */ _promptForRoomHandler;
    id /* block */ _promptForSiriEnableHandler;
    id /* block */ _promptForTermsHandler;
    id /* block */ _promptToInstallHomeAppHandler;
    id /* block */ _promptToShareSettingsHandler;
    id /* block */ _promptForSiriLanguageHandler;
    id /* block */ _promptForStereoRoleHandler;
    id /* block */ _promptForStereoMultipleHandler;
}

@property(copy, nonatomic) id /* block */ promptForStereoMultipleHandler; // @synthesize promptForStereoMultipleHandler=_promptForStereoMultipleHandler;
@property(copy, nonatomic) id /* block */ promptForStereoRoleHandler; // @synthesize promptForStereoRoleHandler=_promptForStereoRoleHandler;
@property(copy, nonatomic) id /* block */ promptForSiriLanguageHandler; // @synthesize promptForSiriLanguageHandler=_promptForSiriLanguageHandler;
@property(copy, nonatomic) id /* block */ promptToShareSettingsHandler; // @synthesize promptToShareSettingsHandler=_promptToShareSettingsHandler;
@property(copy, nonatomic) id /* block */ promptToInstallHomeAppHandler; // @synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler;
@property(copy, nonatomic) id /* block */ promptForTermsHandler; // @synthesize promptForTermsHandler=_promptForTermsHandler;
@property(copy, nonatomic) id /* block */ promptForSiriEnableHandler; // @synthesize promptForSiriEnableHandler=_promptForSiriEnableHandler;
@property(copy, nonatomic) id /* block */ promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property(copy, nonatomic) id /* block */ promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) id /* block */ promptForPersonalRequestsHandler; // @synthesize promptForPersonalRequestsHandler=_promptForPersonalRequestsHandler;
@property(copy, nonatomic) id /* block */ promptForLocationEnableHandler; // @synthesize promptForLocationEnableHandler=_promptForLocationEnableHandler;
@property(copy, nonatomic) id /* block */ promptForiTunesSignInHandler; // @synthesize promptForiTunesSignInHandler=_promptForiTunesSignInHandler;
@property(copy, nonatomic) id /* block */ promptForHomeiCloudHandler; // @synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler;
@property(copy, nonatomic) id /* block */ promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property(copy, nonatomic) id /* block */ promptForAppleMusicHandler; // @synthesize promptForAppleMusicHandler=_promptForAppleMusicHandler;
@property(copy, nonatomic) id /* block */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) id /* block */ preAuthHandler; // @synthesize preAuthHandler=_preAuthHandler;
@property(nonatomic) _Bool touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(nonatomic) unsigned long long testFlags; // @synthesize testFlags=_testFlags;
@property(readonly, nonatomic) unsigned char stereoCounterpartColor; // @synthesize stereoCounterpartColor=_stereoCounterpartColor;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSDictionary *preAuthResponse; // @synthesize preAuthResponse=_preAuthResponse;
@property(nonatomic) unsigned long long peerFeatureFlags; // @synthesize peerFeatureFlags=_peerFeatureFlags;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(nonatomic) _Bool pauseAfterPreAuth; // @synthesize pauseAfterPreAuth=_pauseAfterPreAuth;
@property(nonatomic) _Bool liveOn; // @synthesize liveOn=_liveOn;
@property(readonly, nonatomic) _Bool hasMultipleUsers; // @synthesize hasMultipleUsers=_hasMultipleUsers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
@property(copy, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
- (void)audioSessionInterrupted:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)_setupAudio;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (_Bool)_recognizeVoiceAlreadyEnabled;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(id /* block */)arg3;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;
- (void)_logMetrics;
- (void)_homeKitUpdateiCloudSwitchState:(_Bool)arg1;
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;
- (void)_runFinishRequest;
- (int)_runFinishStart;
- (void)_runMultiUserEnableEnableSettingStart:(id)arg1 privateSettings:(_Bool)arg2;
- (void)_runMultiUserEnableHome;
- (int)_runMultiUserEnable;
- (int)_runHomeKitSetup;
- (int)_runCDPSetup:(_Bool)arg1;
- (int)_runTRAuthentication;
- (int)_runTRActivation;
- (int)_runTRSetupConfiguration;
- (int)_runWiFiSetup;
- (int)_runTRSessionStart;
- (int)_runAppleMusic;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (int)_runBasicConfig;
- (int)_runPairSetup;
- (void)_runSiriPasscodeStartPairSetup;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeInitRequest;
- (int)_runSiriPasscode;
- (int)_runAuthKitTrustFinish;
- (void)_runAuthKitTrustStartIfNeeded;
- (int)_runShareSettings;
- (int)_runTerms;
- (int)_runSiriForEveryone;
- (int)_runPersonalRequests;
- (void)_runRecognizeVoiceCheckVoiceProfileResponse:(_Bool)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckVoiceProfileStart;
- (void)_runRecognizeVoiceCheckLanguageResponse:(id)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckLanguageStart;
- (int)_runRecognizeVoice;
- (int)_runSiriLanguage;
- (int)_runCheckAccount;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (void)_runPreAuthRequest;
- (int)_runPreAuth;
- (void)_runStereoPairUserInputPickColors:(_Bool)arg1;
- (int)_runStereoPairUserInput;
- (int)_runHomeKitUserInput;
- (int)_runPreflightMisc;
- (int)_runPreflightiTunes;
- (int)_runPreflightiCloud;
- (int)_runPreflightWiFi;
- (int)_runSFSessionStart;
- (void)_run;
- (void)termsAgreed;
- (void)stereoMultiplePicked:(id)arg1;
- (void)stereoRolePicked:(int)arg1;
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(id /* block */)arg2;
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(id /* block */)arg2;
- (void)speakPasscodeWithCompletion:(id /* block */)arg1;
- (void)skipiTunesSignIn;
- (void)skipAudioPasscode;
- (void)siriLanguagePicked:(long long)arg1;
- (void)siriForEveryoneAnswered;
@property(readonly, nonatomic) _Bool siriDataSharingEnabled;
- (void)siriEnable;
- (void)shareSettingsAgreed;
@property(readonly, nonatomic) NSString *selectedSiriLanguage;
@property(readonly, nonatomic) HMHome *selectedHome;
- (void)recognizeVoiceAnswered:(_Bool)arg1;
- (void)_preflightAppleMusicCompleted:(int)arg1;
- (void)_preflightAppleMusic;
- (void)preflight;
- (void)playAudioPasscodeAgain;
- (void)personalRequestsEnabled:(_Bool)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)locationEnable:(_Bool)arg1;
- (void)ledPasscodeMatched;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeKitReselectHome;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeiCloudEnable;
- (void)homeAppInstallChoice:(_Bool)arg1;
- (void)disconnect;
- (void)appleMusicNext;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanupSession;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

