//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSKeychain : NSObject
{
}

+ (void)_writeACLVersionForOptions:(id)arg1;
+ (id)_legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)_generateLegacyKeypairForOptions:(id)arg1 error:(id *)arg2;
+     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}32@0:8@16^@24, name: _copyLegacyPublicKeyForOptions:error:
+     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}32@0:8@16^@24, name: _copyLegacyPrivateKeyForOptions:error:
+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;
+ (id)_primaryConstraintsWithOptions:(id)arg1;
+ (id)_primaryConstraintsForWatch;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraints;
+ (id)_extendedConstraintsWithOptions:(id)arg1;
+ (struct __SecAccessControl *)createAccessControlRefWithOptions:(id)arg1 error:(id *)arg2;
+ (id)keychainLabelForOptions:(id)arg1;
+ (id)certificateKeychainLabelsForOptions:(id)arg1;
+ (id)legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteKeyPairWithOptions:(id)arg1 error:(id *)arg2;
+     // Error parsing type: B56@0:8^{__SecCertificate=}16^{__SecCertificate=}24^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}32@40^@48, name: storePrimaryCert:extendedCert:privateKey:options:error:
+ (_Bool)deleteCertificateChainWithOptions:(id)arg1 error:(id *)arg2;
+     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}32@0:8@16^@24, name: copyPublicKeyForOptions:error:
+     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}40@0:8@16@24^@32, name: copyPrivateKeyWithContext:options:error:
+ (id)certificateChainForOptions:(id)arg1 error:(id *)arg2;

@end

