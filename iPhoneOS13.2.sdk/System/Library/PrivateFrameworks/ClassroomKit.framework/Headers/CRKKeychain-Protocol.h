//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CRKIdentityConfiguration, NSData, NSString;
@protocol CRKCertificate, CRKIdentity, CRKPrivateKey;

@protocol CRKKeychain
- (void)removeItemWithPersistentID:(NSData *)arg1;
- (id <CRKPrivateKey>)makePrivateKeyWithData:(NSData *)arg1;
- (id <CRKCertificate>)makeCertificateWithData:(NSData *)arg1;
- (id <CRKIdentity>)makeIdentityWithCertificate:(id <CRKCertificate>)arg1 privateKey:(id <CRKPrivateKey>)arg2;
- (id <CRKIdentity>)makeIdentityWithConfiguration:(CRKIdentityConfiguration *)arg1;
- (id <CRKPrivateKey>)privateKeyWithPersistentID:(NSData *)arg1;
- (id <CRKIdentity>)identityWithPersistentID:(NSData *)arg1;
- (id <CRKCertificate>)certificateWithPersistentID:(NSData *)arg1;
- (NSData *)addPrivateKey:(id <CRKPrivateKey>)arg1 toAccessGroup:(NSString *)arg2;
- (NSData *)addIdentity:(id <CRKIdentity>)arg1 toAccessGroup:(NSString *)arg2;
- (NSData *)addCertificate:(id <CRKCertificate>)arg1 toAccessGroup:(NSString *)arg2;
@end

