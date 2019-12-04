//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSync2Coordinator.h>

#import <CoreDuetSync/_CDRemoteUserContextServer-Protocol.h>
#import <CoreDuetSync/_DKSyncRemoteContextStorageDelegate-Protocol.h>

@class NSObject, NSUUID;
@protocol OS_os_transaction, _DKSyncRemoteContextStorage;

@interface _DKSync3Coordinator : _DKSync2Coordinator <_DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer>
{
    unsigned long long _watchingDeviceTypes;
    NSObject<OS_os_transaction> *_watchingDevicesTransaction;
    id <_DKSyncRemoteContextStorage> _transportMDCSRapport;
}

@property(retain, nonatomic) id <_DKSyncRemoteContextStorage> transportMDCSRapport; // @synthesize transportMDCSRapport=_transportMDCSRapport;
- (void)handleContextChangedNotification:(id)arg1;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)multiDeviceContextStoreDevices;
- (void)start;
- (void)setupStorage;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;
- (id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;
- (_Bool)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
- (id)peersForContextStoreDeviceIDs:(id)arg1;
- (id)registrationIdentifierForPeer:(id)arg1 remoteRegistrationIdentifier:(id)arg2;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 keyPaths:(id)arg3;
- (void)setArchivedObjects:(id)arg1 peer:(id)arg2;
- (id)archivedObjectsForKeyPaths:(id)arg1;
- (id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg1;
- (void)_requestActivateDevicesWithHandler:(id /* block */)arg1;
- (void)requestActivateDevicesWithHandler:(id /* block */)arg1;
- (void)_fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(id /* block */)arg2;
- (_Bool)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;
- (_Bool)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(id /* block */)arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(id /* block */)arg3;
- (id)sourceDeviceUUID;

// Remaining properties
@property(readonly, nonatomic) NSUUID *deviceUUID;

@end

