//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, PKPeerPaymentDeviceRegistrationData;

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_pushToken;
    PKPeerPaymentDeviceRegistrationData *_deviceData;
}

@property(retain, nonatomic) PKPeerPaymentDeviceRegistrationData *deviceData; // @synthesize deviceData=_deviceData;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end

