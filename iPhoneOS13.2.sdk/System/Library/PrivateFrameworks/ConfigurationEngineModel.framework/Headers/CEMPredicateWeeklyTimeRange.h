//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMPredicateWeeklyTimeRange : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;
    NSNumber *_payloadStartDay;
    NSString *_payloadStartTime;
    NSNumber *_payloadEndDay;
    NSString *_payloadEndTime;
    NSArray *_payloadNotificationTimes;
}

+ (id)buildRequiredOnlyWithStartDay:(id)arg1 withStartTime:(id)arg2 withEndDay:(id)arg3 withEndTime:(id)arg4;
+ (id)buildWithCalendarIdentifier:(id)arg1 withStartDay:(id)arg2 withStartTime:(id)arg3 withEndDay:(id)arg4 withEndTime:(id)arg5 withNotificationTimes:(id)arg6;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property(copy, nonatomic) NSString *payloadEndTime; // @synthesize payloadEndTime=_payloadEndTime;
@property(copy, nonatomic) NSNumber *payloadEndDay; // @synthesize payloadEndDay=_payloadEndDay;
@property(copy, nonatomic) NSString *payloadStartTime; // @synthesize payloadStartTime=_payloadStartTime;
@property(copy, nonatomic) NSNumber *payloadStartDay; // @synthesize payloadStartDay=_payloadStartDay;
@property(copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

