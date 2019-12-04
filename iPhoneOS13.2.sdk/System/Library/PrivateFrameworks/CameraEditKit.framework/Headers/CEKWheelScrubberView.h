//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraEditKit/CEKWheelScrubberCollectionViewLayoutDelegate-Protocol.h>
#import <CameraEditKit/UICollectionViewDataSource-Protocol.h>
#import <CameraEditKit/UICollectionViewDelegate-Protocol.h>
#import <CameraEditKit/UIGestureRecognizerDelegate-Protocol.h>
#import <CameraEditKit/UIPreviewInteractionDelegate-Protocol.h>

@class CEKAnimationGenerator, CEKEdgeGradientView, CEKSelectionFeedbackGenerator, CEKWheelScrubberCollectionViewLayout, NSArray, NSString, UICollectionView, UILabel, UILongPressGestureRecognizer, UIPreviewInteraction, UITapGestureRecognizer;
@protocol CEKWheelScrubberViewDelegate;

@interface CEKWheelScrubberView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CEKWheelScrubberCollectionViewLayoutDelegate, UIPreviewInteractionDelegate, UIGestureRecognizerDelegate>
{
    struct {
        _Bool respondsToWillBeginScrolling;
        _Bool respondsToDidScroll;
        _Bool respondsToWillEndScrolling;
        _Bool respondsToDidEndScrolling;
    } _delegateFlags;
    _Bool _suspended;
    _Bool __showSelectedItemTextOverlay;
    id <CEKWheelScrubberViewDelegate> _delegate;
    unsigned long long _itemCount;
    unsigned long long _defaultIndex;
    unsigned long long _selectedIndex;
    unsigned long long _markedIndex;
    long long _cornerStyle;
    double _selectionDotCenterTopSpacing;
    long long _dotPlacement;
    CEKWheelScrubberCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UIView *__selectedItemLoupe;
    UILabel *__selectedItemTextOverlay;
    CEKEdgeGradientView *__edgeGradientView;
    UILongPressGestureRecognizer *__pressGestureRecognizer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    CEKSelectionFeedbackGenerator *__selectionFeedbackGenerator;
    NSArray *__reducedItemIndicesToShow;
    UIPreviewInteraction *__previewInteraction;
    double __previewTransitionProgress;
    CEKAnimationGenerator *__animationGenerator;
    UIView *__collectionViewSnapshot;
    CDStruct_ae5a35ae _gradientInsets;
    struct UIEdgeInsets _thumbnailEdgeInsets;
}

@property(retain, nonatomic, setter=_setCollectionViewSnapshot:) UIView *_collectionViewSnapshot; // @synthesize _collectionViewSnapshot=__collectionViewSnapshot;
@property(readonly, nonatomic) CEKAnimationGenerator *_animationGenerator; // @synthesize _animationGenerator=__animationGenerator;
@property(nonatomic, setter=_setPreviewTransitionProgress:) double _previewTransitionProgress; // @synthesize _previewTransitionProgress=__previewTransitionProgress;
@property(retain, nonatomic) UIPreviewInteraction *_previewInteraction; // @synthesize _previewInteraction=__previewInteraction;
@property(retain, nonatomic, setter=_setReducedItemIndicesToShow:) NSArray *_reducedItemIndicesToShow; // @synthesize _reducedItemIndicesToShow=__reducedItemIndicesToShow;
@property(readonly, nonatomic) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator; // @synthesize _selectionFeedbackGenerator=__selectionFeedbackGenerator;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *_pressGestureRecognizer; // @synthesize _pressGestureRecognizer=__pressGestureRecognizer;
@property(retain, nonatomic) CEKEdgeGradientView *_edgeGradientView; // @synthesize _edgeGradientView=__edgeGradientView;
@property(nonatomic) _Bool _showSelectedItemTextOverlay; // @synthesize _showSelectedItemTextOverlay=__showSelectedItemTextOverlay;
@property(readonly, nonatomic) UILabel *_selectedItemTextOverlay; // @synthesize _selectedItemTextOverlay=__selectedItemTextOverlay;
@property(readonly, nonatomic) UIView *_selectedItemLoupe; // @synthesize _selectedItemLoupe=__selectedItemLoupe;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) CEKWheelScrubberCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(nonatomic) long long dotPlacement; // @synthesize dotPlacement=_dotPlacement;
@property(nonatomic) double selectionDotCenterTopSpacing; // @synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing;
@property(nonatomic) CDStruct_ae5a35ae gradientInsets; // @synthesize gradientInsets=_gradientInsets;
@property(nonatomic) struct UIEdgeInsets thumbnailEdgeInsets; // @synthesize thumbnailEdgeInsets=_thumbnailEdgeInsets;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) long long cornerStyle; // @synthesize cornerStyle=_cornerStyle;
@property(nonatomic) unsigned long long markedIndex; // @synthesize markedIndex=_markedIndex;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <CEKWheelScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (_Bool)_shouldPerformFeedback;
- (id)_newReducedItemIndicesToShow;
- (void)_resetForTouchesEnded;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)_switchToItemAtIndexOffset:(long long)arg1 shouldOvershoot:(_Bool)arg2;
- (void)switchToPreviousItem;
- (void)switchToNextItem;
- (void)_scrollToIndex:(long long)arg1 animated:(_Bool)arg2 shouldOvershoot:(_Bool)arg3;
- (void)_switchToIndex:(long long)arg1 shouldOvershoot:(_Bool)arg2 shouldSuppressHaptic:(_Bool)arg3;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)_itemIndexUsingHysteresisForScrollingToContentOffset:(struct CGPoint)arg1 switchToNextItemThreshold:(double)arg2 withPreviewTransitionProgress:(double)arg3;
- (double)_lengthForItemIndex:(long long)arg1 withPreviewTransitionProgress:(double)arg2;
- (long long)_nominalItemIndexForFractionalItemOffset:(double)arg1;
- (double)_idealFractionalItemOffsetTargetForFractionalItemOffset:(double)arg1 allowUnselectedItems:(_Bool)arg2;
- (double)_fractionalItemOffsetForContentOffset:(struct CGPoint)arg1 withPreviewTransitionProgress:(double)arg2;
- (struct CGPoint)_contentOffsetForFractionalItemOffset:(double)arg1 withPreviewTransitionProgress:(double)arg2;
- (double)_alphaForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (double)_lengthForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (double)_defaultItemLength;
- (struct CGSize)_defaultItemSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)wheelScrubberCollectionViewLayout:(id)arg1 alphaForItemAtIndexPath:(id)arg2;
- (struct CGSize)wheelScrubberCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_updateCornerMaskForCell:(id)arg1 withItemIndex:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)_isOrderReverse;
- (_Bool)_isDirectionHorizontal;
@property(readonly, nonatomic) double selectedThumbnailBorderWidth;
- (void)_updateLayoutForCell:(id)arg1;
- (void)_updateLayoutForVisibleCells;
@property(nonatomic) long long layoutDirection;
@property(nonatomic) long long layoutOrder;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)setTransparentGradients;
- (void)_updateCollectionViewForMarkedIndexAnimated:(_Bool)arg1;
@property(nonatomic) _Bool useRoundedCorners;
- (void)_setShowTextOverlay:(_Bool)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)setSelectionText:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) NSString *selectionText;
- (void)setMarkedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_setSelectedIndex:(unsigned long long)arg1 shouldNotify:(_Bool)arg2 shouldSuppressHaptic:(_Bool)arg3;
- (void)updateItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

