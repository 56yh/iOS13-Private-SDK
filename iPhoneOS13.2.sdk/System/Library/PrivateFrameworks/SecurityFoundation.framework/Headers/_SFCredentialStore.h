//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSXPCProxyCreating;

@interface _SFCredentialStore : NSObject
{
    id _credentialStoreInternal;
    id <NSXPCProxyCreating> _serverConnection;
    NSError *_serverError;
}

+ (id)_serverConnectionWithError:(id *)arg1;
+ (id)defaultCredentialStore;
- (void)replaceCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)removeCredentialWithPersistentIdentifier:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)lookupCredentialsForServiceIdentifiers:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)fetchPasswordCredentialForPersistentIdentifier:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)addCredential:(id)arg1 withAccessPolicy:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)serverProxyWithBooleanHandler:(id /* block */)arg1;
- (id)serverProxyWithDualResultHandler:(id /* block */)arg1;
- (id)serverProxyWithResultHandler:(id /* block */)arg1;
- (id)_init;

@end

