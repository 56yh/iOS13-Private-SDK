//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemStatusServer/STTelephonyCarrierBundleInfo.h>

@class NSArray, NSString;

@interface STMutableTelephonyCarrierBundleInfo : STTelephonyCarrierBundleInfo
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *homeCountryCode; // @dynamic homeCountryCode;
@property(copy, nonatomic) NSString *carrierName; // @dynamic carrierName;
@property(copy, nonatomic) NSArray *disabledApplicationIDs; // @dynamic disabledApplicationIDs;
@property(copy, nonatomic) NSString *customerServicePhoneNumber; // @dynamic customerServicePhoneNumber;
@property(nonatomic, getter=isReinitiatingActivationDisabled) _Bool reinitiatingActivationDisabled; // @dynamic reinitiatingActivationDisabled;
@property(nonatomic) _Bool LTEConnectionShows4G; // @dynamic LTEConnectionShows4G;

@end

