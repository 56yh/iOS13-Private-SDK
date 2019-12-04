//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDXPCProtocol-Protocol.h>

@class DEDController, NSString;
@protocol OS_os_log;

@interface DEDXPCInbound : NSObject <DEDXPCProtocol>
{
    NSObject<OS_os_log> *_log;
    DEDController *_delegate;
}

@property __weak DEDController *delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)cancelNotifySession:(id)arg1;
- (void)notifySession:(id)arg1;
- (void)didCancelSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)pingSession:(id)arg1;
- (void)sessionWithIdentifier:(id)arg1 isActive:(_Bool)arg2;
- (void)hasActiveSession:(id)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)successPINForDevice:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)promptPINForDevice:(id)arg1;
- (void)startPairSetupForDevice:(id)arg1;
- (void)gotDeviceUpdate:(id)arg1;
- (void)didDiscoverDevices:(id)arg1;
- (void)stopDeviceDiscovery;
- (void)discoverAllAvailableDevices;
- (void)pong;
- (void)ping;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

