//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIURLConnectionRequest;

__attribute__((visibility("hidden")))
@interface SKUIGiftPurchaseRequest : NSObject
{
    SKUIURLConnectionRequest *_request;
}

- (id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2;
- (void)purchaseWithCompletionBlock:(id /* block */)arg1;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (id)initWithDonation:(id)arg1 configuration:(id)arg2;

@end
