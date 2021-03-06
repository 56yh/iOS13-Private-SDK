//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentPass, PKPaymentSetupAddToWatchOfferView, UIView;

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController
{
    UIView *_interactionDisabledView;
    PKPaymentPass *_pass;
    long long _context;
    id /* CDUnknownBlockType */ _dismissalHandler;
    PKPaymentSetupAddToWatchOfferView *_offerView;
}

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, retain, nonatomic) PKPaymentSetupAddToWatchOfferView *offerView; // @synthesize offerView=_offerView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (void)_setIdleTimerDisabled:(BOOL)arg1;
- (void)_clearInteractionDisabledView;
- (void)_hideSpinner;
- (void)_showSpinner;
- (void)_handleDismissal:(BOOL)arg1;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_addLaterTapped:(id)arg1;
- (void)_openAppTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (NSUInteger)edgesForExtendedLayout;
- (void)_configureNavigationItem;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(id /* CDUnknownBlockType */)arg3;

@end

