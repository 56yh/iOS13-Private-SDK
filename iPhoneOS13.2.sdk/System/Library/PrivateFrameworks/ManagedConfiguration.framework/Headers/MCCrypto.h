//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCCrypto : NSObject
{
}

+ (id)storedActivationLockBypassCodeHash;
+ (void)clearStoredActivationLockHash;
+ (void)clearStoredActivationLockBypassCode;
+ (id)storedActivationLockBypassCodeWithOutError:(id *)arg1;
+ (id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg1 outRawBytes:(char *)arg2 outHash:(char *)arg3;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate **)arg2 outError:(id *)arg3;
+ (id)_decryptionFailedErrorWithUnderlyingError:(id)arg1;
+ (_Bool)isValidPKCS12Data:(id)arg1;
+ (struct __SecCertificate *)copyCertificateRefFromPEMData:(id)arg1;
+ (struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(id)arg1;

@end

