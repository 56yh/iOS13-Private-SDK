//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class PHAssetCollection;

__attribute__((visibility("hidden")))
@interface WFPHAssetCollectionPredicate : NSComparisonPredicate
{
    PHAssetCollection *_assetCollection;
}

@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)wf_photoLibraryFilteringPredicate;
- (id)initForAssetsInCollection:(id)arg1;

@end

