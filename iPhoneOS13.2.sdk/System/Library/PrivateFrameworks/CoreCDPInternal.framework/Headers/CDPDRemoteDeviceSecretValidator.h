//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator
{
    id /* block */ _requestToJoinCompletion;
    _Bool _isWaitingForRemoteApproval;
}

- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (id)_decoratedDelegate;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)setValidSecretHandler:(id /* block */)arg1;

@end
