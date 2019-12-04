//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CLKTreatedImageCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableArray *_recentlyUsedKeys;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedInstance;
- (id)_imageForKey:(id)arg1;
- (void)_queue_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)arg1 maxSize:(struct CGSize)arg2 cornerRadius:(double)arg3;
- (id)imageForRawImage:(id)arg1 maxSize:(struct CGSize)arg2 maskMode:(long long)arg3;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 maskMode:(long long)arg3;
- (id)init;

@end

