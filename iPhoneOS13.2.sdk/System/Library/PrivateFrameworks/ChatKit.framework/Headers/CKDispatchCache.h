//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/IMSystemMonitorListener-Protocol.h>

@class CKDispatchQueue, NSCache, NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDispatchCache : NSObject <IMSystemMonitorListener>
{
    NSCache *_objectCache;
    NSCountedSet *_pendingKeys;
    NSMutableDictionary *_pendingGroups;
    CKDispatchQueue *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    long long _dispatchPriority;
}

@property(nonatomic) long long dispatchPriority; // @synthesize dispatchPriority=_dispatchPriority;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(retain, nonatomic) CKDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *pendingGroups; // @synthesize pendingGroups=_pendingGroups;
@property(retain, nonatomic) NSCountedSet *pendingKeys; // @synthesize pendingKeys=_pendingKeys;
@property(retain, nonatomic) NSCache *objectCache; // @synthesize objectCache=_objectCache;
- (void)systemApplicationDidSuspend;
- (void)emptyCache;
- (void)clearQueue;
- (void)suspend;
- (void)resume;
- (_Bool)waitOnGenerationForKey:(id)arg1;
- (void)endGeneratingForKey:(id)arg1;
- (void)_endGeneratingForKeyUnlocked:(id)arg1;
- (void)beginGeneratingForKey:(id)arg1;
- (void)_beginGeneratingForKeyUnlocked:(id)arg1;
- (_Bool)isGeneratingForKey:(id)arg1;
- (void)enqueueGenerationBlock:(id /* block */)arg1 completion:(id /* block */)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)enqueueBlock:(id /* block */)arg1 withPriority:(long long)arg2;
- (void)setCachedObject:(id)arg1 forKey:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithCacheLimit:(unsigned long long)arg1 dispatchPriority:(long long)arg2;
- (id)init;

@end

