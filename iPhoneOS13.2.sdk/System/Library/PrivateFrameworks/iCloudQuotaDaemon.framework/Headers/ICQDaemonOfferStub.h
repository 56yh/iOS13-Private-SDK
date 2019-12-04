//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQDaemonOfferConditions, ICQDaemonOfferCriteria, NSDictionary, NSString;

@interface ICQDaemonOfferStub : NSObject
{
    NSDictionary *_serverDict;
    ICQDaemonOfferConditions *_conditionsWhenChosen;
}

@property(copy, nonatomic) ICQDaemonOfferConditions *conditionsWhenChosen; // @synthesize conditionsWhenChosen=_conditionsWhenChosen;
@property(readonly, nonatomic) ICQDaemonOfferCriteria *criteria;
@property(readonly, nonatomic, getter=isBuddyOffer) _Bool buddyOffer;
@property(readonly, nonatomic) NSString *offerId;
@property(readonly, nonatomic) NSDictionary *serverDictionary;
- (id)initWithServerDictionary:(id)arg1;

@end

