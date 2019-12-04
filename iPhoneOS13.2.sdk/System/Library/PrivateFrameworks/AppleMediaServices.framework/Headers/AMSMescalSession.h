//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
    _Bool _primed;
}

+ (id)sessionWithType:(long long)arg1;
@property(nonatomic) _Bool primed; // @synthesize primed=_primed;
- (_Bool)_verifyPrimeResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_verifyEntitlements;
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;
- (void)_resetSession;
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;
- (id)_cachedCertPath;
- (id)_cachedCertData;
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (_Bool)primeTheConnectionWithBag:(id)arg1 error:(id *)arg2;
- (id)initWithType:(long long)arg1;

@end

