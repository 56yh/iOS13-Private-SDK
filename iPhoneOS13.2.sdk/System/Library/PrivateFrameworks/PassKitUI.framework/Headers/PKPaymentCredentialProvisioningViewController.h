//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

#import <PassKitUI/PKPaymentProvisioningControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupHideSetupLaterButtonProtocol-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKPaymentCredential, PKPaymentCredentialMetadataTableController, PKPaymentSetupProduct, UIImage;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol>
{
    UIImage *_passSnapshotPlaceHolder;
    unsigned long long _credentialProvisioningType;
    unsigned long long _displayType;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentSetupProduct *_setupProduct;
    _Bool _allowsManualEntry;
    _Bool _previouslyAcceptedTerms;
    _Bool _snapshotNeedsCorners;
    UIImage *_passSnapshot;
    _Bool _shouldAutoProvision;
}

@property(nonatomic) _Bool shouldAutoProvision; // @synthesize shouldAutoProvision=_shouldAutoProvision;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(id /* block */)arg1;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (_Bool)isComplete;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_performFinishWithCompletion:(id /* block */)arg1;
- (void)_performProvisionWithCompletion:(id /* block */)arg1;
- (void)_performTermsWithCompletion:(id /* block */)arg1;
- (void)_performEligibilityWithCompletion:(id /* block */)arg1;
- (void)_performRequirementsWithCompletion:(id /* block */)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_preflightCredentialFieldsWithCompletion:(id /* block */)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updatePassSnapshotHeader;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)_terminateSetupFlow;
- (void)_skipCard;
- (void)addDifferentCard:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setPassSnapshot:(id)arg1 needsCorners:(_Bool)arg2;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(_Bool)arg6 previouslyAcceptedTerms:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

