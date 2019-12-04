//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedFetchResult-Protocol.h>

@class NSArray, NSIndexSet;
@protocol PXDisplayAsset, PXDisplayThumbnailAsset;

@protocol PXDisplayAssetFetchResult <PXSectionedFetchResult>
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id <PXDisplayThumbnailAsset>)thumbnailAssetAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (_Bool)containsObject:(id <PXDisplayAsset>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <PXDisplayAsset>)objectAtIndex:(unsigned long long)arg1;
@end

