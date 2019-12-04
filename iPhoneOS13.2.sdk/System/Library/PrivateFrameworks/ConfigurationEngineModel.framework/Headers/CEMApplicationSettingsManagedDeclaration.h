//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowOpenFromManagedToUnmanaged;
    NSNumber *_payloadAllowOpenFromUnmanagedToManaged;
    NSNumber *_payloadForceAirDropUnmanaged;
    NSNumber *_payloadAllowManagedAppsCloudSync;
    NSNumber *_payloadAllowManagedToWriteUnmanagedContacts;
    NSNumber *_payloadAllowUnmanagedToReadManagedContacts;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5 withAllowManagedToWriteUnmanagedContacts:(id)arg6 withAllowUnmanagedToReadManagedContacts:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowUnmanagedToReadManagedContacts; // @synthesize payloadAllowUnmanagedToReadManagedContacts=_payloadAllowUnmanagedToReadManagedContacts;
@property(copy, nonatomic) NSNumber *payloadAllowManagedToWriteUnmanagedContacts; // @synthesize payloadAllowManagedToWriteUnmanagedContacts=_payloadAllowManagedToWriteUnmanagedContacts;
@property(copy, nonatomic) NSNumber *payloadAllowManagedAppsCloudSync; // @synthesize payloadAllowManagedAppsCloudSync=_payloadAllowManagedAppsCloudSync;
@property(copy, nonatomic) NSNumber *payloadForceAirDropUnmanaged; // @synthesize payloadForceAirDropUnmanaged=_payloadForceAirDropUnmanaged;
@property(copy, nonatomic) NSNumber *payloadAllowOpenFromUnmanagedToManaged; // @synthesize payloadAllowOpenFromUnmanagedToManaged=_payloadAllowOpenFromUnmanagedToManaged;
@property(copy, nonatomic) NSNumber *payloadAllowOpenFromManagedToUnmanaged; // @synthesize payloadAllowOpenFromManagedToUnmanaged=_payloadAllowOpenFromManagedToUnmanaged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

