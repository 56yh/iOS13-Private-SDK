//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryConfiguration, HMFTimer, NSData, NSString, NSUUID;

@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject
{
    _Bool _allowAddUnauthenticatedAccessory;
    _Bool _provideNetworkCredentialsToAccessory;
    _Bool _setupCodeProvided;
    _Bool _needsUserConsent;
    long long _linkType;
    HMFTimer *_pairingInterruptionTimer;
    id /* block */ _addAccessoryCompletionHandler;
    id /* block */ _addAccessoryProgressHandler;
    id /* block */ _setupCodeProviderCompletionHandler;
    HMFTimer *_pairingRetryTimer;
    HMFTimer *_reconfirmTimer;
    HAPAccessoryConfiguration *_hapAccessoryConfiguration;
    NSString *_accessoryName;
    NSUUID *_accessoryUUID;
    NSString *_accessoryServerIdentifier;
    NSString *_homeName;
    NSString *_setupCode;
    NSString *_setupID;
    NSData *_ownershipToken;
}

@property(retain, nonatomic) NSData *ownershipToken; // @synthesize ownershipToken=_ownershipToken;
@property(retain, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property(retain, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property(retain, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(retain, nonatomic) NSString *accessoryServerIdentifier; // @synthesize accessoryServerIdentifier=_accessoryServerIdentifier;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) HAPAccessoryConfiguration *hapAccessoryConfiguration; // @synthesize hapAccessoryConfiguration=_hapAccessoryConfiguration;
@property(nonatomic) _Bool needsUserConsent; // @synthesize needsUserConsent=_needsUserConsent;
@property(nonatomic) _Bool setupCodeProvided; // @synthesize setupCodeProvided=_setupCodeProvided;
@property(nonatomic) _Bool provideNetworkCredentialsToAccessory; // @synthesize provideNetworkCredentialsToAccessory=_provideNetworkCredentialsToAccessory;
@property(nonatomic) _Bool allowAddUnauthenticatedAccessory; // @synthesize allowAddUnauthenticatedAccessory=_allowAddUnauthenticatedAccessory;
@property(retain, nonatomic) HMFTimer *reconfirmTimer; // @synthesize reconfirmTimer=_reconfirmTimer;
@property(retain, nonatomic) HMFTimer *pairingRetryTimer; // @synthesize pairingRetryTimer=_pairingRetryTimer;
@property(copy, nonatomic) id /* block */ setupCodeProviderCompletionHandler; // @synthesize setupCodeProviderCompletionHandler=_setupCodeProviderCompletionHandler;
@property(copy, nonatomic) id /* block */ addAccessoryProgressHandler; // @synthesize addAccessoryProgressHandler=_addAccessoryProgressHandler;
@property(copy, nonatomic) id /* block */ addAccessoryCompletionHandler; // @synthesize addAccessoryCompletionHandler=_addAccessoryCompletionHandler;
@property(retain, nonatomic) HMFTimer *pairingInterruptionTimer; // @synthesize pairingInterruptionTimer=_pairingInterruptionTimer;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
- (_Bool)matchesAccessoryServer:(id)arg1;
- (_Bool)matchesUnpairedAccessory:(id)arg1;
- (id)description;
- (id)initWithAccessoryDescription:(id)arg1 linkType:(long long)arg2 needsUserConsent:(_Bool)arg3 completionHandler:(id /* block */)arg4 progressHandler:(id /* block */)arg5 wiFiPSK:(id)arg6 country:(id)arg7;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 linkType:(long long)arg3 homeName:(id)arg4 setupCode:(id)arg5 completionHandler:(id /* block */)arg6 setupCodeProvider:(id /* block */)arg7 wiFiPSK:(id)arg8 country:(id)arg9;

@end

