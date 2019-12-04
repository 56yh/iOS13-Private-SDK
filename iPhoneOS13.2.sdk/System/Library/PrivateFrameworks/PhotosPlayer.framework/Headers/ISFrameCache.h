//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface ISFrameCache : NSObject
{
    struct CGImageSource *_gifSource;
    unsigned long long _frameCount;
    unsigned long long _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    unsigned long long _frameCacheSize;
    NSMutableDictionary *_frameCache;
    unsigned long long _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    struct {
        _Bool cacheSize;
        _Bool frameCache;
    } _isValid;
    long long _cacheStrategy;
}

+ (id)sharedFrameGenerationQueue;
- (struct CGImage *)_createPredrawnImage:(struct CGImage *)arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)_updateFrameCache;
- (void)_updateDesiredCacheSize;
- (void)_updateIfNeeded;
- (void)_invalidateCache;
- (void)_invalidateCacheSize;
@property(nonatomic) long long cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
- (struct CGImage *)_frameAtIndex:(unsigned long long)arg1 allowLazy:(_Bool)arg2;
- (struct CGImage *)frameAtIndexIfReady:(unsigned long long)arg1;
- (struct CGImage *)frameAtIndex:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1;

@end

