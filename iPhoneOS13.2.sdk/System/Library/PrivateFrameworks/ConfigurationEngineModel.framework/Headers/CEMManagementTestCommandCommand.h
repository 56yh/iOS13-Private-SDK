//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMManagementTestCommandCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadEcho;
    NSString *_payloadReturnStatus;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEcho:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEcho:(id)arg2 withReturnStatus:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadReturnStatus; // @synthesize payloadReturnStatus=_payloadReturnStatus;
@property(copy, nonatomic) NSString *payloadEcho; // @synthesize payloadEcho=_payloadEcho;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (_Bool)mustBeSupervised;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

