//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeScreensaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAskForPassword;
    NSNumber *_payloadAskForPasswordDelay;
    NSNumber *_payloadLoginWindowIdleTime;
    NSString *_payloadLoginWindowModulePath;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAskForPassword:(id)arg2 withAskForPasswordDelay:(id)arg3 withLoginWindowIdleTime:(id)arg4 withLoginWindowModulePath:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadLoginWindowModulePath; // @synthesize payloadLoginWindowModulePath=_payloadLoginWindowModulePath;
@property(copy, nonatomic) NSNumber *payloadLoginWindowIdleTime; // @synthesize payloadLoginWindowIdleTime=_payloadLoginWindowIdleTime;
@property(copy, nonatomic) NSNumber *payloadAskForPasswordDelay; // @synthesize payloadAskForPasswordDelay=_payloadAskForPasswordDelay;
@property(copy, nonatomic) NSNumber *payloadAskForPassword; // @synthesize payloadAskForPassword=_payloadAskForPassword;
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

