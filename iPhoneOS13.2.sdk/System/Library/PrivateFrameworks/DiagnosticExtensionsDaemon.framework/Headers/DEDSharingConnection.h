//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DEDController, DEDSharingInbound, NSMutableDictionary, NSMutableSet, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;

@interface DEDSharingConnection : NSObject
{
    _Bool _listenForClients;
    _Bool _started;
    DEDSharingInbound *_inbound;
    DEDController *_controller;
    NSMutableDictionary *_pongingDevices;
    NSMutableDictionary *_deviceSessions;
    NSMutableDictionary *_discoveredDevices;
    NSObject<OS_dispatch_queue> *_run_queue;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_semaphore> *_bluetoothSessionSemaphore;
    SFService *_pingService;
    SFDeviceDiscovery *_pingDiscovery;
    NSMutableSet *_visiblePingUUIDs;
    SFService *_workerService;
    SFDeviceDiscovery *_pongDiscovery;
    id /* block */ _deviceStatusCallback;
}

+ (void)checkIn;
@property(copy) id /* block */ deviceStatusCallback; // @synthesize deviceStatusCallback=_deviceStatusCallback;
@property(retain, nonatomic) SFDeviceDiscovery *pongDiscovery; // @synthesize pongDiscovery=_pongDiscovery;
@property(retain, nonatomic) SFService *workerService; // @synthesize workerService=_workerService;
@property(retain) NSMutableSet *visiblePingUUIDs; // @synthesize visiblePingUUIDs=_visiblePingUUIDs;
@property(retain, nonatomic) SFDeviceDiscovery *pingDiscovery; // @synthesize pingDiscovery=_pingDiscovery;
@property(retain, nonatomic) SFService *pingService; // @synthesize pingService=_pingService;
@property(retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore; // @synthesize bluetoothSessionSemaphore=_bluetoothSessionSemaphore;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSObject<OS_dispatch_queue> *run_queue; // @synthesize run_queue=_run_queue;
@property(retain) NSMutableDictionary *discoveredDevices; // @synthesize discoveredDevices=_discoveredDevices;
@property(retain) NSMutableDictionary *deviceSessions; // @synthesize deviceSessions=_deviceSessions;
@property(retain) NSMutableDictionary *pongingDevices; // @synthesize pongingDevices=_pongingDevices;
@property _Bool started; // @synthesize started=_started;
@property _Bool listenForClients; // @synthesize listenForClients=_listenForClients;
@property __weak DEDController *controller; // @synthesize controller=_controller;
@property(retain) DEDSharingInbound *inbound; // @synthesize inbound=_inbound;
- (void)addIncomingSFSession:(id)arg1 forIdentifier:(id)arg2;
- (void)stopSession:(id)arg1;
- (void)_verifyPairingForSession:(id)arg1 holdForPIN:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)createSharingSessionForSFDevice:(id)arg1 holdForPIN:(_Bool)arg2 completion:(id /* block */)arg3;
- (id)blockingSharingSessionForDevice:(id)arg1;
- (id)_existingSharingSessionForDevice:(id)arg1;
- (void)_configureService:(id)arg1 withLabel:(id)arg2 needsSetup:(_Bool)arg3 actionType:(unsigned char)arg4 completion:(id /* block */)arg5;
- (void)_saveDevice:(id)arg1;
- (void)updateControllerWithDevice:(id)arg1 andStatus:(long long)arg2;
- (void)didStartBugSessionWithInfo:(id)arg1 forCaller:(id)arg2;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (id)sharingOutboundForBugSessionIdentifier:(id)arg1 device:(id)arg2;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)startPairSetupForDevice:(id)arg1;
- (void)checkReadinessForSFDevice:(id)arg1 session:(id)arg2;
- (void)getSystemInfoForDevice:(id)arg1;
- (void)trySessionWithFoundDevice:(id)arg1;
- (void)stopPongDiscovery;
- (void)_handleIncomingPongingDevice:(id)arg1;
- (void)startPongDiscovery;
- (void)stopPingDiscovery;
- (void)_handleIncomingPingingDevice:(id)arg1;
- (void)startPingDiscovery;
- (void)startWorkerService;
- (void)stopPongAdvertisement;
- (void)startPongAdvertisement;
- (void)updatePongAdvertisement;
- (void)stopPingService;
- (void)startPingServiceWithCompletion:(id /* block */)arg1;
- (void)stopDiscovery;
- (void)discoverDevicesWithCompletion:(id /* block */)arg1;
- (void)setDeviceDiscoveryCallback:(id /* block */)arg1;
- (void)start;
- (void)configureListenForClients:(_Bool)arg1;
- (void)configureSharingInbound:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

