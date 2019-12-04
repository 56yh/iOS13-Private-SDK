//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HKHealthService, NSArray, NSDictionary, NSString, NSUUID;
@protocol HKHealthServicesClientInterface;

@protocol HDHealthServicesServerInterface 
- (void)remote_setEnabledStatus:(_Bool)arg1 forPeripheral:(NSUUID *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_getEnabledStatusForPeripheral:(NSUUID *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_removePeripheral:(NSUUID *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addPeripheral:(NSUUID *)arg1 name:(NSString *)arg2 forServices:(NSArray *)arg3 withCompletion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_performHealthServiceOperation:(NSString *)arg1 onSession:(unsigned long long)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(NSString *, _Bool, NSError *))arg4;
- (void)remote_getHealthServiceProperty:(NSString *)arg1 forSession:(unsigned long long)arg2 withHandler:(void (^)(id, NSError *))arg3;
- (void)remote_getSupportedPropertyNamesWithHandler:(void (^)(id, NSError *))arg1;
- (void)remote_removePairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addPairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_endHealthServiceSession:(unsigned long long)arg1;
- (void)remote_startHealthServiceSession:(HKHealthService *)arg1 client:(id <HKHealthServicesClientInterface>)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)remote_startHealthServiceDiscovery:(long long)arg1 client:(id <HKHealthServicesClientInterface>)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_beginBluetoothStatusUpdates:(void (^)(long long, NSError *))arg1 client:(id <HKHealthServicesClientInterface>)arg2;
@end

