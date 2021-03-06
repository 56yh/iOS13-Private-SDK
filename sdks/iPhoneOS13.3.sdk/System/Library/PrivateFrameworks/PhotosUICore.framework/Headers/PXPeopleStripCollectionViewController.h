//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>


@class PXPeopleDataSource, PXPeopleStripCollectionViewCell;
@protocol PXPeopleStripCollectionViewControllerDelegate;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching>
{
    id <PXPeopleStripCollectionViewControllerDelegate> _delegate;
    PXPeopleDataSource *_dataSource;
    PXPeopleStripCollectionViewCell *_preloadedCell;
}

@property(retain, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell; // @synthesize preloadedCell=_preloadedCell;
@property(nonatomic) __weak PXPeopleDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXPeopleStripCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)contentWidthChanged;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

@end

