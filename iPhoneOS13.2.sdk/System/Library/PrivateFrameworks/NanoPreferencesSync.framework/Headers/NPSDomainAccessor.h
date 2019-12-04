//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessorInternal, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface NPSDomainAccessor : NSObject
{
    _Bool _initializedWithActiveDevice;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    NPSDomainAccessorInternal *_internalAccessor;
}

+ (id)copyDomainListForPairingID:(id)arg1 pairingDataStore:(id)arg2;
+ (id)copyDomainList;
+ (void)resolveActivePairedDevicePairingID:(id *)arg1 pairingDataStore:(id *)arg2;
+ (void)initialize;
@property(nonatomic) _Bool initializedWithActiveDevice; // @synthesize initializedWithActiveDevice=_initializedWithActiveDevice;
@property(retain, nonatomic) NPSDomainAccessorInternal *internalAccessor; // @synthesize internalAccessor=_internalAccessor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *invalidationQueue; // @synthesize invalidationQueue=_invalidationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
- (id)copyKeyList;
- (id)dictionaryRepresentation;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)objectForKey:(id)arg1;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (id)synchronize;
- (void)invalidate;
- (void)dealloc;
- (id)shouldNotDoWork;
- (_Bool)activeDeviceChanged;
- (id)initWithInternalDomainAccessor:(id)arg1 queue:(id)arg2;
- (id)initWithDomain:(id)arg1 queue:(id)arg2 pairingID:(id)arg3 pairingDataStore:(id)arg4;
- (id)initWithDomain:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3;
- (id)initWithDomain:(id)arg1 pairedDevice:(id)arg2;
- (id)initWithDomain:(id)arg1 queue:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)queue;
@property(readonly, nonatomic) NSUUID *pairingID;
@property(readonly, nonatomic) NSString *domain;

@end

