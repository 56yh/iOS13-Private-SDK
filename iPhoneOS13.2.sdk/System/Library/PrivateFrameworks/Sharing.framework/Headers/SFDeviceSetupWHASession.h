//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFSession, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHASession : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFSession *_sfSession;
    int _sfSessionState;
    _Bool _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned long long _peerFeatureFlags;
    unsigned long long _peerProblemsFlags;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    _Bool _trSetupConfigurationEnabled;
    int _trSetupConfigurationState;
    NSSet *_trUnauthServices;
    _Bool _trAuthenticationEnabled;
    int _trAuthenticationState;
    _Bool _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetup;
    int _homeKitState;
    _Bool _homeKitDoFullSetup;
    int _finishState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    id /* block */ _progressHandler;
    id /* block */ _promptForHomeHandler;
    id /* block */ _promptForPINHandler;
    id /* block */ _promptForRoomHandler;
}

@property(copy, nonatomic) id /* block */ promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property(copy, nonatomic) id /* block */ promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) id /* block */ promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property(copy, nonatomic) id /* block */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)_verifyiCloudMatch:(unsigned long long)arg1 error:(id *)arg2;
- (int)_runFinish;
- (int)_runHomeKitSetup;
- (int)_runCDPSetup;
- (int)_runTRAuthentication;
- (int)_runTRSetupConfiguration;
- (int)_runTRSessionStart;
- (void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2;
- (void)_runInfoExchangeRequest;
- (int)_runInfoExchange;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeKitSelectHome:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

