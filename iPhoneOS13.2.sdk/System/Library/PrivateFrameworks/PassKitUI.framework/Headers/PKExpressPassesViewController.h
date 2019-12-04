//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKExpressPassCategoryViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, PKExpressPassController, PKPassSnapshotter;
@protocol PKPaymentDataProvider;

@interface PKExpressPassesViewController : PKSectionTableViewController <PKExpressPassCategoryViewControllerDelegate>
{
    NSMutableArray *_transitPassCategories;
    PKExpressPassController *_expressPassController;
    NSMutableArray *_paymentPasses;
    NSArray *_allPasses;
    id <PKPaymentDataProvider> _paymentDataProvider;
    long long _style;
    long long _selectedPaymentPassIndex;
    _Bool _selectedPaymentPassIsInPendingState;
    _Bool _isUserInteractionsEnabled;
    _Bool _userAutomaticExpressModeText;
    _Bool _useOldAppearance;
    PKPassSnapshotter *_passSnapshotter;
}

- (void)_updateExpressState:(id)arg1;
- (void)_updatePasses:(id)arg1;
- (id)_createCategoryForPass:(id)arg1;
- (long long)_categoryIndexForPass:(id)arg1;
- (id)_categoryIdentifierForPass:(id)arg1;
- (id)_categoryForTransitPass:(id)arg1;
- (id)_categoryForIndex:(long long)arg1;
- (id)_paymentPassForIndex:(long long)arg1;
- (void)expressPassCategoryViewController:(id)arg1 didUpdateExpressState:(id)arg2;
- (void)_updatePaymentCardCellWithIndex:(long long)arg1 statusString:(id)arg2;
- (void)_updateCardImageForCell:(id)arg1 withPass:(id)arg2 inCategory:(id)arg3;
- (void)_addSpinnerToCell:(id)arg1;
- (id)_transformState:(id)arg1;
- (void)_invalidateUserAuth;
- (void)_acquireUserAuthForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_conflictingPassesForUseCaseWithPasses:(id)arg1;
- (void)_promptUserAboutConflicts:(id)arg1 forPass:(id)arg2 completion:(id /* block */)arg3;
- (void)_setUserInteractionsEnabled:(_Bool)arg1;
- (void)_updateUIWithExpressState;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)transitCardCategoryCellForRow:(long long)arg1;
- (id)paymentCardCellForRow:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)_sendExpressPassDidChangeNotification;
- (void)_disableExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_enableExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_upgradeExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)userChangedExpressSettingForPaymentPassAtIndexPath:(id)arg1;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_passWithUniqueIdentifier:(id)arg1;
- (id)additionalViewControllersForPassUniqueIdentifier:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithPasses:(id)arg1 paymentDataProvider:(id)arg2 controller:(id)arg3 style:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

