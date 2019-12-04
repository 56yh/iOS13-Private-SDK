//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase
{
    NSNumber *_payloadEnabled;
    NSNumber *_payloadRangeType;
    NSString *_payloadStart;
    NSString *_payloadEnd;
    NSNumber *_payloadSecondsPerDay;
}

+ (id)buildRequiredOnlyWithEnabled:(id)arg1 withRangeType:(id)arg2;
+ (id)buildWithEnabled:(id)arg1 withRangeType:(id)arg2 withStart:(id)arg3 withEnd:(id)arg4 withSecondsPerDay:(id)arg5;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadSecondsPerDay; // @synthesize payloadSecondsPerDay=_payloadSecondsPerDay;
@property(copy, nonatomic) NSString *payloadEnd; // @synthesize payloadEnd=_payloadEnd;
@property(copy, nonatomic) NSString *payloadStart; // @synthesize payloadStart=_payloadStart;
@property(copy, nonatomic) NSNumber *payloadRangeType; // @synthesize payloadRangeType=_payloadRangeType;
@property(copy, nonatomic) NSNumber *payloadEnabled; // @synthesize payloadEnabled=_payloadEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

