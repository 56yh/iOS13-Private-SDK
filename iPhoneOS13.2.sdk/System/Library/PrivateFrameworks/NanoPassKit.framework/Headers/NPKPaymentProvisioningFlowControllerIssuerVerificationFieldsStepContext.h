//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext
{
    PKPaymentPass *_paymentPass;
    NSArray *_verificationFields;
}

@property(retain, nonatomic) NSArray *verificationFields; // @synthesize verificationFields=_verificationFields;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

