//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXAssetCollectionReference, PXCuratedLibrarySkimmingController;

@protocol PXCuratedLibrarySkimmingControllerDelegate 
- (void)skimmingControllerDidStopSkimming:(PXCuratedLibrarySkimmingController *)arg1 animationDuration:(double)arg2;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willStartSkimmingAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willHideSkimmingHintsForAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willShowSkimmingHintsForAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (PXAssetCollectionReference *)assetCollectionReferenceForSkimmingSlideshow:(PXCuratedLibrarySkimmingController *)arg1;
- (PXAssetCollectionReference *)assetCollectionReferenceToShowSkimmingHints:(PXCuratedLibrarySkimmingController *)arg1;
@end

