//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSResponse.h>

@class CTCallForwardingValue;

@interface TPSCallForwardingResponse : TPSResponse
{
    CTCallForwardingValue *_value;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) CTCallForwardingValue *value; // @synthesize value=_value;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 value:(id)arg3;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;

@end

