//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFWeakContainer.h>

@class NSPointerArray;
@protocol PFWeakHashDelegate;

@interface PFWeakHash : PFWeakContainer
{
    struct _opaque_pthread_mutex_t _serializer;
    _Bool _objectHashing;
    // Error parsing type: A^{_opaque_pthread_t}, name: _serializedThread
    id *_objects;
    unsigned long long _capacity;
    NSPointerArray *_payload;
    unsigned long long _payloadPurgeCounter;
    unsigned long long *_inUse;
    unsigned long long _count;
    long long _nilledWeakCount;
    id <PFWeakHashDelegate> _delegate;
}

+ (void)initialize;
@property __weak id <PFWeakHashDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enumerateObjectsAndPayloadsWithBlock:(id /* block */)arg1;
- (id)payloadForObject:(id)arg1;
- (void)setPayload:(id)arg1 forObject:(id)arg2;
- (void)addObject:(id)arg1 withPayload:(id)arg2;
- (void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2;
- (unsigned long long)capacity;
- (unsigned long long)countByVerifyingWeakObjects;
- (unsigned long long)countEstimate;
- (id)allObjects;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (void)_doEnumeration:(id /* block */)arg1;
- (id)member:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (_Bool)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)_addObject:(id)arg1;
- (void)weakReferenceBecameNil;
- (void)_processNilledWeakReferences;
- (void)_purgeOrphanedPayloads;
- (void)_resize;
- (_Bool)_shouldShrink;
- (_Bool)_shouldGrow;
- (unsigned long long)_bucketForObject:(id)arg1 foundInHash:(_Bool *)arg2;
- (void)_rehashWithNewCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (_Bool)_removeAllObjects;
- (void)postDelegateBecameEmptyNotice;
- (void)dealloc;
- (id)initWithPointerHashing;
- (id)initWithObjectHashing;
- (id)init;
- (_Bool)_onSerializedThread;
- (void)_serialize:(id /* block */)arg1;
- (void)_dumpBuckets;

@end

