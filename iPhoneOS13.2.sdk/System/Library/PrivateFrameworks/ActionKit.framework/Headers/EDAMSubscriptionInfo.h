//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet, NSString;

@interface EDAMSubscriptionInfo : FATObject
{
    NSNumber *_currentTime;
    NSNumber *_currentlySubscribed;
    NSNumber *_subscriptionRecurring;
    NSNumber *_subscriptionExpirationDate;
    NSNumber *_subscriptionPending;
    NSNumber *_subscriptionCancellationPending;
    NSSet *_serviceLevelsEligibleForPurchase;
    NSString *_currentSku;
    NSNumber *_validUntil;
    NSNumber *_itunesReceiptRequested;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *itunesReceiptRequested; // @synthesize itunesReceiptRequested=_itunesReceiptRequested;
@property(retain, nonatomic) NSNumber *validUntil; // @synthesize validUntil=_validUntil;
@property(retain, nonatomic) NSString *currentSku; // @synthesize currentSku=_currentSku;
@property(retain, nonatomic) NSSet *serviceLevelsEligibleForPurchase; // @synthesize serviceLevelsEligibleForPurchase=_serviceLevelsEligibleForPurchase;
@property(retain, nonatomic) NSNumber *subscriptionCancellationPending; // @synthesize subscriptionCancellationPending=_subscriptionCancellationPending;
@property(retain, nonatomic) NSNumber *subscriptionPending; // @synthesize subscriptionPending=_subscriptionPending;
@property(retain, nonatomic) NSNumber *subscriptionExpirationDate; // @synthesize subscriptionExpirationDate=_subscriptionExpirationDate;
@property(retain, nonatomic) NSNumber *subscriptionRecurring; // @synthesize subscriptionRecurring=_subscriptionRecurring;
@property(retain, nonatomic) NSNumber *currentlySubscribed; // @synthesize currentlySubscribed=_currentlySubscribed;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;

@end

