//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAttributeEditorSectionHeaderViewDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorControllerSubSelectionDelegate-Protocol.h>
#import <AvatarUI/AVTCollapsibleHeaderControllerDelegate-Protocol.h>
#import <AvatarUI/AVTFaceTrackingManagerDelegate-Protocol.h>
#import <AvatarUI/AVTGroupDialDelegate-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/AVTTransitionModel-Protocol.h>

@class AVTAttributeEditorAnimationCoordinator, AVTAvatarAttributeEditorDataSource, AVTAvatarAttributeEditorModelManager, AVTAvatarRecord, AVTCollapsibleHeaderController, AVTGroupDial, AVTImageTransitioningContainerView, AVTMemoji, AVTShadowView, AVTTransition, AVTUIEnvironment, AVTViewSession, AVTViewSessionProvider, AVTViewThrottler, CALayer, NSDate, UICollectionView, UILabel, UITapGestureRecognizer, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarAttributeEditorLayout, AVTAvatarAttributeEditorViewControllerDelegate, AVTTaskScheduler;

@interface AVTAvatarAttributeEditorViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTGroupDialDelegate, AVTCollapsibleHeaderControllerDelegate, AVTTransitionModel, AVTNotifyingContainerViewDelegate, AVTFaceTrackingManagerDelegate, AVTAttributeEditorSectionHeaderViewDelegate>
{
    BOOL _disableAvatarSnapshotting;
    BOOL _isCreating;
    BOOL _hasMadeAnySelection;
    BOOL _isAnimatingHighlight;
    BOOL _allowFacetracking;
    BOOL _collectionViewIsPerformingBatchUpdates;
    id <AVTAvatarAttributeEditorViewControllerDelegate> _delegate;
    id <AVTAvatarAttributeEditorLayout> _currentLayout;
    AVTAvatarAttributeEditorModelManager *_modelManager;
    id <AVTTaskScheduler> _imageProviderScheduler;
    UIView *_headerMaskingView;
    UIView *_groupDialContainerView;
    AVTGroupDial *_groupDial;
    AVTShadowView *_shadowView;
    UICollectionView *_attributesCollectionView;
    AVTAvatarAttributeEditorDataSource *_dataSource;
    AVTAttributeEditorAnimationCoordinator *_animationCoordinator;
    UILabel *_alphaAssetsLabel;
    UIView *_verticleRuleContainer;
    CALayer *_verticleRule;
    AVTViewSessionProvider *_avtViewSessionProvider;
    AVTViewSession *_avtViewSession;
    AVTCollapsibleHeaderController *_collapsibleHeaderController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    AVTViewThrottler *_avtViewThrottler;
    AVTUIEnvironment *_environment;
    id /* CDUnknownBlockType */ _postSessionDidBecomeActiveHandler;
    AVTImageTransitioningContainerView *_transitioningContainer;
    AVTTransition *_currentTransition;
    NSDate *_lastPosedAvatarImageRenderingTime;
    id /* CDUnknownBlockType */ _pendingUnhighlightBlock;
    _AVTAvatarRecordImageProvider *_headerPreviewImageRenderer;
    id <AVTTaskScheduler> _headerPreviewScheduler;
    id /* CDUnknownBlockType */ _pendingCollectionViewReloadDataBlock;
}

