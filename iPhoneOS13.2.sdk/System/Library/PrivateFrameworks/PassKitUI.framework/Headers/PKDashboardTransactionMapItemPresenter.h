//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSString, PKPaymentTransactionMapCollectionViewCell;

@interface PKDashboardTransactionMapItemPresenter : NSObject <PKDashboardItemPresenter>
{
    PKPaymentTransactionMapCollectionViewCell *_sampleCell;
    _Bool _loadingMapsViewController;
}

- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (Class)itemClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

