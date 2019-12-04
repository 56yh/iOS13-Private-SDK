//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSString;

@interface AMSMediaToken : NSObject <NSSecureCoding>
{
    _Bool _valid;
    NSDate *_expirationDate;
    double _lifetime;
    NSString *_tokenString;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, nonatomic) double lifetime; // @synthesize lifetime=_lifetime;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)willExpireWithin:(double)arg1;
- (double)percentageOfLifetimeRemaining;
- (_Bool)isExpired;
- (id)invalidCopy;
- (id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(_Bool)arg4;
- (id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3;

@end

