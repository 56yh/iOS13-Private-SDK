//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AASigningSession, ACAccount, NSDate, NSOperationQueue, NSString;

@interface AASetupAssistantService : NSObject
{
    NSOperationQueue *_requesterQueue;
    NSString *_appleID;
    NSString *_password;
    NSString *_emailChoice;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;
@property(copy, nonatomic) NSString *emailChoice; // @synthesize emailChoice=_emailChoice;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg1;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (id)_signingSession;
- (void)shouldPresentUpgradeFlowWithCompletion:(id /* block */)arg1;
- (void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(id /* block */)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id /* block */)arg1;
- (void)loginDelegatesWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handlerWithResponse:(id /* block */)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)authenticateWithHandler:(id /* block */)arg1;
- (void)downloadURLConfiguration:(id /* block */)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (id)init;

@end

