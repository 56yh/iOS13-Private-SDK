//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>

@class NSMutableDictionary, NSURL, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>
{
    WBSSiteMetadataImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_urlStringToRequestSets;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
// - (void).cxx_destruct;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededCacheEntries;
- (void)emptyCaches;
- (void)_addRequest:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (BOOL)canHandleRequest:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL )arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (void)saveImage:(id)arg1 forURL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)imageForURL:(id)arg1;
@property(readonly, nonatomic) NSURL *imageDirectoryURL;
- (id)initWithImageDirectoryURL:(id)arg1;

@end

