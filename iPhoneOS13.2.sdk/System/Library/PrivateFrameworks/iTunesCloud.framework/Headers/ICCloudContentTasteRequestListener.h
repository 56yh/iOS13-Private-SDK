//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteRequestListener : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedCloudContentTasteRequestListener;
- (void)_setupContentTasteServiceConnection;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 configuration:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (id)init;
- (id)_init;

@end

