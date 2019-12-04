//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccount, PKAccountService, PKPaymentPass, PKPhysicalCard, PKVirtualCard, PKVirtualCardCredentials;

@interface PKAccountCardNumbersViewController : PKSectionTableViewController
{
    unsigned long long _accountFeatureIdentifier;
    PKVirtualCard *_virtualCard;
    PKVirtualCardCredentials *_cardCredentials;
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPaymentPass *_pass;
    long long _context;
    _Bool _loadingReplacementCard;
    PKPhysicalCard *_physicalCard;
    _Bool _redactSensitiveDetails;
}

- (id)_replaceCardAlertFromIndexPath:(id)arg1;
- (id)_virtualCardStateFooter;
- (void)traitCollectionDidChange:(id)arg1;
- (id)reuseIdentifierForSection:(unsigned long long)arg1;
- (id)_buttonCellForRowIndex:(long long)arg1 text:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3;
- (id)_dpanCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_physicalCardCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_cardCredentialsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)arg1;
- (_Bool)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)arg1;
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)viewDidLoad;
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 physicalCard:(id)arg4 context:(long long)arg5;
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 cardCredentials:(id)arg4 virtualCard:(id)arg5 physicalCard:(id)arg6 context:(long long)arg7;

@end

