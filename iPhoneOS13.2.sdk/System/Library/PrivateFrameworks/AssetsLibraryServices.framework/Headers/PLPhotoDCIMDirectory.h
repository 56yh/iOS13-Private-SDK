//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PLPhotoDCIMDirectory : NSObject
{
    NSString *_dcimPath;
    NSString *_miscPath;
    NSString *_posterImagePath;
    NSMutableArray *_topLevelDirectories;
    struct __CFDictionary *_topLevelDirectoriesByNumber;
    struct __CFSet *_unusableTopLevelDirectoryNumbers;
    int _lastUsedDirectoryNumber;
    NSMutableDictionary *_userInfo;
    _Bool _userInfoDidChange;
    struct flock *_dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}

- (void)setHasChangedExternally:(_Bool)arg1;
- (_Bool)hasChangedExternally;
- (void)unlockDirectory;
- (void)lockDirectory;
- (id)nextAvailableDirectory;
- (void)clearDCFDirectories;
- (id)dcfDirectories;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (void)reloadUserInfo;
- (void)recreateInfoPlist;
- (id)userInfo;
- (void)saveUserInfo;
- (id)posterImagePath;
- (id)miscPath;
- (id)dcimPath;
- (void)dealloc;
- (id)initWithDCIMPath:(id)arg1;
- (id)_userInfoPath;

@end

