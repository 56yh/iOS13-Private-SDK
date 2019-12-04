//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAiCloudTermsAgreeRequest : AARequest
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    _Bool _preferPassword;
}

@property(nonatomic) _Bool preferPassword; // @synthesize preferPassword=_preferPassword;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 account:(id)arg2;

@end

