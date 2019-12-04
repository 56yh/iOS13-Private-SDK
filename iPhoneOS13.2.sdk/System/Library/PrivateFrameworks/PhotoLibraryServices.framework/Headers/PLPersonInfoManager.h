//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PLLazyObject, PLPhotoLibraryPathManager;

@interface PLPersonInfoManager : NSObject
{
    NSMutableDictionary *_personDictsForPersonID;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (void)setPersonInfo:(id)arg1 forPersonID:(id)arg2;
- (id)personInfoForPersonID:(id)arg1;
- (void)removePersistedInfo;
- (void)_loadDictionariesIfNeeded;
- (id)plistPath;
- (void)clearCacheForPersonID:(id)arg1;
- (id)assetsdClient;
- (id)phonesForInvitationRecordGUID:(id)arg1;
- (id)emailsForInvitationRecordGUID:(id)arg1;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1;
- (void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3;
- (id)emailForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5;
- (id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2;

@end

