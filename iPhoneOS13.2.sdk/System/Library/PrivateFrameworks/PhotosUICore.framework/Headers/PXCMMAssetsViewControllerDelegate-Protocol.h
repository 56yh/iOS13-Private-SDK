//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXCMMAssetsViewController, PXOneUpPresentation;

@protocol PXCMMAssetsViewControllerDelegate 
- (void)assetsViewControllerDidTapSendBackActionButton:(PXCMMAssetsViewController *)arg1;
- (void)assetsViewControllerDidTapActionButton:(PXCMMAssetsViewController *)arg1;

@optional
- (void)didPerformDeletionActionForAssetsViewController:(PXCMMAssetsViewController *)arg1;
- (PXOneUpPresentation *)oneUpPresentationForAssetsViewController:(PXCMMAssetsViewController *)arg1;
- (void)didTapAddMoreButtonForAssetsViewController:(PXCMMAssetsViewController *)arg1;
- (_Bool)shouldShowAddMoreButtonForAssetsViewController:(PXCMMAssetsViewController *)arg1;
@end

