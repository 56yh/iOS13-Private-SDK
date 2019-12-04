//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDAccessory, NSString;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _addOperation;
    _Bool _addViaWAC;
    _Bool _wacLegacy;
    _Bool _usedWiFiPPSK;
    _Bool _usedOwnershipProof;
    _Bool _networkRouterAdd;
    _Bool _networkRouterReplace;
    HMDAccessory *_pairedAccessory;
    long long _linkType;
    long long _certificationStatus;
    unsigned long long _authMethod;
    NSString *_identifier;
}

+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;
+ (id)pairingAccessory:(id)arg1 home:(id)arg2;
+ (id)pairingAccessoryWithDescription:(id)arg1 home:(id)arg2;
+ (id)uuid;
+ (void)initialize;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isNetworkRouterReplace) _Bool networkRouterReplace; // @synthesize networkRouterReplace=_networkRouterReplace;
@property(nonatomic, getter=isNetworkRouterAdd) _Bool networkRouterAdd; // @synthesize networkRouterAdd=_networkRouterAdd;
@property(nonatomic, getter=isUsedOwnershipProof) _Bool usedOwnershipProof; // @synthesize usedOwnershipProof=_usedOwnershipProof;
@property(nonatomic, getter=isUsedWiFiPPSK) _Bool usedWiFiPPSK; // @synthesize usedWiFiPPSK=_usedWiFiPPSK;
@property(nonatomic) unsigned long long authMethod; // @synthesize authMethod=_authMethod;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(nonatomic, getter=isWacLegacy) _Bool wacLegacy; // @synthesize wacLegacy=_wacLegacy;
@property(nonatomic, getter=isAddViaWAC) _Bool addViaWAC; // @synthesize addViaWAC=_addViaWAC;
@property(readonly, nonatomic, getter=isAddOperation) _Bool addOperation; // @synthesize addOperation=_addOperation;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) HMDAccessory *pairedAccessory; // @synthesize pairedAccessory=_pairedAccessory;
- (void)pairedAccessory:(id)arg1;
- (void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2;
- (void)setAuthenticationMethod:(unsigned long long)arg1;
- (void)setAddedViaWAC:(_Bool)arg1;
- (id)initWithAccessoryDescription:(id)arg1 home:(id)arg2;
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 isAddOperation:(_Bool)arg5;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

