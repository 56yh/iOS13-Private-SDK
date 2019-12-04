//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol BLTObjectCacheDelegate, OS_dispatch_queue;

@interface BLTObjectCache : NSObject
{
    NSMutableSet *_keys;
    NSMutableDictionary *_cachedObjects;
    NSObject<OS_dispatch_queue> *_queue;
    double _maxItemAge;
    long long _maxItemCount;
    id <BLTObjectCacheDelegate> _delegate;
}

- (void)_deleteObjectFromCacheWithKey:(id)arg1;
@property(readonly, nonatomic) NSSet *keys;
- (void)removeObjectForKey:(id)arg1;
- (void)_pruneCache;
- (void)_addObjectToCache:(id)arg1 withKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)_cachedObjectForKey:(id)arg1;
- (_Bool)_doesObjectWithKeyExist:(id)arg1;
- (_Bool)_isObjectWithKeyCached:(id)arg1;
- (void)_addKeyToSet:(id)arg1;
- (void)_updateCachedObjectIfNecessary:(id)arg1 withKey:(id)arg2;
- (void)storeObject:(id)arg1 withKey:(id)arg2;
- (id)initWithDelegate:(id)arg1 withMaxItemCount:(long long)arg2 andMaxItemAge:(double)arg3;
- (id)initWithDelegate:(id)arg1 withMaxItemAge:(double)arg2;
- (id)initWithDelegate:(id)arg1 withMaxItemCount:(long long)arg2;
- (id)init;

@end

