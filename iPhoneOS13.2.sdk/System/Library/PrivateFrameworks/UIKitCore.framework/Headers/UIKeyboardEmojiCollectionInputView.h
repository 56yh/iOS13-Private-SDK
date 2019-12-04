//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardEmojiKeyView.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardMediaControllerDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UIKeyboardMediaControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UIKeyboardEmojiCollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIKeyboardEmojiCategory *_category;
    NSIndexPath *_tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    _Bool _isDraggingInputView;
    unsigned long long _currentSection;
    _Bool _inputDelegateCanSupportAnimoji;
    _Bool _hasShownAnimojiFirstTimeExperience;
    _Bool _shouldRetryFetchingAnimojiRecents;
    _Bool _useWideAnimojiCell;
    _Bool _hasShownAnimojiCell;
    double _frameInset;
    id /* block */ _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
}

+ (_Bool)shouldHighlightEmoji:(id)arg1;
@property(nonatomic) NSIndexPath *tappedSkinToneEmoji; // @synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji;
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) _Bool isDraggingInputView; // @synthesize isDraggingInputView=_isDraggingInputView;
@property UIKeyboardEmojiCategory *category; // @synthesize category=_category;
- (_Bool)_shouldReverseLayoutDirection;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
- (void)updateToCategory:(long long)arg1;
- (void)didMoveToWindow;
- (long long)indexForPrettyCategoryDisplay:(id)arg1;
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(_Bool)arg2;
- (double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)firstFullyVisibleHeader;
- (id)itemInRect:(struct CGRect)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didTearDownRecentsViewForKeyboardMediaController:(id)arg1;
- (_Bool)_shouldShowRecentlyUsedMedia;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (long long)didInputSubTree:(id)arg1;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (_Bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;
- (id)subTreeHitTest:(struct CGPoint)arg1;
- (_Bool)baseStringIsCoupleEmoji:(id)arg1;
- (_Bool)skinToneWasUsedForEmoji:(id)arg1;
- (id)emojiBaseString:(id)arg1;
- (id)emojiBaseFirstCharacterString:(id)arg1;
- (void)_setUserHasSelectedSkinToneEmoji:(_Bool)arg1;
- (_Bool)_userHasSelectedSkinToneEmoji;
- (void)dimKeys:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

