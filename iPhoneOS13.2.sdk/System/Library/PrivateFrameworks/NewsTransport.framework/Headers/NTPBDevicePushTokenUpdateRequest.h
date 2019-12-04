//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSString, NTPBDeviceInfo;

@interface NTPBDevicePushTokenUpdateRequest : PBRequest <NSCopying>
{
    NTPBDeviceInfo *_deviceInfoToAdd;
    NTPBDeviceInfo *_deviceInfoToRemove;
    NSString *_notificationUserId;
    NSString *_userStorefrontId;
}

@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NTPBDeviceInfo *deviceInfoToRemove; // @synthesize deviceInfoToRemove=_deviceInfoToRemove;
@property(retain, nonatomic) NTPBDeviceInfo *deviceInfoToAdd; // @synthesize deviceInfoToAdd=_deviceInfoToAdd;
@property(retain, nonatomic) NSString *notificationUserId; // @synthesize notificationUserId=_notificationUserId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
@property(readonly, nonatomic) _Bool hasDeviceInfoToRemove;
@property(readonly, nonatomic) _Bool hasDeviceInfoToAdd;
@property(readonly, nonatomic) _Bool hasNotificationUserId;

@end

