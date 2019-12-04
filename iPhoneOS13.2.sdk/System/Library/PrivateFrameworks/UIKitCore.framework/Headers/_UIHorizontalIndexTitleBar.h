//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>
#import <UIKitCore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIFocusGuide, _UIHorizontalIndexTitleBarCell;
@protocol _UIHorizontalIndexTitleBarDelegate;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_entries;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    _UIHorizontalIndexTitleBarCell *_focusedCell;
    _UIHorizontalIndexTitleBarCell *_selectedCell;
    UIFocusGuide *_horizontalIndexTitleBarFocusGuide;
    id <_UIHorizontalIndexTitleBarDelegate> _delegate;
    struct UIEdgeInsets _sectionInset;
    struct UIEdgeInsets _parentSafeAreaInsets;
}

@property(nonatomic, getter=_parentSafeAreaInsets, setter=_setParentSafeAreaInsets:) struct UIEdgeInsets parentSafeAreaInsets; // @synthesize parentSafeAreaInsets=_parentSafeAreaInsets;
@property(nonatomic) __weak id <_UIHorizontalIndexTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIFocusGuide *horizontalIndexTitleBarFocusGuide; // @synthesize horizontalIndexTitleBarFocusGuide=_horizontalIndexTitleBarFocusGuide;
@property(nonatomic) __weak _UIHorizontalIndexTitleBarCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) __weak _UIHorizontalIndexTitleBarCell *focusedCell; // @synthesize focusedCell=_focusedCell;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)_updateSectionInset;
- (void)_cancelDelayedFocusAction;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_selectFocusedCell;
- (id)selectedEntry;
- (_Bool)_isViewEntryCell:(id)arg1;
- (id)_currentlyFocusedCell;
- (void)_selectEntryForTitleIndex:(long long)arg1;
- (void)_updateWithEntries:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_flipIfRightToLeft;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

