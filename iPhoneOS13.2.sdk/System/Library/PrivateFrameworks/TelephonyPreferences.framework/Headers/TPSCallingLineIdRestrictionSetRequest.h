//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSCallingLineIdRestrictionRequest.h>

@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest
{
    long long _state;
}

+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionContext:(id)arg1 state:(long long)arg2;
- (id)initWithSubscriptionContext:(id)arg1;

@end

