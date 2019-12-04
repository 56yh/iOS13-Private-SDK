//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSArray, NSString, PKAccount, PKPaymentPass, PKSpendingSummary, PKSpendingSummaryFetcher;

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem>
{
    PKAccount *_account;
    PKPaymentPass *_pass;
    unsigned long long _type;
    NSArray *_weeks;
    NSArray *_months;
    PKSpendingSummary *_summary;
    PKSpendingSummaryFetcher *_summaryFetcher;
    NSArray *_mostRecentTransactions;
    NSArray *_upcomingScheduledPayments;
}

@property(retain, nonatomic) NSArray *upcomingScheduledPayments; // @synthesize upcomingScheduledPayments=_upcomingScheduledPayments;
@property(retain, nonatomic) NSArray *mostRecentTransactions; // @synthesize mostRecentTransactions=_mostRecentTransactions;
@property(retain, nonatomic) PKSpendingSummaryFetcher *summaryFetcher; // @synthesize summaryFetcher=_summaryFetcher;
@property(retain, nonatomic) PKSpendingSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSArray *months; // @synthesize months=_months;
@property(retain, nonatomic) NSArray *weeks; // @synthesize weeks=_weeks;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (id)initWithAccount:(id)arg1 pass:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

