//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PKPaymentTransactionGroup;

@interface PKBalanceSummary : NSObject
{
    _Bool _isLoading;
    unsigned long long _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    PKPaymentTransactionGroup *_orderedSpendingTransactions;
    PKPaymentTransactionGroup *_orderedInterestCharges;
    PKPaymentTransactionGroup *_orderedCredits;
    PKPaymentTransactionGroup *_rewards;
}

@property(retain, nonatomic) PKPaymentTransactionGroup *rewards; // @synthesize rewards=_rewards;
@property(retain, nonatomic) PKPaymentTransactionGroup *orderedCredits; // @synthesize orderedCredits=_orderedCredits;
@property(retain, nonatomic) PKPaymentTransactionGroup *orderedInterestCharges; // @synthesize orderedInterestCharges=_orderedInterestCharges;
@property(retain, nonatomic) PKPaymentTransactionGroup *orderedSpendingTransactions; // @synthesize orderedSpendingTransactions=_orderedSpendingTransactions;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long summaryType; // @synthesize summaryType=_summaryType;

@end

