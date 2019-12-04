//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import <HomeKitDaemon/HMDObjectLookupScanProtocol-Protocol.h>

@class HMDHome, NSString;

@interface HMDHomeObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHome *_home;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_scanUsers;
- (void)_scanMediaSystems;
- (void)_scanResidentDevices;
- (void)_scanTriggers;
- (void)_scanServiceGroups;
- (void)_scanActionSets;
- (void)_scanZones;
- (void)_scanRooms;
- (void)_scanSetting:(id)arg1;
- (void)_scanSettingGroup:(id)arg1;
- (void)_scanAccessoriesAndServices;
- (void)scanObjects;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

