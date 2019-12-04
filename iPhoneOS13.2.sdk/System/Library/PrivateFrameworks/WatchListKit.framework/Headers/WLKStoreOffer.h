//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, WLKStoreOfferPeriod;

@interface WLKStoreOffer : NSObject
{
    NSString *_buyParameters;
    NSString *_formattedPrice;
    NSNumber *_price;
    unsigned long long _offerType;
    unsigned long long _subscriptionType;
    NSString *_title;
    NSDictionary *_dictionary;
    WLKStoreOfferPeriod *_renewalPeriod;
    WLKStoreOfferPeriod *_freeTrialPeriod;
    WLKStoreOfferPeriod *_introOfferPeriod;
}

+ (id)offersWithMAPIDictionaries:(id)arg1;
+ (id)offersWithSubscriptionDictionaries:(id)arg1;
@property(readonly, nonatomic) WLKStoreOfferPeriod *introOfferPeriod; // @synthesize introOfferPeriod=_introOfferPeriod;
@property(readonly, nonatomic) WLKStoreOfferPeriod *freeTrialPeriod; // @synthesize freeTrialPeriod=_freeTrialPeriod;
@property(readonly, nonatomic) WLKStoreOfferPeriod *renewalPeriod; // @synthesize renewalPeriod=_renewalPeriod;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(readonly, nonatomic) unsigned long long offerType; // @synthesize offerType=_offerType;
@property(readonly, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property(readonly, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
- (_Bool)specialOfferEligible;
- (id)initWithMAPIDictionary:(id)arg1;
- (id)initWithSubscriptionDictionary:(id)arg1;
- (id)sui_buttonTitle;
- (id)sui_buttonSubtitleWithServiceName:(id)arg1;

@end

