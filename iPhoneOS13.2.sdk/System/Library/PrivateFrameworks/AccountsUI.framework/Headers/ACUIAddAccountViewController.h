//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <AccountsUI/ACUISetupViewControllerDelegate-Protocol.h>

@class ACAccountStore, ACUIAccountViewProvidersManager, NSArray, NSString, PSSpecifier;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate>
{
    _Bool _dontShowSecondLevelOtherAccountTypes;
    NSArray *_preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    PSSpecifier *_gmailSpecifier;
    NSString *_filteredDataclass;
    ACAccountStore *_accountStore;
}

- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2;
- (id)specifierForOtherAccounts;
- (id)_specifierForRegionalAccountType:(id)arg1;
- (id)_specifiersForRegionalMailAccounts;
- (id)_specifierForOutlookAccount;
- (id)_specifierForAOLAccount;
- (id)_specifierForYahooAccount;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(_Bool)arg1;
- (void)_createCustomControlledAccountTapped:(id)arg1;
- (id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2;
- (id)_specifierForGmailAccount;
- (id)_specifierForExchangeAccount;
- (void)_dismissAndBecomeFirstResponder;
- (void)signInControllerDidCancel;
- (void)signInControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_presentPrimaryAppleIDSignInController:(id)arg1;
- (id)_specifierForPrimaryiCloudAccount;
- (id)_specifierForiCloudAccount;
- (id)specifiers;
- (_Bool)shouldAddSpecifierForAccountTypeID:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
@property(readonly, nonatomic) ACUIAccountViewProvidersManager *viewProvidersManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

