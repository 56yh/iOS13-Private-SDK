//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICPushNotificationsResponse, ICStoreRequestContext, NSData;

@interface ICPushNotificationsRegisterAPNSTokenRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    NSData *_token;
    ICPushNotificationsResponse *_response;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (id)initWithRequestContext:(id)arg1 token:(id)arg2;

@end

