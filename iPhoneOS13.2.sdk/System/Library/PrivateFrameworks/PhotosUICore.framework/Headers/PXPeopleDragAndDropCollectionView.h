//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSIndexPath, PXPeopleCollectionViewCell, UIVisualEffect;
@protocol PXPeopleDragAndDropCollectionViewDelegate;

@interface PXPeopleDragAndDropCollectionView : UICollectionView
{
    _Bool _interactiveMode;
    _Bool _validDrop;
    id <PXPeopleDragAndDropCollectionViewDelegate> _dragDropDelegate;
    PXPeopleCollectionViewCell *_dragSourceCell;
    NSIndexPath *_dragSourceIndexPath;
    UIVisualEffect *_blurEffect;
}

@property(retain, nonatomic) UIVisualEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(nonatomic) _Bool validDrop; // @synthesize validDrop=_validDrop;
@property(retain, nonatomic) NSIndexPath *dragSourceIndexPath; // @synthesize dragSourceIndexPath=_dragSourceIndexPath;
@property(retain, nonatomic) PXPeopleCollectionViewCell *dragSourceCell; // @synthesize dragSourceCell=_dragSourceCell;
@property(nonatomic) _Bool interactiveMode; // @synthesize interactiveMode=_interactiveMode;
@property(nonatomic) __weak id <PXPeopleDragAndDropCollectionViewDelegate> dragDropDelegate; // @synthesize dragDropDelegate=_dragDropDelegate;
- (long long)sectionAtPoint:(struct CGPoint)arg1;
- (id)_footerAttributes;
- (double)_highestVisibleCellZOrder;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;
- (_Bool)beginInteractiveMovementAtLocation:(struct CGPoint)arg1 forItemAtIndexPath:(id)arg2;
- (void)reloadData;
- (id)sortedIndexPathsForSelectedItems;
- (void)resetTransformForSourceIndex:(id)arg1;
- (void)layoutSubviews;

@end

