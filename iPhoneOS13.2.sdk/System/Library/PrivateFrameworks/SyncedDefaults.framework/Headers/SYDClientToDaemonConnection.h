//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncedDefaults/SYDRemotePreferencesSource.h>

#import <SyncedDefaults/SYDClientProtocol-Protocol.h>

@class NSObject, NSString, NSURL, NSXPCConnection;
@protocol OS_dispatch_queue, SYDDaemonProtocol;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol>
{
    _Bool _forceNilChangeDictionaryResponse;
    NSString *_storeIdentifier;
    long long _storeType;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURL *_changeTokenURL;
}

+ (void)processAccountChangesWithCompletionHandler:(id /* block */)arg1;
+ (id)changeTokenURLForStoreIdentifier:(id)arg1;
@property(nonatomic) _Bool forceNilChangeDictionaryResponse; // @synthesize forceNilChangeDictionaryResponse=_forceNilChangeDictionaryResponse;
@property(retain, nonatomic) NSURL *changeTokenURL; // @synthesize changeTokenURL=_changeTokenURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) long long storeType; // @synthesize storeType=_storeType;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (id)asyncDaemonWithErrorHandler:(id /* block */)arg1;
@property(readonly, nonatomic) id <SYDDaemonProtocol> synchronousDaemon;
- (long long)maximumTotalDataLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyLength;
- (long long)maximumKeyCount;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (id)copyExternalChangesWithChangeCount:(long long *)arg1;
- (unsigned char)hasExternalChanges;
- (void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(id /* block */)arg4;
- (void)logIfNecessaryForError:(id)arg1;
- (void)ping;
- (void)registerForSynchronizedDefaults;
- (void)deleteDataFromDisk;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg1;
- (void)scheduleRemoteSynchronization;
- (void)processChangeDictionary:(id)arg1;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (unsigned char)synchronize;
- (id)changeToken;
- (void)setChangeToken:(id)arg1;
- (struct __CFDictionary *)copyDictionary;
- (id)dictionaryRepresentation;
- (void *)getValueForKey:(struct __CFString *)arg1;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2;

@end

