//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CLAccount, CLWebItem, NSArray, NSError, NSString;

@protocol CLAPIEngineDelegate 

@optional
- (void)storeReceiptRedemptionSucceeded:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)storeProductInformationRetrievalSucceeded:(NSArray *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)accountCreationSucceeded:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemListRetrievalSucceeded:(NSArray *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)accountInformationRetrievalSucceeded:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemInformationRetrievalSucceeded:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemRestorationDidSucceed:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemDeletionDidSucceed:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemUpdateDidSucceed:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)accountUpdateDidSucceed:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)linkBookmarkDidSucceedWithResultingItem:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)fileUploadDidSucceedWithResultingItem:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)requestDidFailWithError:(NSError *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)requestDidSucceedWithConnectionIdentifier:(NSString *)arg1 userInfo:(id)arg2;
@end

