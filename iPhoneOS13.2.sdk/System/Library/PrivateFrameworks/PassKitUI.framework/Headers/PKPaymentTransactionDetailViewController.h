//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/CNContactViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentTransactionReportFraudConfirmationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>
#import <PassKitUI/PKTransactionDetailQuestionCellDelegate-Protocol.h>

@class NSArray, NSDateFormatter, NSString, NSTimeZone, PKAccountServiceAccountResolutionController, PKPaymentPass, PKPaymentTransaction, PKPaymentTransactionCellController, PKPaymentTransactionDetailHeaderView, PKPeerPaymentContactResolver, PKPeerPaymentController, PKPeerPaymentStatusResponse, UIImage;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionDetailViewController : PKSectionTableViewController <PKPeerPaymentContactResolverDelegate, PKPaymentDataProviderDelegate, CNContactViewControllerDelegate, PKTransactionDetailQuestionCellDelegate, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate>
{
    long long _detailViewStyle;
    _Bool _showRawName;
    _Bool _showTransactionTimeZone;
    _Bool _showProductTimeZone;
    PKPaymentTransaction *_associatedRefund;
    PKPaymentTransaction *_associatedAdjustment;
    NSArray *_associatedInstallmentPlans;
    PKPaymentTransactionCellController *_transactionCellController;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    _Bool _allowTransactionLinks;
    NSString *_submittingAnswer;
    _Bool _issuerAppDeepLinkingEnabled;
    _Bool _inBridge;
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionDetailHeaderView *_headerView;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentController *_peerPaymentController;
    UIImage *_mapTilePlaceholderImage;
    NSArray *_lineItems;
    PKPeerPaymentStatusResponse *_peerPaymentStatusResponse;
    NSDateFormatter *_transactionDateFormatter;
    NSDateFormatter *_transactionLocalTimeDateFormatter;
    NSDateFormatter *_productTimeZoneFormatter;
    NSTimeZone *_productTimeZone;
}

@property(retain, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property(retain, nonatomic) NSDateFormatter *productTimeZoneFormatter; // @synthesize productTimeZoneFormatter=_productTimeZoneFormatter;
@property(retain, nonatomic) NSDateFormatter *transactionLocalTimeDateFormatter; // @synthesize transactionLocalTimeDateFormatter=_transactionLocalTimeDateFormatter;
@property(retain, nonatomic) NSDateFormatter *transactionDateFormatter; // @synthesize transactionDateFormatter=_transactionDateFormatter;
@property(retain, nonatomic) PKPeerPaymentStatusResponse *peerPaymentStatusResponse; // @synthesize peerPaymentStatusResponse=_peerPaymentStatusResponse;
@property(retain, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(retain, nonatomic) UIImage *mapTilePlaceholderImage; // @synthesize mapTilePlaceholderImage=_mapTilePlaceholderImage;
@property(nonatomic) _Bool inBridge; // @synthesize inBridge=_inBridge;
@property(nonatomic) _Bool issuerAppDeepLinkingEnabled; // @synthesize issuerAppDeepLinkingEnabled=_issuerAppDeepLinkingEnabled;
@property(retain, nonatomic) PKPeerPaymentController *peerPaymentController; // @synthesize peerPaymentController=_peerPaymentController;
@property(retain, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(retain, nonatomic) PKPaymentTransactionDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) id <PKPaymentDataProvider> paymentServiceDataProvider; // @synthesize paymentServiceDataProvider=_paymentServiceDataProvider;
@property(readonly, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void)didReportFraudInViewController:(id)arg1;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)_presentPhysicalCardSuspendedAlert;
- (void)_presentCardNumberUpdatedAlert;
- (void)submitAnswer:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)_tableView:(id)arg1 willDisplayAmountDetailsCell:(id)arg2 atIndexPath:(id)arg3;
- (id)_tableView:(id)arg1 cellForAmountDetailLineItemAtIndex:(long long)arg2;
- (id)_debugDetailCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_fraudRiskCellForTableView:(id)arg1;
- (id)_transactionIdentifierCellForTableView:(id)arg1;
- (id)_statusCellForTableView:(id)arg1;
- (id)_questionCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_amountDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_applyAmountDetailSeparatorInsetForTableView:(id)arg1 cell:(id)arg2;
- (unsigned long long)_lineItemItemForRowIndex:(unsigned long long)arg1;
- (_Bool)_amountDetailsRowIsEnabled:(unsigned long long)arg1;
- (unsigned long long)_numberOfAmountDetailsRows;
- (unsigned long long)_amountDetailsRowForIndex:(unsigned long long)arg1;
- (void)_tableView:(id)arg1 didSelectMechantAddressAtIndexPath:(id)arg2;
- (id)_mapTilePlaceholderImage;
- (id)_merchantAddressCellForTableView:(id)arg1;
- (id)_transactionStatusString;
- (void)_openBusinessChatControllerForContext:(id)arg1;
- (void)_presentContactViewController;
- (void)_presentReportIssue;
- (_Bool)_transactionHasNonZeroSecondaryFundingSourceAmount;
- (void)_openTransactionInIssuerApp;
- (void)_openMessagesToPresentAction:(unsigned long long)arg1;
- (void)_tableView:(id)arg1 didSelectPeerPaymentAction:(id)arg2 atIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 didSelectActionAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 actionButtonCellForSection:(unsigned long long)arg2;
- (id)_tableView:(id)arg1 cellForActionAtIndex:(long long)arg2;
- (long long)_rowIndexForActionRow:(unsigned long long)arg1;
- (unsigned long long)_actionRowForRowIndex:(long long)arg1;
- (long long)_numberOfActionRowsEnabled;
- (_Bool)_shouldHighlightAction:(unsigned long long)arg1;
- (_Bool)_actionRowIsEnabled:(unsigned long long)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_updateAccountResolutionControllerIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_accountWithCompletion:(id /* block */)arg1;
- (void)_showInstallmentDetailsForAssociatedInstallment:(id)arg1;
- (id)_associatedInstallmentCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handlePeerPaymentDisplayableError:(id)arg1 withPeerPaymentController:(id)arg2;
- (void)_performPeerPaymentAction:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_subtitleCellWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_updateTableHeaderHeight;
- (void)_handleTransactionHeaderTapRecognizer:(id)arg1;
- (id)formattedBalanceAdjustmentAmountWithTransitDescriptors;
- (void)_reloadTableHeaderView;
- (void)viewWillLayoutSubviews;
- (void)_updatePeerPaymentTransactionStatusWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)_recomputeLineItems;
- (void)setTransaction:(id)arg1;
- (id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 contactResolver:(id)arg3 peerPaymentController:(id)arg4 paymentServiceDataProvider:(id)arg5 detailViewStyle:(long long)arg6 allowTransactionLinks:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

