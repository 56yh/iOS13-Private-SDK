//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, PXGSpriteReference, PXMediaProvider;
@protocol PXDisplayAsset, PXGDisplayAssetPixelBufferSource;

@protocol PXGDisplayAssetPixelBufferSourcesProvider 
- (void)recyclePixelBufferSourceForDisplayAssets:(NSArray *)arg1;
- (id <PXGDisplayAssetPixelBufferSource>)pixelBufferSourceForDisplayAsset:(id <PXDisplayAsset>)arg1 mediaProvider:(PXMediaProvider *)arg2 spriteReference:(PXGSpriteReference *)arg3;
@end

