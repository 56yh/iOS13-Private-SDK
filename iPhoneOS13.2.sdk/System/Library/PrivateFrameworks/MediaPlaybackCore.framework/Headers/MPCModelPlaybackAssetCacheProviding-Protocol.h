//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MPModelFileAsset, MPModelGenericObject, NSString;

@protocol MPCModelPlaybackAssetCacheProviding 
- (void)setPlaybackAssetCacheFileAsset:(MPModelFileAsset *)arg1 forGenericObject:(MPModelGenericObject *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)getPlaybackAssetCacheDestinationURL:(id *)arg1 purchaseBundleDestinationURL:(id *)arg2 forGenericObject:(MPModelGenericObject *)arg3 assetQualityType:(long long)arg4 pathExtension:(NSString *)arg5;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(MPModelGenericObject *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
@end
