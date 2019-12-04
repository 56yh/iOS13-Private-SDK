//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPStateController, CoreTelephonyClient, NSData, NSString, RPFileTransferSession, SFDevice, SFDeviceDiscovery, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupSessioniOS : NSObject
{
    _Bool _activateCalled;
    unsigned int _appNextID;
    _Bool _buddyComplete;
    _Bool _configRequestSent;
    _Bool _configResponseReceived;
    _Bool _invalidateCalled;
    _Bool _pairSetupDone;
    _Bool _pairSetupReset;
    _Bool _pairSetupRunning;
    int _preAuthPairSetupState;
    _Bool _preAuthRequestSent;
    _Bool _preAuthResponseReceived;
    NSData *_resumeAuthTag;
    SFDeviceDiscovery *_resumeDiscovery;
    NSString *_resumePassword;
    int _resumeState;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    CoreTelephonyClient *_eSIMClient;
    _Bool _eSIMSetupEnabled;
    int _eSIMSetupState;
    int _cdpState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    unsigned int _pairFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RPFileTransferSession *_fileTransferSessionTemplate;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    SFDevice *_peerDevice;
    id /* block */ _progressHandler;
    id /* block */ _promptForPINHandler;
    id /* block */ _receivedObjectHandler;
}

@property(copy, nonatomic) id /* block */ receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;
@property(copy, nonatomic) id /* block */ promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) id /* block */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(nonatomic) unsigned int pairFlags; // @synthesize pairFlags=_pairFlags;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate; // @synthesize fileTransferSessionTemplate=_fileTransferSessionTemplate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)tryPIN:(id)arg1;
- (void)sendAppEvent:(id)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_handleSetupResumeFoundDevice:(id)arg1;
- (void)_handleSetupPeerSuspended;
- (void)_handleSetupActionSoftwareUpdate;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_startBuddySession;
- (void)_sendPreAuthInfo;
- (void)_receivedConfigResponse:(id)arg1;
- (void)_sendConfigInfo;
- (int)_runResume;
- (int)_runCoreCDPSetup;
- (int)_runESIMSetup;
- (int)_runPreAuthPairSetup;
- (void)_runSFSessionActivated;
- (void)_runSFSessionStart;
- (void)_run;
- (void)_completedWithError:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

