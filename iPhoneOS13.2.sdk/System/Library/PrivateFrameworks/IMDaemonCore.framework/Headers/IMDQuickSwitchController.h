//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>
{
    IDSService *_quickSwitchIDSService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IDSService *quickSwitchIDSService; // @synthesize quickSwitchIDSService=_quickSwitchIDSService;
- (void)_notifyPSYDataSent;
- (void)_notifyPSYWithResult:(_Bool)arg1;
- (id)_defaultPairedDevice;
- (_Bool)_isPairedDeviceInProxyMode;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (_Bool)_sendIDSMessage:(id)arg1;
- (_Bool)_sendIDSFile:(id)arg1 withCommand:(long long)arg2;
- (void)_sendQuickSwitchCompletedWithResult:(_Bool)arg1;
- (void)_handleIncomingRecents:(id)arg1;
- (void)_handleIncomingDB:(id)arg1;
- (void)_handleQuickSwitchCompleted:(id)arg1;
- (void)_handleRecentsRequest;
- (void)_handleDBVersionResponse:(id)arg1;
- (_Bool)_sendZippedFileAtPath:(id)arg1 withCommand:(long long)arg2;
- (void)_quickSwitchCompleted:(_Bool)arg1;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_sendRecentsRequest;
- (void)_sendDBVersionResponse:(long long)arg1;
- (void)_initiateQuickSwitch;
- (void)_decompressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_compressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_cleanUpTemporaryFiles;
- (void)_deleteFileAtPath:(id)arg1;
- (_Bool)_truncateDBToPath:(id)arg1;
- (unsigned long long)_getFileSizeAtPath:(id)arg1;
- (id)_getZippedDBPath;
- (id)_getDowngradedDBPath;
- (id)_getTruncatedDBPath;
- (id)_getZippedRecentsPath;
- (id)_getTempRecentsPath;
- (id)_getTempDBPath;
- (long long)_getCurrentDBVersion;
- (void)dummyMethod;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

