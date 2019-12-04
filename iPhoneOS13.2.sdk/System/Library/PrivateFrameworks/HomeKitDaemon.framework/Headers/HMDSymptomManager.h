//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFUnfairLock, HMFWiFiManager, NSMapTable, NSObject, NSSet, NSString;
@protocol HMDCompanionLinkClient, HMDSharingDeviceDiscovery, OS_dispatch_queue;

@interface HMDSymptomManager : HMFObject <HMFLogging>
{
    _Bool _deviceProblemNotificationTokenValid;
    _Bool _supportsRegisteringAccessories;
    int _deviceProblemNotificationToken;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFUnfairLock *_lock;
    id <HMDSharingDeviceDiscovery> _deviceDiscovery;
    id <HMDCompanionLinkClient> _companionLinkClient;
    HMFWiFiManager *_wifiManager;
    NSMapTable *_symptomContainerByRegisteredAccessory;
    NSMapTable *_nearbySFDevices;
    NSMapTable *_networkReachableRPCompanionLinkDevices;
    unsigned long long _deviceDiscoveryFlags;
}

+ (id)logCategory;
+ (id)sharedManager;
@property(nonatomic) _Bool supportsRegisteringAccessories; // @synthesize supportsRegisteringAccessories=_supportsRegisteringAccessories;
@property(nonatomic, getter=isDeviceProblemNotificationTokenValid) _Bool deviceProblemNotificationTokenValid; // @synthesize deviceProblemNotificationTokenValid=_deviceProblemNotificationTokenValid;
@property(nonatomic) int deviceProblemNotificationToken; // @synthesize deviceProblemNotificationToken=_deviceProblemNotificationToken;
@property(nonatomic) unsigned long long deviceDiscoveryFlags; // @synthesize deviceDiscoveryFlags=_deviceDiscoveryFlags;
@property(readonly, nonatomic) NSMapTable *networkReachableRPCompanionLinkDevices; // @synthesize networkReachableRPCompanionLinkDevices=_networkReachableRPCompanionLinkDevices;
@property(readonly, nonatomic) NSMapTable *nearbySFDevices; // @synthesize nearbySFDevices=_nearbySFDevices;
@property(readonly, nonatomic) NSMapTable *symptomContainerByRegisteredAccessory; // @synthesize symptomContainerByRegisteredAccessory=_symptomContainerByRegisteredAccessory;
@property(readonly, nonatomic) HMFWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(readonly, nonatomic) id <HMDCompanionLinkClient> companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
@property(readonly, nonatomic) id <HMDSharingDeviceDiscovery> deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleCurrentNetworkDidChangeNotification:(id)arg1;
- (void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)arg1;
- (void)handleAccessoryRemovedNotification:(id)arg1;
- (void)_rpDeviceLostHandler:(id)arg1;
- (void)_rpDeviceChangedHandler:(id)arg1;
- (void)_rpDeviceFoundHandler:(id)arg1;
- (void)_sfDeviceLostHandler:(id)arg1;
- (void)_sfDeviceChangedHandler:(id)arg1;
- (void)_sfDeviceFoundHandler:(id)arg1;
- (void)_updateSymptomsForAllRegisteredAccessories;
- (void)_updateSymptomsForRegisteredAccessory:(id)arg1;
- (void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)arg1;
- (id)_registeredAccessoryWithIDSIdentifier:(id)arg1;
- (void)_initiateFixForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (id)_localSymptomsForRegisteredAccessory:(id)arg1;
- (id)_currentDeviceSymptoms;
- (void)_stopCompanionLinkClient;
- (void)_stopDeviceDiscovery;
- (void)_stop;
- (void)_startCompanionLinkClient;
- (void)_startDeviceDiscovery;
- (void)_start;
- (void)initiateFixForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)deregisterAccessory:(id)arg1;
- (void)registerAccessory:(id)arg1 delegate:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *currentDeviceSymptoms;
- (void)dealloc;
- (id)initWithDeviceDiscovery:(id)arg1 companionLinkClient:(id)arg2 wifiManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

