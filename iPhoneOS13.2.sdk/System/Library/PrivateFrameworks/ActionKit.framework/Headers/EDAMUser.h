//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMAccountLimits, EDAMAccounting, EDAMBusinessUserInfo, EDAMPremiumInfo, EDAMPricingModel, EDAMSubscriptionInfo, EDAMUserAttributes, NSNumber, NSString;

@interface EDAMUser : FATObject
{
    NSNumber *_id;
    NSString *_username;
    NSString *_email;
    NSString *_name;
    NSString *_timezone;
    NSNumber *_privilege;
    NSNumber *_serviceLevel;
    NSNumber *_created;
    NSNumber *_updated;
    NSNumber *_deleted;
    NSNumber *_active;
    NSString *_shardId;
    EDAMUserAttributes *_attributes;
    EDAMAccounting *_accounting;
    EDAMPremiumInfo *_premiumInfo;
    EDAMBusinessUserInfo *_businessUserInfo;
    NSString *_photoUrl;
    NSNumber *_photoLastUpdated;
    EDAMAccountLimits *_accountLimits;
    EDAMSubscriptionInfo *_subscriptionInfo;
    EDAMPricingModel *_pricingModel;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMPricingModel *pricingModel; // @synthesize pricingModel=_pricingModel;
@property(retain, nonatomic) EDAMSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(retain, nonatomic) EDAMAccountLimits *accountLimits; // @synthesize accountLimits=_accountLimits;
@property(retain, nonatomic) NSNumber *photoLastUpdated; // @synthesize photoLastUpdated=_photoLastUpdated;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) EDAMBusinessUserInfo *businessUserInfo; // @synthesize businessUserInfo=_businessUserInfo;
@property(retain, nonatomic) EDAMPremiumInfo *premiumInfo; // @synthesize premiumInfo=_premiumInfo;
@property(retain, nonatomic) EDAMAccounting *accounting; // @synthesize accounting=_accounting;
@property(retain, nonatomic) EDAMUserAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSNumber *active; // @synthesize active=_active;
@property(retain, nonatomic) NSNumber *deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSNumber *created; // @synthesize created=_created;
@property(retain, nonatomic) NSNumber *serviceLevel; // @synthesize serviceLevel=_serviceLevel;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end