+ (id)attributeRowIdentifier;
+ (id)colorRowIdentifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pendingCollectionViewReloadDataBlock; // @synthesize pendingCollectionViewReloadDataBlock=_pendingCollectionViewReloadDataBlock;
@property(nonatomic) BOOL collectionViewIsPerformingBatchUpdates; // @synthesize collectionViewIsPerformingBatchUpdates=_collectionViewIsPerformingBatchUpdates;
@property(readonly, nonatomic) id <AVTTaskScheduler> headerPreviewScheduler; // @synthesize headerPreviewScheduler=_headerPreviewScheduler;
@property(retain, nonatomic) _AVTAvatarRecordImageProvider *headerPreviewImageRenderer; // @synthesize headerPreviewImageRenderer=_headerPreviewImageRenderer;
@property(nonatomic) BOOL allowFacetracking; // @synthesize allowFacetracking=_allowFacetracking;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pendingUnhighlightBlock; // @synthesize pendingUnhighlightBlock=_pendingUnhighlightBlock;
@property(nonatomic) BOOL isAnimatingHighlight; // @synthesize isAnimatingHighlight=_isAnimatingHighlight;
@property(retain, nonatomic) NSDate *lastPosedAvatarImageRenderingTime; // @synthesize lastPosedAvatarImageRenderingTime=_lastPosedAvatarImageRenderingTime;
@property(retain, nonatomic) AVTTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // @synthesize transitioningContainer=_transitioningContainer;
@property(nonatomic) BOOL hasMadeAnySelection; // @synthesize hasMadeAnySelection=_hasMadeAnySelection;
@property(readonly, nonatomic) BOOL isCreating; // @synthesize isCreating=_isCreating;
@property(copy, nonatomic) id /* CDUnknownBlockType */ postSessionDidBecomeActiveHandler; // @synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) AVTViewThrottler *avtViewThrottler; // @synthesize avtViewThrottler=_avtViewThrottler;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) AVTCollapsibleHeaderController *collapsibleHeaderController; // @synthesize collapsibleHeaderController=_collapsibleHeaderController;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(retain, nonatomic) CALayer *verticleRule; // @synthesize verticleRule=_verticleRule;
@property(retain, nonatomic) UIView *verticleRuleContainer; // @synthesize verticleRuleContainer=_verticleRuleContainer;
@property(retain, nonatomic) UILabel *alphaAssetsLabel; // @synthesize alphaAssetsLabel=_alphaAssetsLabel;
@property(retain, nonatomic) AVTAttributeEditorAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property(retain, nonatomic) AVTAvatarAttributeEditorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *attributesCollectionView; // @synthesize attributesCollectionView=_attributesCollectionView;
@property(retain, nonatomic) AVTShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) AVTGroupDial *groupDial; // @synthesize groupDial=_groupDial;
@property(retain, nonatomic) UIView *groupDialContainerView; // @synthesize groupDialContainerView=_groupDialContainerView;
@property(retain, nonatomic) UIView *headerMaskingView; // @synthesize headerMaskingView=_headerMaskingView;
@property(readonly, nonatomic) id <AVTTaskScheduler> imageProviderScheduler; // @synthesize imageProviderScheduler=_imageProviderScheduler;
@property(readonly, nonatomic) AVTAvatarAttributeEditorModelManager *modelManager; // @synthesize modelManager=_modelManager;
@property(retain, nonatomic) id <AVTAvatarAttributeEditorLayout> currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) BOOL disableAvatarSnapshotting; // @synthesize disableAvatarSnapshotting=_disableAvatarSnapshotting;
@property(nonatomic) __weak id <AVTAvatarAttributeEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)interfaceOrientationForFaceTrackingManager:(id)arg1;
- (void)updateForChangedSelectionIfNeeded;
- (void)rebuildUIModelAfterSelectionInSection:(id)arg1 senderRect:(CGRect)arg2;
- (void)updateForSelectionOfAccessoryItem:(id)arg1 senderRect:(CGRect)arg2;
- (void)updateForSelectionOfItem:(id)arg1 inSection:(id)arg2 senderRect:(CGRect)arg3;
- (void)updateForSelectionOfItem:(id)arg1 controller:(id)arg2;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;
- (void)groupDial:(id)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(BOOL)arg3;
- (void)groupDial:(id)arg1 didDeselectGroupAtIndex:(long long)arg2;
- (id)presetSectionItemForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)presentActionSheetForSelection:(id)arg1 sender:(id)arg2;
- (void)sectionHeaderView:(id)arg1 didTapAccessorySelection:(id)arg2 sender:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)selectedItemInSection:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collapsibleHeaderController:(id)arg1 willUpdateHeaderToHeight:(double)arg2;
- (void)resetAllSectionControllersStateToDefault;
- (void)reloadCollectionViewDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateHeaderDependentLayoutWithHeaderFrame:(CGRect)arg1 fittingSize:(CGSize)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)createVerticleRuleIfNeeded;
- (id)visibleLayout;
- (void)applyLayout:(id)arg1 layoutAvatarView:(BOOL)arg2;
- (void)applyLayout:(id)arg1;
- (void)updateLayoutAttributes;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)createAlphaAssetsLabel;
- (void)didTapAvatarView:(id)arg1;
- (void)tearDownCollapsibleHeaderIfNeeded;
- (void)setupTapGestureForView:(id)arg1;
- (void)updateCollapsibleHeaderHeightConstraintsAnimated:(BOOL)arg1;
- (void)setupCollapsibleHeaderIfNeededForLayout:(id)arg1 withSession:(id)arg2;
- (void)configureUserInfoLabel;
- (void)configureAVTViewFromSession:(id)arg1;
- (void)tearDownThrottler;
- (void)configureThrottlerForAVTView:(id)arg1;
- (void)beginAVTViewSessionWithDidBeginBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setupImageView;
- (void)setupPreview:(id /* CDUnknownBlockType */)arg1;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (id)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)transitionToLiveViewAnimated:(BOOL)arg1;
- (void)updateImageViewWithPosedAvatarRecordForcingRender:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)notifyingContainerViewDidChangeSize:(CGSize)arg1;
- (void)notifyingContainerViewWillChangeSize:(CGSize)arg1;
- (UIEdgeInsets)adjustedSafeAreaInsets;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) AVTMemoji *avatar;
@property(readonly, nonatomic) AVTAvatarRecord *avatarRecord;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3 isCreating:(BOOL)arg4;
- (id)init;
- (void)configurePPTMemoji:(id /* CDUnknownBlockType */)arg1;
- (void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(id /* CDUnknownBlockType */)arg2;
- (void)selectCategory:(id)arg1 withCompletionDelay:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;

@end
