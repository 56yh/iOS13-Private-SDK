//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class GEOActiveTileGroup;
@protocol GEOResourceManifestServerProxy;

@protocol GEOResourceManifestServerProxyDelegate 
- (void)serverProxyNeedsWiFiResourceActivity:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 finishedCallback:(void (^)(void))arg3;
- (oneway void)serverProxyDidStopLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;
@end

