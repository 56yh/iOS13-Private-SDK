//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface NTKSiderealCache : NSObject
{
    NSCache *_dataCache;
}

+ (id)sharedCache;
- (id)gradientData:(id /* block */)arg1;
- (id)imageDataForKey:(id)arg1 generationBlock:(id /* block */)arg2;
- (void)purgeCachedKey:(id)arg1;
- (void)_purgeEverything;
- (id)_init;

@end

