//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIPresentationController, UITraitCollection, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol UIAdaptivePresentationControllerDelegate 

@optional
- (void)presentationControllerDidAttemptToDismiss:(UIPresentationController *)arg1;
- (void)presentationControllerDidDismiss:(UIPresentationController *)arg1;
- (void)presentationControllerWillDismiss:(UIPresentationController *)arg1;
- (_Bool)presentationControllerShouldDismiss:(UIPresentationController *)arg1;
- (void)presentationController:(UIPresentationController *)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIViewController *)presentationController:(UIPresentationController *)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1 traitCollection:(UITraitCollection *)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1;
@end

