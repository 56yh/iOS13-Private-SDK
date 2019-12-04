//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordZoneID, HMBLocalZone, HMDNetworkRouterFirewallRuleCloudZone, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject
{
    _Bool _zoneHasChanged;
    _Bool _zoneWasDeleted;
    _Bool _ignoreChangeToken;
    CKRecordZoneID *_zoneID;
    NSMutableSet *_recordIDs;
    HMDNetworkRouterFirewallRuleCloudZone *_cloudZone;
    HMBLocalZone *_mirroredLocalZone;
}

@property(retain, nonatomic) HMBLocalZone *mirroredLocalZone; // @synthesize mirroredLocalZone=_mirroredLocalZone;
@property(retain, nonatomic) HMDNetworkRouterFirewallRuleCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) _Bool ignoreChangeToken; // @synthesize ignoreChangeToken=_ignoreChangeToken;
@property(readonly, nonatomic) _Bool zoneWasDeleted; // @synthesize zoneWasDeleted=_zoneWasDeleted;
@property(readonly, nonatomic) _Bool zoneHasChanged; // @synthesize zoneHasChanged=_zoneHasChanged;
@property(readonly, nonatomic) NSMutableSet *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void)forceRefresh;
- (void)markDeleted;
- (void)markChanged;
- (id)initWithZoneID:(id)arg1;

@end

