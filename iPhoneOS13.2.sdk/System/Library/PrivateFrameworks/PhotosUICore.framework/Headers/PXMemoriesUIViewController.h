//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMemoriesUITileSourceDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>
#import <PhotosUICore/UIContextMenuInteractionDelegate-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PXBasicUIViewTileAnimator, PXMemoriesDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesSpec, PXMemoriesSpecManager, PXMemoriesUITileSource, PXPhotosDetailsContext, PXSectionedLayoutEngine, PXSectionedObjectReference, PXTilingController, PXTouchingUIGestureRecognizer, PXUIScrollViewController, PXUITapGestureRecognizer;

@interface PXMemoriesUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController>
{
    struct {
        _Bool layoutEngine;
        _Bool layout;
    } _updateFlags;
    _Bool __performNextTransitionWithoutAnimation;
    _Bool _embedded;
    PXMemoriesDataSourceManager *_dataSourceManager;
    PXMemoriesFeedViewControllerHelper *__helper;
    PXMemoriesSpecManager *__specManager;
    PXMemoriesUITileSource *__tileSource;
    PXSectionedLayoutEngine *__layoutEngine;
    PXSectionedObjectReference *_anchorMemoryReference;
    PXSectionedObjectReference *__highlightedMemoryReference;
    PXSectionedObjectReference *__actionPresentationMemoryReference;
    PXSectionedObjectReference *__activatedMemoryReference;
    PXPhotosDetailsContext *__selectedItemDetailsContext;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXMemoriesSpec *__spec;
    unsigned long long __memoriesStyle;
    PXUITapGestureRecognizer *__tapRecognizer;
    PXTouchingUIGestureRecognizer *__touchRecognizer;
    unsigned long long _pageIndex;
    PXTilingController *_tilingController;
    PXUIScrollViewController *_scrollViewController;
    struct CGPoint _anchorMemoryOrigin;
}

@property(nonatomic, getter=isEmbedded) _Bool embedded; // @synthesize embedded=_embedded;
@property(readonly, nonatomic) PXUIScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic, setter=_setPerformNextTransitionWithoutAnimation:) _Bool _performNextTransitionWithoutAnimation; // @synthesize _performNextTransitionWithoutAnimation=__performNextTransitionWithoutAnimation;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer; // @synthesize _touchRecognizer=__touchRecognizer;
@property(readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property(readonly, nonatomic) unsigned long long _memoriesStyle; // @synthesize _memoriesStyle=__memoriesStyle;
@property(retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec; // @synthesize _spec=__spec;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext; // @synthesize _selectedItemDetailsContext=__selectedItemDetailsContext;
@property(retain, nonatomic, setter=_setActivatedMemoryReference:) PXSectionedObjectReference *_activatedMemoryReference; // @synthesize _activatedMemoryReference=__activatedMemoryReference;
@property(retain, nonatomic, setter=_setActionPresentationMemoryReference:) PXSectionedObjectReference *_actionPresentationMemoryReference; // @synthesize _actionPresentationMemoryReference=__actionPresentationMemoryReference;
@property(retain, nonatomic, setter=_setHighlightedMemoryReference:) PXSectionedObjectReference *_highlightedMemoryReference; // @synthesize _highlightedMemoryReference=__highlightedMemoryReference;
@property(nonatomic, setter=_setAnchorMemoryOrigin:) struct CGPoint anchorMemoryOrigin; // @synthesize anchorMemoryOrigin=_anchorMemoryOrigin;
@property(retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference; // @synthesize anchorMemoryReference=_anchorMemoryReference;
@property(readonly, nonatomic) PXSectionedLayoutEngine *_layoutEngine; // @synthesize _layoutEngine=__layoutEngine;
@property(readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // @synthesize _tileSource=__tileSource;
@property(readonly, nonatomic) PXMemoriesSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property(readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // @synthesize _helper=__helper;
@property(readonly, nonatomic) PXMemoriesDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) long long userInterfaceFeature;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)prepareForInteractiveTransition:(id)arg1;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)_sourceViewForMemoryActionsController;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)datasourceManagerDidChange;
- (void)_saveAnchor;
- (void)_updateScrollViewControllerContentInset;
- (struct PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_previewActionMenusForIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_memoryTileViewForLocation:(struct CGPoint)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)_configureLayout:(id)arg1;
- (void)_reconfigureTargetLayout;
- (void)_handleTouch:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_handleScrollViewTap:(id)arg1;
- (struct PXSimpleIndexPath)_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_indexPathForMemoryAtPoint:(struct CGPoint)arg1;
- (id)_createNewLayout;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateLayout;
- (id)createNewLayoutGenerator;
- (void)_updateLayoutEngineIfNeeded;
- (void)invalidateLayoutEngine;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (void)viewWillLayoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property(readonly) Class superclass;

@end

