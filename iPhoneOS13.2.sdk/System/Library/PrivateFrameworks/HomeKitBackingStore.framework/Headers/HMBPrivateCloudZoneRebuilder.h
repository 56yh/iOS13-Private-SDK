//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBCloudZoneRebuilder-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>
#import <HomeKitBackingStore/HMFTimerDelegate-Protocol.h>

@class CKRecord, HMBCloudZone, HMBCloudZoneRebuilderStatus, HMFTimer, HMFUnfairLock, NAFuture, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder>
{
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
    NAFuture *_rebuildCompleteFuture;
    HMFUnfairLock *_propertyLock;
    CKRecord *_previousSentinelRebuildRecord;
    NSUUID *_lastRebuildUUID;
    HMFTimer *_uploadMonitorWatchdogTimer;
    HMBCloudZone *_cloudZone;
}

+ (id)logCategory;
@property(nonatomic) __weak HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain, nonatomic) HMFTimer *uploadMonitorWatchdogTimer; // @synthesize uploadMonitorWatchdogTimer=_uploadMonitorWatchdogTimer;
@property(retain, nonatomic) NSUUID *lastRebuildUUID; // @synthesize lastRebuildUUID=_lastRebuildUUID;
@property(retain, nonatomic) CKRecord *previousSentinelRebuildRecord; // @synthesize previousSentinelRebuildRecord=_previousSentinelRebuildRecord;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(retain, nonatomic) NAFuture *rebuildCompleteFuture; // @synthesize rebuildCompleteFuture=_rebuildCompleteFuture;
@property(copy) HMBCloudZoneRebuilderStatus *rebuilderStatus; // @synthesize rebuilderStatus=_rebuilderStatus;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)handleZoneChanged;
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;
- (void)rebuild;
- (void)handleIdentityLost;
- (id)zoneStartUp;
- (id)initWithCloudZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

