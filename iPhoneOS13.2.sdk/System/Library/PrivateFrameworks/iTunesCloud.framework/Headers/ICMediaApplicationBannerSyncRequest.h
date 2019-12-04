//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaApplicationBannerSyncResponse, ICStoreRequestContext;

@interface ICMediaApplicationBannerSyncRequest : ICRequestOperation
{
    ICStoreRequestContext *_storeRequestContext;
    ICMediaApplicationBannerSyncResponse *_response;
    unsigned long long _fromRevision;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2;

@end

