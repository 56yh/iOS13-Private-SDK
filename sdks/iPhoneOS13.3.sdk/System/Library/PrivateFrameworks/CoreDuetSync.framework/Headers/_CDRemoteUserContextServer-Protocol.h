//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSUUID, _CDContextualChangeRegistration;

@protocol _CDRemoteUserContextServer
- (void)requestActivateDevicesWithHandler:(void (^)(NSError *))arg1;
- (void)fetchPropertiesOfRemoteKeyPaths:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(NSUInteger)arg1 handler:(void (^)(NSError *))arg2;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(_CDContextualChangeRegistration *)arg1 deviceIDs:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(_CDContextualChangeRegistration *)arg1 deviceIDs:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (NSUUID *)sourceDeviceUUID;
@end
