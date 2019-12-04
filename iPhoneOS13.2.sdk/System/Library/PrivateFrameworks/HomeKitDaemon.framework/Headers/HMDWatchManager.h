//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _pairedWithWatch;
    NSArray *_connectedWatches;
    IDSService *_service;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)isCompatibleWatchDevice:(id)arg1;
+ (id)sharedManager;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)connectedWatchFromDeviceID:(id)arg1;
@property(readonly, copy) NSArray *connectedWatches; // @synthesize connectedWatches=_connectedWatches;
@property(readonly, getter=isPairedWithWatch) _Bool pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property(readonly, copy) NSArray *watches;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

