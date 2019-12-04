//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDNetworkContext : NSObject
{
}

+ (long long)cellUploadCost:(id)arg1;
+ (long long)cellDownloadCost:(id)arg1;
+ (_Bool)cellInterfaceUp:(id)arg1;
+ (_Bool)networkingAvailable:(id)arg1;
+ (_Bool)inexpensiveNetworkingAvailable:(id)arg1;
+ (long long)cellQuality:(id)arg1;
+ (long long)wifiQuality:(id)arg1;
+ (long long)wiredQuality:(id)arg1;
+ (long long)qualityForPath:(id)arg1 inContext:(id)arg2;
+ (id)predictionKey;
+ (id)loiKey;
+ (id)uploadPowerCostKey;
+ (id)downloadPowerCostKey;
+ (id)interfaceUpKey;
+ (id)connectionQualityKey;
+ (id)keyPathForCellConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForWiredConnectionStatus;

@end

