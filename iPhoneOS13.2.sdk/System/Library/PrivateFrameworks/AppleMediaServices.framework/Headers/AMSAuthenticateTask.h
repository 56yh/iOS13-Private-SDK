//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSAuthenticateOptions, NSNumber, NSString, NSUUID;

@interface AMSAuthenticateTask : AMSTask
{
    AMSAuthenticateOptions *_options;
    NSString *_password;
    NSString *_multiUserToken;
    NSString *_rawPassword;
    NSString *_altDSID;
    NSNumber *_DSID;
    NSUUID *_homeIdentifier;
    NSString *_username;
    ACAccount *_authenticatedAccount;
}

@property(retain, nonatomic) ACAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(retain, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain, nonatomic) NSString *multiUserToken; // @synthesize multiUserToken=_multiUserToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) AMSAuthenticateOptions *options; // @synthesize options=_options;
- (void)setHomeUserID:(id)arg1;
- (void)setHomeID:(id)arg1;
- (id)homeUserID;
- (id)homeID;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id *)arg3;
- (id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1;
- (id)_accountStoreForAuthentication;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id *)arg2;
- (id)_accountForAuthentication;
- (id)performAuthentication;
- (id)initWithRequest:(id)arg1;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)init;

@end

