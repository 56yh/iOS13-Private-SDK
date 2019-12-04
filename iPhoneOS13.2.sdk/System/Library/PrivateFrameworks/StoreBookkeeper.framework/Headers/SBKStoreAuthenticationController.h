//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject
{
    _Bool _shouldAuthenticate;
    SSAccount *_storeAccount;
}

+ (id)lastFailedSyncAccountName;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastSyncedAccountName;
+ (id)lastSyncedAccountIdentifier;
+ (void)clearLastSyncnedAccount;
@property _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly) SSAccount *storeAccount; // @synthesize storeAccount=_storeAccount;
- (void)saveAccountToLastFailedSyncDefaults;
- (void)saveAccountToLastSyncedDefaults;
- (id)authenticationErrorsForTransaction:(id)arg1;
- (_Bool)shouldForceAuthenticationForTransaction:(id)arg1;
- (_Bool)isAuthenticationValidForTransaction:(id)arg1 error:(id *)arg2;
- (id)initWithStoreAccount:(id)arg1;

@end

