//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSData, NSSet, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging>
{
    NSSet *_lastSynchronizedRecordIDs;
}

+ (id)hmbProperties;
+ (id)parentModelID;
+ (id)modelID;
+ (id)logCategory;
@property(retain, nonatomic) NSSet *lastSynchronizedRecordIDs; // @synthesize lastSynchronizedRecordIDs=_lastSynchronizedRecordIDs;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSData *archivedLastSynchronizedRecordIDs; // @dynamic archivedLastSynchronizedRecordIDs;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

