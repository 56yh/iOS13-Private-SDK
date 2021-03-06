//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSString, PXAssetCollectionActionManager, PXCMMContext;
@protocol PXDisplayAsset, PXPeopleFetchResult, PXUIImageProvider;

@protocol PXCMMSuggestion <NSObject, PXMediaTypeAggregating>
@property(readonly, nonatomic) BOOL containsUnverifiedPersons;
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) id <PXPeopleFetchResult> peopleFetchResult;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (id)diagnosticsItem;
- (void)decline;
- (void)markAsActiveIfNeeded;
- (PXCMMContext *)contextForActivityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2;
@end

