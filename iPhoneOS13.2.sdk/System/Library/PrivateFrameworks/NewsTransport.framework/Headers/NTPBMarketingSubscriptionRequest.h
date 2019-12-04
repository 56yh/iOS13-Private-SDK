//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSString, NTPBDeviceInfo;

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying>
{
    NTPBDeviceInfo *_deviceInfo;
    NSString *_dsid;
    int _subscriptionAction;
    int _subscriptionType;
    struct {
        unsigned int subscriptionAction:1;
        unsigned int subscriptionType:1;
    } _has;
}

@property(retain, nonatomic) NTPBDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceInfo;
@property(readonly, nonatomic) _Bool hasDsid;
@property(nonatomic) _Bool hasSubscriptionAction;
@property(nonatomic) int subscriptionAction; // @synthesize subscriptionAction=_subscriptionAction;
@property(nonatomic) _Bool hasSubscriptionType;
@property(nonatomic) int subscriptionType; // @synthesize subscriptionType=_subscriptionType;

@end

