//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/IDSDevice.h>

@class HMDDeviceCapabilities, HMDHomeKitVersion, HMFProductInfo;

@interface IDSDevice (HMDAccounts)
- (id)hmd_preferredHandleForService:(id)arg1;
- (id)hmd_handlesForService:(id)arg1;
@property(readonly, nonatomic) HMDDeviceCapabilities *hmd_capabilities;
@property(readonly, nonatomic) HMDHomeKitVersion *hmd_version;
@property(readonly, nonatomic) HMFProductInfo *hmd_productInfo;
@end

