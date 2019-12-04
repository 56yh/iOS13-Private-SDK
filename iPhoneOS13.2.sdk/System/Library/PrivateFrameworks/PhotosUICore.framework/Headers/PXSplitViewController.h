//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import <PhotosUICore/UISplitViewControllerDelegate-Protocol.h>

@class UIViewController;

@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate>
{
    _Bool _inViewWillTransitionToSize;
    long long _originalPreferredDisplayMode;
    _Bool _wantsSidebarHidden;
    UIViewController *_sidebarViewController;
    UIViewController *_contentViewController;
}

+ (void)initialize;
@property(nonatomic) _Bool wantsSidebarHidden; // @synthesize wantsSidebarHidden=_wantsSidebarHidden;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) UIViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
- (void)_splitViewController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
- (void)_splitViewController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2;
- (void)_splitViewController:(id)arg1 willUpdateDisplayModeButtonItemForTargetMode:(long long)arg2 withHidden:(_Bool *)arg3 image:(id *)arg4 title:(id *)arg5 showsBackButtonIndicator:(_Bool *)arg6;
- (long long)targetDisplayModeForActionInSplitViewController:(id)arg1;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)_isDisplayModeAllVisibleAllowed;
- (id)initWithCoder:(id)arg1;
- (id)initWithSidebarNavigationController:(id)arg1 contentViewController:(id)arg2;

@end

