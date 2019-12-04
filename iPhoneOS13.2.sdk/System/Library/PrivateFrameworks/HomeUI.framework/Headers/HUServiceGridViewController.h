//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class HUGridLayoutOptions, NSString;
@protocol HUServiceGridViewControllerDelegate;

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldShowLoadingState;
    unsigned long long _contentMargins;
    long long _scrollDirection;
    id <HUServiceGridViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HUServiceGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowLoadingState; // @synthesize shouldShowLoadingState=_shouldShowLoadingState;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) unsigned long long contentMargins; // @synthesize contentMargins=_contentMargins;
- (void)_layoutSectionHeaders;
- (void)layoutOptionsDidChange;
- (id)layoutOptionsForSection:(long long)arg1;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)_performTapActionForItem:(id)arg1;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (struct CGSize)preferredContentSizeForCollectionViewContentSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithItemManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

