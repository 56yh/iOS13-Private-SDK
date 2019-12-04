//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIGiftStepViewController.h>

#import <StoreKitUI/SKUIGiftConfigurationObserver-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, SKUIGiftThemeCollectionView, SKUIGiftThemePickerFlowLayout, UIImage, UIPageControl, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _animatingScrollView;
    SKUIGiftThemePickerFlowLayout *_flowLayout;
    SKUIGiftThemeCollectionView *_collectionView;
    UIImage *_itemImage;
    UIPageControl *_pageControl;
    long long _selectedThemeIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_themes;
}

- (void)_setSelectedThemeIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (double)_scrollInsetHorizontal:(id)arg1;
- (void)_layoutCollectionViewWithTraits:(id)arg1;
- (_Bool)_isIPadLarge;
- (id)_flowLayout;
- (double)_collectionViewWidth:(id)arg1;
- (id)_collectionView;
- (double)_cardWidth;
- (double)_cardHeight:(id)arg1;
- (void)_nextAction:(id)arg1;
- (void)_backgroundTapAction:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

