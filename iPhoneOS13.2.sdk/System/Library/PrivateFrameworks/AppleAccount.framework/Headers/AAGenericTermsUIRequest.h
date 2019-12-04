//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary;

@interface AAGenericTermsUIRequest : AARequest
{
    NSDictionary *_requestDictionary;
    ACAccount *_account;
    _Bool _preferPassword;
}

+ (Class)responseClass;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(_Bool)arg3;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (id)urlString;

@end

