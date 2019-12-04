//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class AMSBuyParams, NSDictionary, NSNumber, NSString;

@interface AMSPurchase : NSObject <NSCopying>
{
    _Bool _userInitiated;
    NSString *_logUUID;
    NSNumber *_accountId;
    NSDictionary *_additionalHeaders;
    AMSBuyParams *_buyParams;
    NSString *_callerBundleId;
    NSString *_clientId;
    NSNumber *_ownerAccountId;
    long long _purchaseType;
    NSString *_storefront;
    NSNumber *_uniqueIdentifier;
}

@property(readonly, nonatomic) NSNumber *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *storefront; // @synthesize storefront=_storefront;
@property(readonly) long long purchaseType; // @synthesize purchaseType=_purchaseType;
@property(copy, nonatomic) NSNumber *ownerAccountId; // @synthesize ownerAccountId=_ownerAccountId;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *callerBundleId; // @synthesize callerBundleId=_callerBundleId;
@property(readonly, nonatomic) AMSBuyParams *buyParams; // @synthesize buyParams=_buyParams;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(copy, nonatomic) NSNumber *accountId; // @synthesize accountId=_accountId;
- (id)_generateIdentifier;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
- (id)initWithPurchaseType:(long long)arg1 buyParams:(id)arg2;

@end

