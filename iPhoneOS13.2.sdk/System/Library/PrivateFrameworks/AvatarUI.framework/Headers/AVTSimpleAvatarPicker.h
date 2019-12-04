//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarActionsViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarEditorViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarPicker-Protocol.h>
#import <AvatarUI/AVTAvatarRecordDataSourceObserver-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/AVTObjectViewController-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTAvatarPickerDataSource, AVTEdgeDisappearingCollectionViewLayout, AVTRenderingScope, AVTSimpleAvatarPickerHeaderView, AVTViewSessionProvider, NSString, UICollectionView, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarPickerDelegate, AVTPresenterDelegate;

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarRecordDataSourceObserver, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker>
{
    _Bool _allowEditing;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTAvatarPickerDelegate> avatarPickerDelegate;
    double _minimumInteritemSpacing;
    UIView *_view;
    UICollectionView *_collectionView;
    AVTEdgeDisappearingCollectionViewLayout *_collectionViewLayout;
    AVTAvatarPickerDataSource *_dataSource;
    _AVTAvatarRecordImageProvider *_imageProvider;
    AVTViewSessionProvider *_viewSessionProvider;
    AVTRenderingScope *_renderingScope;
    AVTSimpleAvatarPickerHeaderView *_headerView;
}

@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;
@property(nonatomic) __weak AVTSimpleAvatarPickerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property(readonly, nonatomic) AVTViewSessionProvider *viewSessionProvider; // @synthesize viewSessionProvider=_viewSessionProvider;
@property(readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) AVTAvatarPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AVTEdgeDisappearingCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) __weak id <AVTAvatarPickerDelegate> avatarPickerDelegate; // @synthesize avatarPickerDelegate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (_Bool)isItemAtIndexPathOffscreen:(id)arg1;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)updateHeaderButtonForSelectedAvatar:(id)arg1 invalidateLayout:(_Bool)arg2 animated:(_Bool)arg3;
- (void)deselectPreviousSelectedItem;
- (void)wrapAndPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentMemojiEditorForCreation;
- (void)presentActionsForAvatarRecord:(id)arg1;
- (void)headerViewButtonPressed;
- (id)viewForAddItem;
- (_Bool)shouldShowHeaderButton;
- (_Bool)canCreateAvatar;
- (id)selectedAvatar;
- (long long)indexForSelectedAvatar;
- (void)reloadDataSource;
- (void)reloadData;
- (void)loadView;
- (id)initWithDataSource:(id)arg1 recordImageProvider:(id)arg2 allowEditing:(_Bool)arg3;
- (id)initWithStore:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;
- (void)presentActionsForAvatarForPPT:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

