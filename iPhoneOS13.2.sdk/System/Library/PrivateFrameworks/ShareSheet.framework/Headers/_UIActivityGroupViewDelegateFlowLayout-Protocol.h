//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ShareSheet/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewLayout, UIView;

@protocol _UIActivityGroupViewDelegateFlowLayout <UICollectionViewDelegate>
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 preferredSizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (UIView *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 needsContainerViewForDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 moveItemAtIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
@end

