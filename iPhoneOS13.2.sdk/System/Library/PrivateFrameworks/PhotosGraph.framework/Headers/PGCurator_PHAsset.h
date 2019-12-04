//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGCurator.h>

@class PHPhotoLibrary;

@interface PGCurator_PHAsset : PGCurator
{
    PHPhotoLibrary *_photoLibrary;
}

- (void)addMoviesToAssets:(id)arg1 fromFeeder:(id)arg2 maximumNumberOfAssets:(unsigned long long)arg3 debugInfo:(id)arg4;
- (void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5;
- (id)newMovieDeduperWithOptions:(id)arg1;
- (id)newSemanticalDeduperWithOptions:(id)arg1;
- (id)bestAssetsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)initWithPhotoLibrary:(id)arg1;

@end

