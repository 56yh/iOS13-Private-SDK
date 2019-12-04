//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface PKVirtualCardCredentials : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_primaryAccountNumber;
    NSString *_cardSecurityCode;
    long long _cardType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *cardSecurityCode; // @synthesize cardSecurityCode=_cardSecurityCode;
@property(copy, nonatomic) NSString *primaryAccountNumber; // @synthesize primaryAccountNumber=_primaryAccountNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;

@end

