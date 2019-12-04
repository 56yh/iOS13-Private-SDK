//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject
{
    CKContainer *_nickNameContainer;
}

+ (id)ckQueue;
+ (id)sharedInstance;
@property(readonly, nonatomic) CKContainer *nickNameContainer; // @synthesize nickNameContainer=_nickNameContainer;
- (id)lockdownManager;
- (_Bool)shouldUseDevNickNameContainer;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (_Bool)_serverSaysToUseOldContainer;
- (double)_retryIntervalForRetryCount:(unsigned long long)arg1;
- (id)_nickNameFetchConfiguration;
- (id)_nickNameSaveConfiguration;
- (id)_nickNamePublicDB;
- (id)nickNamePublicDatabase;
- (void)cloudKitOperationWithRetryCount:(unsigned long long)arg1 withError:(id)arg2 operation:(id /* block */)arg3;
- (void)performCloudKitOperation:(id /* block */)arg1 withError:(id)arg2;
- (void)_handleSaveNicknameError:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordIDs:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordID:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)arg1;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)fetchAllNicknamesForCurrentUser:(id /* block */)arg1;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)arg1;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(id /* block */)arg3;

@end
