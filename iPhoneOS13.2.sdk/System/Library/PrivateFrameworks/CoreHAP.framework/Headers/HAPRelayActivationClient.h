//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;

@interface HAPRelayActivationClient : HMFObject
{
    id <HAPRelayActivationClientDelegate> _delegate;
}

@property __weak id <HAPRelayActivationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)close;
- (void)open;

@end

