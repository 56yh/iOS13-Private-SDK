//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HFItem, HUControllableCollectionViewLayoutOverrideAttributes, HUQuickControlPresentationContext, HUQuickControlPresentationCoordinator, UITraitCollection, UIViewController;
@protocol HUDetailsPresentationDelegateHost, HUOpenURLHandling;

@protocol HUQuickControlPresentationCoordinatorDelegate 
- (_Bool)hasDetailsActionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 item:(HFItem *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 clearOverrideAttributesForItem:(HFItem *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg2 toItem:(HFItem *)arg3;
- (HUQuickControlPresentationContext *)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 contextForPresentationAtPoint:(struct CGPoint)arg2;
- (_Bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (UITraitCollection *)traitCollectionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;

@optional
- (_Bool)allowsPresentationWithOnlySettings;
- (void)presentationCoordinatorDidCancelDismissalTransition:(HUQuickControlPresentationCoordinator *)arg1;
- (void)presentationCoordinatorWillBeginDismissalTransition:(HUQuickControlPresentationCoordinator *)arg1;
- (_Bool)presentationCoordinatorShouldDisablePullToUnlockSettings:(HUQuickControlPresentationCoordinator *)arg1;
- (long long)preferredModalPresentationStyleForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;
- (_Bool)presentationCoordinatorShouldProvideCancellationFeedback:(HUQuickControlPresentationCoordinator *)arg1;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didEndPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 willEndPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 willBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (_Bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didRecognizeTapForItem:(HFItem *)arg2;
- (id <HUOpenURLHandling>)detailViewURLHandlerForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 item:(HFItem *)arg2;
@end

