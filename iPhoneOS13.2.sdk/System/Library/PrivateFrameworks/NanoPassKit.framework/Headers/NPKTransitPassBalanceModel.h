//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, PKPaymentPass, PKTransitPassProperties;

@interface NPKTransitPassBalanceModel : NSObject
{
    PKPaymentPass *_pass;
    NSArray *_transitBalanceFields;
    PKTransitPassProperties *_transitPassProperties;
    NSSet *_serverBalances;
}

@property(copy, nonatomic) NSSet *serverBalances; // @synthesize serverBalances=_serverBalances;
@property(retain, nonatomic) PKTransitPassProperties *transitPassProperties; // @synthesize transitPassProperties=_transitPassProperties;
@property(readonly, nonatomic) NSArray *transitBalanceFields; // @synthesize transitBalanceFields=_transitBalanceFields;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_fieldWithBalance:(id)arg1;
- (id)_balanceByIDWithBalances:(id)arg1;
- (id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)_backOfThePassBalanceFieldsWithBalancesByID:(id)arg1;
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1;
- (void)_updateTransitBalanceFields;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPass:(id)arg1;

@end

