//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_offers;
}

+ (id)_offerFullPath;
+ (id)_offerPath;
+ (id)defaultOfferManager;
@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
- (void)_setOffers:(id)arg1;
- (id)_offers;
- (id)_connection;
- (void)clearOffers:(id /* block */)arg1;
- (void)fetchOffers:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)saveOffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end

