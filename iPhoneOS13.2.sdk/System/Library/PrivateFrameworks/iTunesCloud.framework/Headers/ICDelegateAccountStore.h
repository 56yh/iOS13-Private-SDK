//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegateAccountStoreWriter-Protocol.h>
#import <iTunesCloud/ICSQLiteConnectionDelegate-Protocol.h>

@class ICDelegateAccountStoreOptions, ICDelegateAccountStoreXPCWriter, NSMutableArray, NSString;

@interface ICDelegateAccountStore : NSObject <ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter>
{
    NSMutableArray *_connectionPool;
    _Bool _isOpen;
    struct os_unfair_lock_s _lock;
    ICDelegateAccountStoreOptions *_options;
    ICDelegateAccountStore *_strongSelf;
    ICDelegateAccountStoreXPCWriter *_xpcWriter;
}

+ (void)openWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_writeXPCUsingBlock:(id /* block */)arg1;
- (void)_writeUsingBlock:(id /* block */)arg1;
- (void)_writeSQLUsingBlock:(id /* block */)arg1;
- (void)_resetCorruptionUsingXPC;
- (_Bool)_resetCorruptionUsingSQL;
- (void)_recycleConnection:(id)arg1;
- (void)_postDidChangeNotification;
- (id)_popConnection;
- (void)_openWithXPCWriter:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)readUsingBlock:(id /* block */)arg1;
@property(readonly, copy, nonatomic) NSString *databasePath;
- (void)close;
- (id)initSingleWriterWithOptions:(id)arg1 error:(id *)arg2;
- (id)_initWithValidatedOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

