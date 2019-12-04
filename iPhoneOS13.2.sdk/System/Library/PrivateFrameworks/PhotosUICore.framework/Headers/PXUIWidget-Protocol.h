//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSObject, PXOneUpPresentation, PXPhotosDetailsContext, PXRegionOfInterest, PXUIViewControllerTransition, PXZoomAnimationCoordinator, UIFocusUpdateContext, UITraitCollection, UIViewController;
@protocol PXUIImageViewBasicTile, UICoordinateSpace;

@protocol PXUIWidget <PXWidget>

@optional
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
- (id <PXUIImageViewBasicTile>)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(NSObject<UICoordinateSpace> *)arg2;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2;
- (void)prepareForInteractiveTransition:(PXUIViewControllerTransition *)arg1;
- (PXZoomAnimationCoordinator *)zoomAnimationCoordinatorForContext:(PXPhotosDetailsContext *)arg1;
- (void)preloadWithSourceRegionOfInterest:(PXRegionOfInterest *)arg1 forContext:(PXPhotosDetailsContext *)arg2;
- (PXRegionOfInterest *)regionOfInterestForContext:(PXPhotosDetailsContext *)arg1;
- (void)environmentDidUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)controllerTraitCollectionDidChangeFrom:(UITraitCollection *)arg1 to:(UITraitCollection *)arg2;
@end

