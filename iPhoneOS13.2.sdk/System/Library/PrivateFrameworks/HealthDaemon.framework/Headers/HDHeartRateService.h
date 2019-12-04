//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@interface HDHeartRateService : HDHealthService
{
    _Bool _deliverData;
    long long _preferredSensorLocation;
}

+ (id)serviceUUID;
+ (long long)serviceType;
@property(nonatomic) long long preferredSensorLocation; // @synthesize preferredSensorLocation=_preferredSensorLocation;
- (void)setDeliverData:(_Bool)arg1;
- (_Bool)deliverData;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (_Bool)supportsOperation:(id)arg1;
- (void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBodyLocation:(id)arg1;
- (void)handleHeartRate:(id)arg1;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;

@end

