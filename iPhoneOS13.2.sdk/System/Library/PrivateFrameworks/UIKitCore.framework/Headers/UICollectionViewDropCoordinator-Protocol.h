//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSIndexPath, UICollectionViewDropPlaceholder, UICollectionViewDropProposal, UIDragItem, UIDragPreviewTarget;
@protocol UICollectionViewDropPlaceholderContext, UIDragAnimating, UIDropSession;

@protocol UICollectionViewDropCoordinator 
@property(readonly, nonatomic) id <UIDropSession> session;
@property(readonly, nonatomic) UICollectionViewDropProposal *proposal;
@property(readonly, nonatomic) NSIndexPath *destinationIndexPath;
@property(readonly, nonatomic) NSArray *items;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 intoItemAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect)arg3;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
- (id <UICollectionViewDropPlaceholderContext>)dropItem:(UIDragItem *)arg1 toPlaceholder:(UICollectionViewDropPlaceholder *)arg2;
@end

