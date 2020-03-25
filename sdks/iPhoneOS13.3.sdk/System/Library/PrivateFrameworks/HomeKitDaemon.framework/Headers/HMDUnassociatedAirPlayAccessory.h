//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>

#import <HomeKitDaemon/HMDAccessoryAssociation-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFPairingIdentity;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation>
{
    HMFPairingIdentity *_pairingIdentity;
}

+ (id)logCategory;
+ (Class)modelClass;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)associateToHome:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly) BOOL supportsAssociation;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;

@end
