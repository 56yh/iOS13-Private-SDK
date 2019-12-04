//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AKAccountRecoveryContext, AKAppleIDAuthenticationContext, AKCircleRequestContext, AKDeviceListRequestContext, AKFollowUpTearDownContext, AKUserInformation, NSArray, NSDictionary, NSHTTPURLResponse, NSNumber, NSString;
@protocol NSSecureCoding;

@protocol AKAppleIDAuthenticationDaemonProtocol 
- (void)fetchUserInformationForAltDSID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchURLBagFromCache:(_Bool)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchURLBagWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)accountNamesForAltDSID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)activeLoginCode:(void (^)(NSString *, NSError *))arg1;
- (void)isDevicePasscodeProtected:(void (^)(_Bool, NSError *))arg1;
- (void)teardownFollowUpWithContext:(AKFollowUpTearDownContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)synchronizeFollowUpItemsForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)persistMasterKeyVerifier:(NSDictionary *)arg1 withContext:(AKAppleIDAuthenticationContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)verifyMasterKey:(NSString *)arg1 withContext:(AKAccountRecoveryContext *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)renewRecoveryTokenWithContext:(AKAccountRecoveryContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)performCircleRequestWithContext:(AKCircleRequestContext *)arg1 completion:(void (^)(AKCircleRequestPayload *, NSError *))arg2;
- (void)validateVettingToken:(NSString *)arg1 forAltDSID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)reportSignOutForAllAppleIDsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)reportSignOutForAppleID:(NSString *)arg1 service:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)checkInWithAuthenticationServerForAppleID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)configurationInfoWithIdentifiers:(NSArray *)arg1 forAltDSID:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)setConfigurationInfo:(id <NSSecureCoding>)arg1 forIdentifier:(NSString *)arg2 forAltDSID:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)warmUpVerificationSessionWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)revokeAuthorizationForApplicationWithClientID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteAuthorizationDatabaseWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)fetchAppListWithAltDSID:(NSString *)arg1 completion:(void (^)(AKApplicationMetadataInfo *, NSError *))arg2;
- (void)fetchPrimaryBundleIDForServiceWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)fetchDeviceMapWithContext:(AKDeviceListRequestContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchAuthModeWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)updateUserInformationForAltDSID:(NSString *)arg1 userInformation:(AKUserInformation *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)getUserInformationForAltDSID:(NSString *)arg1 completion:(void (^)(AKUserInformation *, NSError *))arg2;
- (void)setAppleIDWithDSID:(NSNumber *)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setAppleIDWithAltDSID:(NSString *)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)getServerUILoadDelegateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)getServerUILoadDelegateForAltDSID:(NSString *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forContext:(AKAppleIDAuthenticationContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forAppleID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)generateLoginCodeWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)checkSecurityUpgradeEligibilityForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)authenticateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

