//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/IDSService.h>

@class HMDAccountHandle, HMDDeviceHandle, NSArray;

@interface IDSService (HMDAccounts)
@property(readonly, copy) HMDDeviceHandle *hmd_localDeviceHandle;
@property(readonly, copy) HMDAccountHandle *hmd_preferredHandle;
@property(readonly, copy) NSArray *hmd_handles;
@property(readonly, nonatomic, getter=hmd_isActive) _Bool hmd_active;
@end

