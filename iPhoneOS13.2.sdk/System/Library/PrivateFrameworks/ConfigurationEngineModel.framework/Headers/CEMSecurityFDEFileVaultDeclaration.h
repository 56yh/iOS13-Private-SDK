//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadEnable;
    NSNumber *_payloadDefer;
    NSNumber *_payloadUserEntersMissingInfo;
    NSNumber *_payloadUseRecoveryKey;
    NSNumber *_payloadShowRecoveryKey;
    NSString *_payloadOutputPath;
    NSString *_payloadUsername;
    NSString *_payloadPassword;
    NSNumber *_payloadUseKeychain;
    NSNumber *_payloadDeferForceAtUserLoginMaxBypassAttempts;
    NSNumber *_payloadDeferDontAskAtUserLogout;
    NSString *_payloadCertificateIdentifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withDefer:(id)arg3 withUserEntersMissingInfo:(id)arg4 withUseRecoveryKey:(id)arg5 withShowRecoveryKey:(id)arg6 withOutputPath:(id)arg7 withUsername:(id)arg8 withPassword:(id)arg9 withUseKeychain:(id)arg10 withDeferForceAtUserLoginMaxBypassAttempts:(id)arg11 withDeferDontAskAtUserLogout:(id)arg12 withCertificateIdentifier:(id)arg13;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadCertificateIdentifier; // @synthesize payloadCertificateIdentifier=_payloadCertificateIdentifier;
@property(copy, nonatomic) NSNumber *payloadDeferDontAskAtUserLogout; // @synthesize payloadDeferDontAskAtUserLogout=_payloadDeferDontAskAtUserLogout;
@property(copy, nonatomic) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts; // @synthesize payloadDeferForceAtUserLoginMaxBypassAttempts=_payloadDeferForceAtUserLoginMaxBypassAttempts;
@property(copy, nonatomic) NSNumber *payloadUseKeychain; // @synthesize payloadUseKeychain=_payloadUseKeychain;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUsername; // @synthesize payloadUsername=_payloadUsername;
@property(copy, nonatomic) NSString *payloadOutputPath; // @synthesize payloadOutputPath=_payloadOutputPath;
@property(copy, nonatomic) NSNumber *payloadShowRecoveryKey; // @synthesize payloadShowRecoveryKey=_payloadShowRecoveryKey;
@property(copy, nonatomic) NSNumber *payloadUseRecoveryKey; // @synthesize payloadUseRecoveryKey=_payloadUseRecoveryKey;
@property(copy, nonatomic) NSNumber *payloadUserEntersMissingInfo; // @synthesize payloadUserEntersMissingInfo=_payloadUserEntersMissingInfo;
@property(copy, nonatomic) NSNumber *payloadDefer; // @synthesize payloadDefer=_payloadDefer;
@property(copy, nonatomic) NSString *payloadEnable; // @synthesize payloadEnable=_payloadEnable;
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

