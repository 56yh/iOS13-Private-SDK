//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class EscrowPrerecord, NSData, NSDate, NSDictionary, NSError, NSString, SESWrapper;
@protocol OS_dispatch_queue;

@interface SecureBackup : NSObject <NSSecureCoding>
{
    _Bool _deleteAll;
    _Bool _emcsMode;
    _Bool _fmipRecovery;
    _Bool _icdp;
    _Bool _idmsRecovery;
    _Bool _silent;
    _Bool _stingray;
    _Bool _synchronize;
    _Bool _useCachedPassphrase;
    _Bool _useRecoveryPET;
    _Bool _usesMultipleiCSC;
    _Bool _usesRandomPassphrase;
    _Bool _usesRecoveryKey;
    _Bool _suppressServerFiltering;
    NSString *_appleID;
    NSString *_authToken;
    NSDate *_backOffDate;
    NSData *_certData;
    NSString *_countryDialCode;
    NSString *_countryCode;
    NSString *_dsid;
    NSString *_emcsCred;
    NSDictionary *_emcsDict;
    NSString *_encodedMetadata;
    NSDictionary *_escrowRecord;
    NSString *_escrowProxyURL;
    NSString *_fmipUUID;
    NSString *_iCloudEnv;
    NSData *_iCloudIdentityData;
    NSString *_iCloudPassword;
    NSData *_idmsData;
    NSDictionary *_metadata;
    NSDictionary *_metadataHash;
    NSString *_oldEMCSCred;
    NSString *_passphrase;
    NSString *_recordID;
    NSString *_recoveryKey;
    NSString *_smsTarget;
    NSString *_verificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    NSString *_activityLabel;
    NSString *_activityUUID;
    NSString *_hsa2CachedPrerecordUUID;
    EscrowPrerecord *_prerecord;
    SESWrapper *_ses;
}

+ (unsigned int)daemonPasscodeRequestOpinion:(id *)arg1;
+ (unsigned int)needPasscodeForHSA2EscrowRecordUpdate:(id *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)_ClassCreateSecureBackupConcurrentConnection;
@property(retain, nonatomic) SESWrapper *ses; // @synthesize ses=_ses;
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
@property(copy, nonatomic) NSString *hsa2CachedPrerecordUUID; // @synthesize hsa2CachedPrerecordUUID=_hsa2CachedPrerecordUUID;
@property(nonatomic) _Bool suppressServerFiltering; // @synthesize suppressServerFiltering=_suppressServerFiltering;
@property(copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(copy, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(nonatomic) _Bool usesRecoveryKey; // @synthesize usesRecoveryKey=_usesRecoveryKey;
@property(nonatomic) _Bool usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property(nonatomic) _Bool usesMultipleiCSC; // @synthesize usesMultipleiCSC=_usesMultipleiCSC;
@property(nonatomic) _Bool useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property(nonatomic) _Bool useCachedPassphrase; // @synthesize useCachedPassphrase=_useCachedPassphrase;
@property(nonatomic) _Bool synchronize; // @synthesize synchronize=_synchronize;
@property(nonatomic) _Bool stingray; // @synthesize stingray=_stingray;
@property(nonatomic) _Bool silent; // @synthesize silent=_silent;
@property(copy, nonatomic) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(copy, nonatomic) NSString *oldEMCSCred; // @synthesize oldEMCSCred=_oldEMCSCred;
@property(retain, nonatomic) NSDictionary *metadataHash; // @synthesize metadataHash=_metadataHash;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property(retain, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(retain, nonatomic) NSData *iCloudIdentityData; // @synthesize iCloudIdentityData=_iCloudIdentityData;
@property(copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property(nonatomic) _Bool icdp; // @synthesize icdp=_icdp;
@property(copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property(nonatomic) _Bool fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property(copy, nonatomic) NSString *escrowProxyURL; // @synthesize escrowProxyURL=_escrowProxyURL;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property(nonatomic) _Bool emcsMode; // @synthesize emcsMode=_emcsMode;
@property(retain, nonatomic) NSDictionary *emcsDict; // @synthesize emcsDict=_emcsDict;
@property(copy, nonatomic) NSString *emcsCred; // @synthesize emcsCred=_emcsCred;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) _Bool deleteAll; // @synthesize deleteAll=_deleteAll;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property(retain, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(retain, nonatomic) NSDate *backOffDate; // @synthesize backOffDate=_backOffDate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 uuid:(id)arg2 error:(id *)arg3;
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 error:(id *)arg2;
- (void)prepareHSA2EscrowRecordContents:(_Bool)arg1 reply:(id /* block */)arg2;
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1;
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;
- (id)srpInitNonce;
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)backupWithInfo:(id)arg1;
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)changeSMSTargetWithInfo:(id)arg1;
- (_Bool)changeSMSTargetWithError:(id *)arg1;
- (void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id *)arg2;
- (id)startSMSChallengeWithError:(id *)arg1;
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)uncachePassphraseWithInfo:(id)arg1;
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)cachePassphraseWithInfo:(id)arg1;
- (void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)disableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)disableWithInfo:(id)arg1;
- (_Bool)disableWithError:(id *)arg1;
- (void)recoverWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (id)recoverWithInfo:(id)arg1 results:(id *)arg2;
- (id)recoverWithError:(id *)arg1;
- (void)enableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)enableWithInfo:(id)arg1;
- (_Bool)enableWithError:(id *)arg1;
- (void)updateMetadataWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)updateMetadataWithInfo:(id)arg1;
- (_Bool)updateMetadataWithError:(id *)arg1;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 results:(id *)arg2;
- (id)getAccountInfoWithError:(id *)arg1;
- (void)stateCaptureWithCompletionBlock:(id /* block */)arg1;
- (void)notificationInfo:(id /* block */)arg1;
- (void)setBackOffDateWithCompletionBlock:(id /* block */)arg1;
- (void)backOffDateWithCompletionBlock:(id /* block */)arg1;
- (void)backupWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)changeSMSTargetWithCompletionBlock:(id /* block */)arg1;
- (void)getCountrySMSCodesWithResults:(id /* block */)arg1;
- (void)startSMSChallengeWithResults:(id /* block */)arg1;
- (void)uncachePassphrase;
- (void)uncacheRecoveryKeyWithCompletionBlock:(id /* block */)arg1;
- (void)cacheRecoveryKeyWithCompletionBlock:(id /* block */)arg1;
- (void)uncachePassphraseWithCompletionBlock:(id /* block */)arg1;
- (void)cachePassphraseWithCompletionBlock:(id /* block */)arg1;
- (void)cachePassphrase;
- (void)updateMetadataWithCompletionBlock:(id /* block */)arg1;
- (void)stashRecoveryDataWithCompletionBlock:(id /* block */)arg1;
- (void)disableWithCompletionBlock:(id /* block */)arg1;
- (void)recoverRecordContents:(id /* block */)arg1;
- (void)recoverWithResults:(id /* block */)arg1;
- (void)enableWithCompletionBlock:(id /* block */)arg1;
- (void)getAccountInfoWithResults:(id /* block */)arg1;
- (void)populateWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithUserActivityLabel:(id)arg1;
- (id)_CreateSecureBackupConnection;

@end

