//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AMSAuthenticateRequest, AMSDialogRequest;

@protocol AMSRequestPresentationDelegate 
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 completion:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

