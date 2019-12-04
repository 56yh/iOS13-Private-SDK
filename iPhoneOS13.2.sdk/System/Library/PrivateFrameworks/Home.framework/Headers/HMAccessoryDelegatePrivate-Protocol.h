//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HMAccessoryDelegate-Protocol.h>

@class ACAccount, HMAccessory, HMAccessorySettings, HMCharacteristic, HMFPairingIdentity, HMFSoftwareVersion, HMService, HMSymptomsHandler, NSString;

@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional
- (void)accessoryDidUpdateReachableTransports:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateLastKnownSleepDiscoveryModeForService:(HMService *)arg2;
- (void)accessoryDidUpdateSupportsCompanionInitiatedRestart:(HMAccessory *)arg1;
- (void)accessoryDidUpdateMultiUserSupport:(HMAccessory *)arg1;
- (void)accessoryDidRemoveSymptomsHandler:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didAddSymptomsHandler:(HMSymptomsHandler *)arg2;
- (void)accessory:(HMAccessory *)arg1 didRemoveControlTarget:(HMAccessory *)arg2;
- (void)accessory:(HMAccessory *)arg1 didAddControlTarget:(HMAccessory *)arg2;
- (void)accessoryDidUpdateTargetControlSupport:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfigurationStateForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateServiceSubtypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateDefaultNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfiguredNameForService:(HMService *)arg2;
- (void)accessoryDidUpdateControllable:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateLoggedInAccount:(ACAccount *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSoftwareVersion:(HMFSoftwareVersion *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
@end

