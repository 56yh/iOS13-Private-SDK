//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKThrottledActivity;
@protocol OS_dispatch_queue;

@interface _DKCloudUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _DKThrottledActivity *_activityThrottler;
    _Bool _supportsDeviceToDeviceEncryption;
    _Bool _isSingleDevice;
}

+ (_Bool)isSyncAvailableAndEnabledWithVerboseLogging:(_Bool)arg1;
+ (_Bool)isSyncAvailableAndEnabled;
+ (void)setUnitTesting:(_Bool)arg1;
+ (_Bool)isUnitTesting;
+ (void)setCloudKitEnabled:(_Bool)arg1;
+ (_Bool)isCloudKitEnabled;
+ (id)containerIdentifier;
+ (id)sharedInstance;
- (void)_performUpdateNumberOfSyncedDevicesWithAttempt:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_performUpdateNumberOfSyncedDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)_updateNumberOfSyncedDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)deleteRemoteStateWithReply:(id /* block */)arg1;
- (void)_updateAccountInfo:(id)arg1 error:(id)arg2;
- (void)_fetchAccountInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchCloudKitConfigurationAndStatus;
- (void)_accountDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool supportsDeviceToDeviceEncryption;
@property(readonly, nonatomic) _Bool isSiriCloudSyncEnabled;
@property(readonly, nonatomic) _Bool isSingleDevice;
- (void)setCloudSyncAvailable:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isCloudSyncAvailable;
- (id)containerKeyValueStore;
- (id)keyValueStore;
- (void)dealloc;
- (id)init;

@end

