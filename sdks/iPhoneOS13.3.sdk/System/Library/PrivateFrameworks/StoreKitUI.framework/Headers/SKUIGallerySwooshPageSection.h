//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIGallerySwooshViewControllerDelegate-Protocol.h>

@class NSMapTable, SKUIGallerySwooshViewController;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate>
{
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}

// - (void).cxx_destruct;
- (id)_swooshViewController;
- (id)_newArtworkRequestWithArtwork:(id)arg1;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didChangePlaybackState:(long long)arg2 forItemAtIndex:(long long)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

@end

