//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface REAppIconCache : RESingleton
{
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_loadIconForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadRemoteIconForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)iconForApplicationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_init;

@end

