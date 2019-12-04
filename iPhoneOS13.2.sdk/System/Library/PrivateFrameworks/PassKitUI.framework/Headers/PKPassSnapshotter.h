//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPassLibrary, UIWindow;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKPassSnapshotter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PKPassLibrary *_passLibrary;
    NSObject<OS_dispatch_semaphore> *_snapshotSem;
    UIWindow *_snapshotWindow;
    double _scale;
    NSMutableArray *_currentSnapshotKeys;
}

+ (void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg1;
+ (void)purgeCache;
+ (id)sharedInstance;
- (_Bool)_cachedImageWithKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_cacheItem:(id)arg1 withKey:(id)arg2;
- (void)_performSnapshot:(id)arg1 size:(struct CGSize)arg2 cacheKey:(id)arg3 completion:(id /* block */)arg4;
- (void)_prepareSnapshotViewWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 cacheKey:(id)arg4 completion:(id /* block */)arg5;
- (void)_snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 withCache:(_Bool)arg4 completion:(id /* block */)arg5;
- (void)snapshotWithUniqueID:(id)arg1 manifestHash:(id)arg2 size:(struct CGSize)arg3 completion:(id /* block */)arg4;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize)arg2 completion:(id /* block */)arg3;
- (void)snapshotWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 completion:(id /* block */)arg3;
- (void)snapshotWithPass:(id)arg1 completion:(id /* block */)arg2;
- (id)passLibrary;
- (void)dealloc;
@property(nonatomic) _Bool runsInBackgroundProcess;
- (id)init;

@end

