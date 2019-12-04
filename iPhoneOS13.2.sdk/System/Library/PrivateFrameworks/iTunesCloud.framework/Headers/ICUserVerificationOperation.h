//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICUserVerificationRequest;

@interface ICUserVerificationOperation : ICAsyncOperation
{
    ICUserVerificationRequest *_verificationRequest;
    id /* block */ _responseHandler;
}

+ (id)operationWithVerificationRequest:(id)arg1;
@property(copy, nonatomic) id /* block */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICUserVerificationRequest *verificationRequest; // @synthesize verificationRequest=_verificationRequest;
- (void)execute;

@end

