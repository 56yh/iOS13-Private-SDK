//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewController.h>

#import <UIKitCore/PageRangeDelegate-Protocol.h>
#import <UIKitCore/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>
#import <UIKitCore/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UINavigationControllerDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewDelegate-Protocol.h>
#import <UIKitCore/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSObject, NSString, NSURL, UICollectionViewCell, UIDocumentInteractionController, UIImageView, UILabel, UIPrintPanelViewController, UIPrintPaper, UIView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIPrintPreviewViewController : UICollectionViewController <UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate_Private, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSourcePrefetching, UIScrollViewDelegate, PageRangeDelegate, UINavigationControllerDelegate>
{
    long long _numPages;
    struct CGSize _pageSize;
    _Bool _grayscalePreview;
    _Bool _annotationsOnPreview;
    _Bool _accessibilityScrollTriggered;
    UIPrintPanelViewController *_printPanelViewController;
    UIView *_pageLabelBackgroundView;
    UIImageView *_pageLabelOnImageView;
    UILabel *_pageLabel;
    long long _pageIndexOnPageLabel;
    NSURL *_pdfURL;
    struct CGPDFDocument *_pdfDocRef;
    NSObject<OS_dispatch_queue> *_pageRendererQueue;
    NSLayoutConstraint *_pageLabelBadgeVerticalPositionConstraint;
    UIDocumentInteractionController *_documentInteractionController;
    NSURL *_sharePDFFileURL;
    UICollectionViewCell *_pinchGestureBeginningCell;
    UIImageView *_pinchAnimationView;
    UIView *_pinchAnimationWhiteBackgroundView;
    struct CGPoint _pinchGestureLastPoint;
    double _pinchGestureLastScale;
    _Bool _scaleUpOnDestinationPaper;
    _Bool _presentingDocumentInteractionController;
    NSMutableArray *_arrayOfPageImages;
    NSArray *_arrayOfCellSizes;
    NSURL *_quickLookPDFURL;
    UIPrintPaper *_destinationPaper;
    NSString *_pdfPassword;
    long long _initialPageIndexToCenter;
}

@property _Bool presentingDocumentInteractionController; // @synthesize presentingDocumentInteractionController=_presentingDocumentInteractionController;
@property(readonly) long long numPages; // @synthesize numPages=_numPages;
@property long long initialPageIndexToCenter; // @synthesize initialPageIndexToCenter=_initialPageIndexToCenter;
@property(retain) NSString *pdfPassword; // @synthesize pdfPassword=_pdfPassword;
@property _Bool scaleUpOnDestinationPaper; // @synthesize scaleUpOnDestinationPaper=_scaleUpOnDestinationPaper;
@property(retain) UIPrintPaper *destinationPaper; // @synthesize destinationPaper=_destinationPaper;
@property(retain) NSURL *quickLookPDFURL; // @synthesize quickLookPDFURL=_quickLookPDFURL;
@property(retain) NSArray *arrayOfCellSizes; // @synthesize arrayOfCellSizes=_arrayOfCellSizes;
@property(retain) NSMutableArray *arrayOfPageImages; // @synthesize arrayOfPageImages=_arrayOfPageImages;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint)arg1;
@property(readonly) long long currentCenterPageIndex;
- (_Bool)accessibilityScroll:(long long)arg1;
- (long long)_adjustScrollDirectionForLayout:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (void)previewPDF;
- (id)documentInteractionControllerByPreparedForPreviewing;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (id)_newTempURLForPreviewing;
- (_Bool)canBecomeFirstResponder;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)fetchPageInBackground:(unsigned long long)arg1 reloadWhenDone:(_Bool)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageRangeUpdated;
- (_Bool)canShowMenuBar;
- (void)addAllPages:(id)arg1;
- (_Bool)canAddAllPages:(id)arg1;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)pageIndexIsInRange:(long long)arg1;
- (void)pageBadgeTapped:(id)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)locationInTapTargetOfPageLabelBadge:(struct CGPoint)arg1;
- (id)gestureRecognizersOfVisibleCells;
- (void)handlePinch:(id)arg1;
- (void)animateCellAndPresentDocumentInteractionController;
- (void)updatePageLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)pathOfCenterMostCell;
- (void)trackCenterCell;
- (id)getPageImageForPage:(long long)arg1 grayscale:(_Bool)arg2 deepColor:(_Bool)arg3;
@property(retain) NSURL *pdfURL;
- (void)resetCellSizesArray;
- (void)resetAllPageImages;
@property _Bool annotationsOnPreview;
@property _Bool grayscalePreview;
- (void)didReceiveMemoryWarning;
- (void)updatePageBadgeImage;
- (void)updatePageNumberBadgeLocation;
- (void)dealloc;
- (void)updateLayout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)pageLabelBottomSpace;
- (id)initWithPageSize:(struct CGSize)arg1 numberOfPages:(long long)arg2 viewSize:(struct CGSize)arg3 printPanelViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

