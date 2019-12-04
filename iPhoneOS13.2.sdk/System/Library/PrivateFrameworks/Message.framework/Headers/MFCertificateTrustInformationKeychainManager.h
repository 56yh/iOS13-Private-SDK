//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class CertUITrustManager, EMCertificateTrustInformation, NSString;

@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable>
{
    NSString *_addressForSaving;
    EMCertificateTrustInformation *_trustInformation;
    CertUITrustManager *_keychainManager;
}

+ (id)log;
@property(readonly, nonatomic) CertUITrustManager *keychainManager; // @synthesize keychainManager=_keychainManager;
@property(readonly, nonatomic) EMCertificateTrustInformation *trustInformation; // @synthesize trustInformation=_trustInformation;
@property(readonly, copy, nonatomic) NSString *addressForSaving; // @synthesize addressForSaving=_addressForSaving;
@property(readonly, nonatomic) unsigned long long keychainStatus;
- (void)removeCertificateFromKeychain;
- (void)saveCertificateToKeychain;
- (void)removeTrustException;
- (void)addTrustException;
@property(readonly, nonatomic) _Bool hasTrustException;
@property(readonly, nonatomic) int action;
@property(readonly, nonatomic) _Bool canSaveCertificateToKeychain;
- (id)initWithTrustInformation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

