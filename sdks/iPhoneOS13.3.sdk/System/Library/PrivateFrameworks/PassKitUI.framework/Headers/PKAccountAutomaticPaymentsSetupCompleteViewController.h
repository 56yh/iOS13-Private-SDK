//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController
{
    PKAccountAutomaticPaymentsController *_controller;
    NSUInteger _featureIdentifier;
}

// - (void).cxx_destruct;
- (void)_donePressed;
- (id)_doneButton;
- (id)_paymentDateString;
- (id)_paymentDayNameString;
- (id)_paymentDayString;
- (long long)_paymentDay;
- (id)bodyString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

@end

