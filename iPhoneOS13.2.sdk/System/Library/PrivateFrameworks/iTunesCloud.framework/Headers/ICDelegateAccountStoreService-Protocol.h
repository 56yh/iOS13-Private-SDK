//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ICDelegateToken, ICUserIdentity, ICUserIdentityProperties, NSArray, NSDate;

@protocol ICDelegateAccountStoreService 
- (void)setToken:(ICDelegateToken *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeTokensExpiringBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeTokenForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeIdentityPropertiesForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeAllTokensWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)addDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)recreateWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)openWithCompletionHandler:(void (^)(_Bool, NSString *, NSError *))arg1;
@end

