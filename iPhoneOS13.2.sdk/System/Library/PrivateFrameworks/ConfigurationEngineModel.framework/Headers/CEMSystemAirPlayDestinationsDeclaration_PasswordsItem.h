//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase
{
    NSString *_payloadDeviceName;
    NSString *_payloadPassword;
    NSString *_payloadDeviceID;
}

+ (id)buildRequiredOnlyWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3;
+ (id)buildWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadDeviceID; // @synthesize payloadDeviceID=_payloadDeviceID;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadDeviceName; // @synthesize payloadDeviceName=_payloadDeviceName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

