//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IKAppDocument, UIViewController, _TVAppDocumentController, _TVAppNavigationController;

@protocol _TVAppNavigationControllerDelegate 

@optional
- (_Bool)appNavigationController:(_TVAppNavigationController *)arg1 shouldDismissShroudForDocument:(IKAppDocument *)arg2;
- (_Bool)appNavigationController:(_TVAppNavigationController *)arg1 shouldIgnoreDismissalForViewController:(UIViewController *)arg2;
- (_Bool)appNavigationController:(_TVAppNavigationController *)arg1 shouldOverrideModalBehaviorForDocument:(IKAppDocument *)arg2 andExistingDocument:(IKAppDocument *)arg3;
- (void)appNavigationControllerWillDisappear:(_TVAppNavigationController *)arg1;
- (void)appNavigationController:(_TVAppNavigationController *)arg1 willLoadAppDocumentWithController:(_TVAppDocumentController *)arg2;
@end

