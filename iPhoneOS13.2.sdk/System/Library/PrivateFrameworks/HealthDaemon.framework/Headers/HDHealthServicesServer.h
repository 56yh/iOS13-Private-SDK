//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDHealthServicesServerInterface-Protocol.h>

@class HDHealthServiceManager, HDIdentifierTable, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol HKHealthStoreClientInterface;

@interface HDHealthServicesServer : HDSubserver <HDHealthServicesServerInterface>
{
    HDHealthServiceManager *_healthServiceManager;
    HDIdentifierTable *_healthServiceDiscoveryServerIDs;
    NSMutableDictionary *_healthServiceDiscoveryClientIDs;
    HDIdentifierTable *_healthDeviceSessionServerIDs;
    NSMutableDictionary *_healthServiceSessionClientIDs;
    NSMutableSet *_healthServiceClosedSessionServerIDs;
    NSMutableSet *_healthServiceClosedSessionClientIDs;
    NSUUID *_subserverUUID;
    id <HKHealthStoreClientInterface> _clientRemoteObjectProxy;
}

@property(retain, nonatomic) id <HKHealthStoreClientInterface> clientRemoteObjectProxy; // @synthesize clientRemoteObjectProxy=_clientRemoteObjectProxy;
@property(retain, nonatomic) NSUUID *subserverUUID; // @synthesize subserverUUID=_subserverUUID;
@property(retain, nonatomic) NSMutableSet *healthServiceClosedSessionClientIDs; // @synthesize healthServiceClosedSessionClientIDs=_healthServiceClosedSessionClientIDs;
@property(retain, nonatomic) NSMutableSet *healthServiceClosedSessionServerIDs; // @synthesize healthServiceClosedSessionServerIDs=_healthServiceClosedSessionServerIDs;
@property(retain, nonatomic) NSMutableDictionary *healthServiceSessionClientIDs; // @synthesize healthServiceSessionClientIDs=_healthServiceSessionClientIDs;
@property(retain, nonatomic) HDIdentifierTable *healthDeviceSessionServerIDs; // @synthesize healthDeviceSessionServerIDs=_healthDeviceSessionServerIDs;
@property(retain, nonatomic) NSMutableDictionary *healthServiceDiscoveryClientIDs; // @synthesize healthServiceDiscoveryClientIDs=_healthServiceDiscoveryClientIDs;
@property(retain, nonatomic) HDIdentifierTable *healthServiceDiscoveryServerIDs; // @synthesize healthServiceDiscoveryServerIDs=_healthServiceDiscoveryServerIDs;
@property(retain, nonatomic) HDHealthServiceManager *healthServiceManager; // @synthesize healthServiceManager=_healthServiceManager;
- (_Bool)_isClientSessionValid:(unsigned long long)arg1;
- (_Bool)_isServerSessionValid:(unsigned long long)arg1;
- (void)_closeSessionBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2;
- (unsigned long long)_sessionClientIdentifierForServerIdentifier:(unsigned long long)arg1;
- (unsigned long long)_sessionServerIdentifierForClientIdentifier:(unsigned long long)arg1;
- (unsigned long long)_discoveryServerIdentifierForClientIdentifier:(unsigned long long)arg1;
- (void)_closeDiscoveryBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2;
- (unsigned long long)_healthDeviceClientSessionIdentifier:(unsigned long long)arg1;
- (unsigned long long)_healthDeviceClientDiscoveryIdentifier:(unsigned long long)arg1;
- (void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)remote_getSupportedPropertyNamesWithHandler:(id /* block */)arg1;
- (void)remote_setEnabledStatus:(_Bool)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_removePeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)remote_removePairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_addPairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_filterOnlyUserManageablePeripheralsFromServices:(id)arg1;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)remote_endHealthServiceSession:(unsigned long long)arg1;
- (void)remote_startHealthServiceSession:(id)arg1 client:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)remote_startHealthServiceDiscovery:(long long)arg1 client:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(id /* block */)arg1;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_beginBluetoothStatusUpdates:(id /* block */)arg1 client:(id)arg2;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

