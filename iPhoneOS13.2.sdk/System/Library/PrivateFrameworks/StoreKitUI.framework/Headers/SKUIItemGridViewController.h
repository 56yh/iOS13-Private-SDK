//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIItemCollectionDelegate-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIStyledImageDataConsumer, SKUIUber, UICollectionView, UIImage;
@protocol SKUIItemGridDelegate;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    UIImage *_placeholderImage;
    NSMutableIndexSet *_selectedItemIndexSet;
    NSMutableArray *_items;
    double _rowHeight;
    SKUIClientContext *_clientContext;
    id <SKUIItemGridDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    SKUIUber *_uber;
    struct CGSize _imageBoundingSize;
}

@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) __weak id <SKUIItemGridDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (id)_itemCollectionController;
- (void)_reloadLayout;
- (id)_collectionViewLayout;
- (id)_collectionView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)unhideIcons;
- (void)setItemCellClass:(Class)arg1;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property(nonatomic) struct CGPoint contentOffset;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)dealloc;
- (id)initWithRowHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

