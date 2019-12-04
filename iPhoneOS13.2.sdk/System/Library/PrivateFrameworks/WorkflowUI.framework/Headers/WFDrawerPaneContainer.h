//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFDrawerGestureCoordinatorDelegate-Protocol.h>

@class NSString, UIView, WFDrawerAnimationManager, WFDrawerDismissalHelper, WFDrawerGestureCoordinator;
@protocol WFDrawerPane, WFDrawerPaneContainerDelegate;

@interface WFDrawerPaneContainer : UIViewController <WFDrawerGestureCoordinatorDelegate>
{
    _Bool _userInteractionEnabled;
    _Bool _inactive;
    id <WFDrawerPaneContainerDelegate> _delegate;
    UIViewController<WFDrawerPane> *_drawerPane;
    unsigned long long _visibility;
    unsigned long long _dimming;
    WFDrawerGestureCoordinator *_gestureCoordinator;
    WFDrawerAnimationManager *_animationManager;
    WFDrawerDismissalHelper *_dismissalHelper;
    UIView *_backgroundDimmingView;
    UIView *_foregroundDimmingView;
}

@property(readonly, nonatomic) __weak UIView *foregroundDimmingView; // @synthesize foregroundDimmingView=_foregroundDimmingView;
@property(readonly, nonatomic) __weak UIView *backgroundDimmingView; // @synthesize backgroundDimmingView=_backgroundDimmingView;
@property(readonly, nonatomic) WFDrawerDismissalHelper *dismissalHelper; // @synthesize dismissalHelper=_dismissalHelper;
@property(readonly, nonatomic) WFDrawerAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
@property(readonly, nonatomic) WFDrawerGestureCoordinator *gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
@property(nonatomic, getter=isInactive) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, nonatomic) unsigned long long dimming; // @synthesize dimming=_dimming;
@property(readonly, nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) UIViewController<WFDrawerPane> *drawerPane; // @synthesize drawerPane=_drawerPane;
@property(nonatomic) __weak id <WFDrawerPaneContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)growingVisibilityForHeight:(double)arg1;
- (unsigned long long)shrinkingVisibilityForHeight:(double)arg1;
- (unsigned long long)closestVisibilityForHeight:(double)arg1;
- (double)heightForVisibility:(unsigned long long)arg1;
- (unsigned long long)closestVisibilityWithVelocity:(double)arg1 acceleration:(double)arg2 previousVisibility:(unsigned long long)arg3;
- (void)gestureCoordinator:(id)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(id)arg4;
- (void)gestureCoordinator:(id)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
- (void)gestureCoordinatorDidBeginInteraction:(id)arg1;
@property(readonly, nonatomic) struct CGRect grabberAreaBounds;
@property(readonly, nonatomic) double drawerHeight;
@property(readonly, nonatomic) double maximumDrawerHeight;
@property(readonly, nonatomic) double minimumDrawerHeight;
@property(readonly, nonatomic) UIView *drawerView;
@property(readonly, nonatomic) UIView *containerView;
- (void)removeForegroundDimmingViewIfUnused;
- (void)installForegroundDimmingViewIfNeeded;
- (void)setupDimmingViewsForAnimationToDimming:(unsigned long long)arg1;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 interruptible:(_Bool)arg4 completion:(id /* block */)arg5;
- (void)transitionWithPushedAnimationToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 interruptible:(_Bool)arg4 completion:(id /* block */)arg5;
- (void)layoutDrawerViewControllerForDrawerHeight:(double)arg1;
- (void)layoutDrawerViewController;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithDrawerPane:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

