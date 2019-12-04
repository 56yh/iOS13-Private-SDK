//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PKVirtualCard, UIImage;

@interface WBSCreditCardData : NSObject
{
    NSString *_cardName;
    NSString *_cardholderName;
    NSString *_cardNumber;
    NSDate *_expirationDate;
    NSDate *_lastUsedDate;
    NSString *_cardSecurityCode;
    PKVirtualCard *_virtualCard;
}

@property(readonly, nonatomic) PKVirtualCard *virtualCard; // @synthesize virtualCard=_virtualCard;
@property(readonly, copy, nonatomic) NSString *cardSecurityCode; // @synthesize cardSecurityCode=_cardSecurityCode;
@property(retain, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
- (_Bool)hasSameCreditCardInformationAs:(id)arg1;
- (id)creditCardDataByUpdatingLastUsedDate:(id)arg1;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;
- (id)keychainRepresentation;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)description;
- (id)_expirationDateFromPKVirtualCard:(id)arg1;
@property(readonly, nonatomic) UIImage *virtualCardIcon;
- (id)initWithVirtualCardCredentials:(id)arg1 virtualCard:(id)arg2;
- (id)initWithVirtualCard:(id)arg1;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 securityCode:(id)arg5;

@end

