//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSString, SKUIRowComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIRowViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
}

- (double)_singleColumnWidth;
- (id)_reuseIdentifierForViewElement:(id)arg1;
- (id)_reuseIdentifierForLockupViewElement:(id)arg1;
- (id)_reuseIdentifierForCardViewElement:(id)arg1;
- (void)_requestLayoutForCells;
- (double)_interiorColumnSpacing;
- (id)_firstChildForColumn:(id)arg1;
- (void)_enumerateViewElementsUsingBlock:(id /* block */)arg1;
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (Class)_cellClassForLockupViewElement:(id)arg1;
- (Class)_cellClassForCardViewElement:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct UIEdgeInsets)sectionContentInset;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) SKUIRowComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

