//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDynamicProvisioningPageViewController.h>

#import <PassKitUI/PKApplyFlowControllerProtocol-Protocol.h>

@class NSString, PKApplyController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol>
{
    _Bool _isLoading;
    PKApplyController *_controller;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    id /* block */ _continueAction;
    id /* block */ _auxiliaryAction;
    id /* block */ _learnMoreAction;
    id /* block */ _doneAction;
}

@property(copy, nonatomic) id /* block */ doneAction; // @synthesize doneAction=_doneAction;
@property(copy, nonatomic) id /* block */ learnMoreAction; // @synthesize learnMoreAction=_learnMoreAction;
@property(copy, nonatomic) id /* block */ auxiliaryAction; // @synthesize auxiliaryAction=_auxiliaryAction;
@property(copy, nonatomic) id /* block */ continueAction; // @synthesize continueAction=_continueAction;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) __weak PKApplyController *controller; // @synthesize controller=_controller;
- (void)_bodyButtonAction;
- (void)_featureApplicationUpdated;
- (void)showNavigationBarSpinner:(_Bool)arg1;
- (void)terminateSetupFlow;
- (void)handleNextViewController:(id)arg1 displayableError:(id)arg2;
- (void)handleNextStep;
- (id)currentPage;
- (void)_performDoneAction:(_Bool)arg1;
- (void)_performLearnMoreAction;
- (void)_performActionForBlock:(id /* block */)arg1;
- (void)_cancel;
- (void)_done;
- (void)_learnMore;
- (void)_auxiliary;
- (void)_continue;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;

// Remaining properties
@property(copy, nonatomic) id /* block */ bodyButtonAction; // @dynamic bodyButtonAction;
@property(copy, nonatomic) id /* block */ cancelButtonAction; // @dynamic cancelButtonAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) id /* block */ doneButtonAction; // @dynamic doneButtonAction;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) id /* block */ primaryButtonAction; // @dynamic primaryButtonAction;
@property(copy, nonatomic) id /* block */ secondaryButtonAction; // @dynamic secondaryButtonAction;
@property(readonly) Class superclass;

@end

