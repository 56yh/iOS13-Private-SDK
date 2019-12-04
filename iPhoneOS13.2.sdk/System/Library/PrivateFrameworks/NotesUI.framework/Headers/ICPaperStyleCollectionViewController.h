//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <NotesUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class ICPaperStyleHeaderView, NSString;

@interface ICPaperStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>
{
    _Bool _forPreferences;
    _Bool _needsUpdateItemSpacing;
    double _itemSpacing;
    double _itemSpacingVertical;
    ICPaperStyleHeaderView *_headerViewMeasuringCell;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInsets;
}

@property(retain, nonatomic) ICPaperStyleHeaderView *headerViewMeasuringCell; // @synthesize headerViewMeasuringCell=_headerViewMeasuringCell;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double itemSpacingVertical; // @synthesize itemSpacingVertical=_itemSpacingVertical;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) _Bool needsUpdateItemSpacing; // @synthesize needsUpdateItemSpacing=_needsUpdateItemSpacing;
@property(nonatomic) _Bool forPreferences; // @synthesize forPreferences=_forPreferences;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)titleForHeaderView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)indexPathFromPaperStyleType:(unsigned long long)arg1;
- (id)indexPathFromSetting:(id)arg1;
- (unsigned long long)paperStyleTypeFromIndexPath:(id)arg1;
- (id)settingFromIndexPath:(id)arg1;
- (void)updateSettings;
- (void)updateItemSpacing;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)indexPathForInitialSelection;
- (void)viewDidLoad;
- (id)initWithLargeIcons:(_Bool)arg1 forPreferences:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

