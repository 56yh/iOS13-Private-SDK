//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, br_pacer;
@protocol BRContainerHelper, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject
{
    id <BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    _Bool _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id  _containerStatusObserver;
}

+ (_Bool)hasDaemonicParts;
+ (id)containerCache;
+ (id)containerHelper;
- (id)_allContainersByIDNoCopyBlocking:(_Bool)arg1;
- (_Bool)_updateContainersCache;
- (void)invalidateAndClearCache:(_Bool)arg1;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (void)subscribeToContainerStatusUpdate;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (id)allContainersByID;
- (void)_accountWillChange;
- (id)documentContainers;
- (id)allContainersBlockIfNeeded:(_Bool)arg1;
- (void)dealloc;
- (id)initWithHelper:(id)arg1;

@end

