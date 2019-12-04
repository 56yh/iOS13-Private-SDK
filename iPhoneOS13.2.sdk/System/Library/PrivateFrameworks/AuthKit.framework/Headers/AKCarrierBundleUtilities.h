//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface AKCarrierBundleUtilities : NSObject
{
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_carrierUtilitiesQueue;
}

+ (id)sharedInstance;
- (id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id *)arg2;
- (id)init;

@end

