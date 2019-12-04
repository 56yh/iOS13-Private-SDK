//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation
{
    _Bool _allowsFuseHeaderEnrichment;
    ICMusicSubscriptionStatusRequest *_request;
    id /* block */ _responseHandler;
}

@property(copy, nonatomic) id /* block */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) _Bool allowsFuseHeaderEnrichment; // @synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
- (_Bool)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(_Bool)arg3 maximumRetryCount:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)execute;
- (id)initWithRequest:(id)arg1;

@end

