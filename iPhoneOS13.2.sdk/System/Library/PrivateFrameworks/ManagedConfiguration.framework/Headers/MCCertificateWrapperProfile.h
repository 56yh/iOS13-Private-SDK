//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCConfigurationProfile.h>

@interface MCCertificateWrapperProfile : MCConfigurationProfile
{
}

+ (id)wrapperProfileDictionaryWithCertificateData:(id)arg1 fileName:(id)arg2 outSignerCerts:(id *)arg3;
+ (id)_wrapperProfileForWAPICertificate:(struct __SecCertificate *)arg1 fileName:(id)arg2 PEMData:(id)arg3;
+ (id)_wrapperProfileDictForCertificate:(struct __SecCertificate *)arg1 fileName:(id)arg2 certData:(id)arg3 type:(id)arg4;
+ (id)_basicWrapperProfileDictForCertificateName:(id)arg1 fileName:(id)arg2 identifier:(id)arg3;
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4;
+ (id)_wrapperPayloadDictWithCertData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 type:(id)arg5;
+ (id)_identifierHashFromData:(id)arg1;
- (id)earliestCertificateExpiryDate;
- (_Bool)isSigned;
- (int)trustLevel;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;
- (id)_certificatePayload;

@end

