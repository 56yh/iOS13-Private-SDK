//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>
#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheralManager, CUSystemMonitor, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUTDSAgent : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate>
{
    unsigned char _advertiseBytes[32];
    unsigned long long _advertiseLen;
    unsigned long long _advertiserCount;
    unsigned long long _advertiseProviderCount;
    unsigned long long _advertiseSeekerCount;
    unsigned long long _advertiseTriggerCount;
    _Bool _advertisingStartCalled;
    CDStruct_83abfce7 _bleAddress48;
    _Bool _bleAddressOverride;
    _Bool _bleAddressValid;
    CUSystemMonitor *_bleAddressMonitor;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct NSMutableDictionary *_devices;
    NSObject<OS_dispatch_source> *_lingerTimer;
    CBPeripheralManager *_peripheralManager;
    struct NSMutableSet *_providers;
    _Bool _scannerStartCalled;
    struct NSMutableSet *_seekers;
    struct NSMutableSet *_sessions;
    struct LogCategory *_ucat;
    unsigned int _updateIDLast;
    _Bool _updatePending;
}

+ (id)sharedTDSAgent;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_processChanges;
- (void)_cancelLingerTimer;
- (void)_startLingerTimer;
- (void)_scannerEnsureStopped;
- (void)_scannerEnsureStarted;
- (void)_bleAddressChanged;
- (void)_bleAddressMonitorEnsureStopped;
- (void)_bleAddressMonitorEnsureStarted;
- (void)_advertiserEnsureStopped;
- (void)_advertiserEnsureStarted;
- (void)_update;
- (void)_scheduleUpdate;
- (void)removeSession:(id)arg1;
- (void)addSession:(id)arg1;
- (void)removeSeeker:(id)arg1;
- (void)addSeeker:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)addProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

