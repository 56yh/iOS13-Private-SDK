//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSURL;

@protocol TVPContentKeyLoading 
- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1;

@optional
- (void)updateOfflineKeyWithIdentifier:(NSURL *)arg1 updatedOfflineKeyData:(NSData *)arg2;
- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

