//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIView, UIViewController, _UIPreviewInteractionController;
@protocol UICoordinateSpace;

@protocol _UIPreviewInteractionControllerDelegate 
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewInteractionController:(_UIPreviewInteractionController *)arg1 viewControllerForPreviewingAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3 presentingViewController:(id *)arg4;

@optional
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 didDismissViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2 forLocation:(struct CGPoint)arg3 inSourceView:(UIView *)arg4;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2;
@end
