//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PKUIUtilities)
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)pkui_frontMostViewController;
- (void)_pk_presentViewController:(id)arg1 animated:(_Bool)arg2 transition:(int)arg3 popToViewControllerAfterPresentation:(id)arg4 completion:(id /* block */)arg5;
- (void)pk_presentViewController:(id)arg1 transition:(int)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(id /* block */)arg4;
- (void)pk_presentViewController:(id)arg1 animated:(_Bool)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(id /* block */)arg4;
- (void)pk_paymentSetupPreflight:(id /* block */)arg1;
- (void)pk_paymentSetupSetHideSetupLaterButton:(_Bool)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
@end

