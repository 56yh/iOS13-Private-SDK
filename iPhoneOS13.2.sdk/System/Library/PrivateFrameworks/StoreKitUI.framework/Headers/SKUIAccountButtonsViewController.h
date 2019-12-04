//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, SKUIAccountButtonsView, SKUIClientContext, SKUILink;
@protocol SKUIAccountButtonsDelegate;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsViewController : UIViewController <UINavigationControllerDelegate>
{
    SKUIAccountButtonsView *_buttonsView;
    SKUIClientContext *_clientContext;
    id <SKUIAccountButtonsDelegate> _delegate;
    SKUILink *_ecommerceLink;
}

@property(retain, nonatomic) SKUILink *ECommerceLink; // @synthesize ECommerceLink=_ecommerceLink;
@property(nonatomic) __weak id <SKUIAccountButtonsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_viewAppleID;
- (void)_signOut;
- (void)_sendDidSignIn;
- (void)_reloadRestrictions;
- (void)_reloadAccountsButton;
- (void)_openIForgot;
- (id)_buttonsView;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_usernameButtonAction:(id)arg1;
- (void)_termsAndConditionsButtonAction:(id)arg1;
- (void)_signInButtonAction:(id)arg1;
- (void)_redeemButtonAction:(id)arg1;
- (void)_giftAction:(id)arg1;
- (void)_ecommerceLinkAction:(id)arg1;
- (void)loadView;
@property(nonatomic, getter=isTermsAndConditionsHidden) _Bool termsAndConditionsHidden;
@property(nonatomic, getter=isGiftingHidden) _Bool giftingHidden;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

