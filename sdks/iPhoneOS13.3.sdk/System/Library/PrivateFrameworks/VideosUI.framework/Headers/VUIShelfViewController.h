//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVShelfViewLayoutDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, UIView, VUIShelfView;

__attribute__((visibility("hidden")))
@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, TVShelfViewLayoutDelegate>
{
    BOOL _shouldUpdateBeforeLayout;
    UICollectionView *_collectionView;
    UIView *_headerView;
    long long _gridStyle;
    VUIShelfView *_containerView;
    NSIndexPath *_focusedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) VUIShelfView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
// - (void).cxx_destruct;
- (void)_updateCollectionViewLayout:(BOOL)arg1;
- (void)_snapTargetContentOffset:(inout CGPoint )arg1 toItemIndexPath:(id)arg2 atItemOffset:(CGPoint)arg3;
- (id)_findSnappingItemFromContentOffset:(inout CGPoint )arg1 withVelocity:(CGPoint)arg2;
- (void)_ensureScrollViewSnaps;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateContentOffsetWithTransitionCoordinator:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)loadView;
- (id)initWithGridStyle:(long long)arg1;

@end

