//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
}

@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPaymentPass:(id)arg1;

@end

