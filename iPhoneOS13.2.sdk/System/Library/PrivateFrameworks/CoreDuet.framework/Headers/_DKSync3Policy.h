//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSArray, NSDictionary, NSNumber;

@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods>
{
    _Bool _syncDisabled;
    _Bool _isSingleDevice;
    _Bool _isOnPower;
    NSDictionary *_properties;
    NSNumber *_version;
    unsigned long long _triggeredSyncDelayInSeconds;
    long long _mask;
    NSArray *_sourceDevices;
    NSArray *_destinationDevices;
    NSArray *_transportPolicies;
    NSArray *_featurePolicies;
}

+ (void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (void)setOkToDownloadPolicyUpdates:(_Bool)arg1;
+ (_Bool)cloudSyncDisabled;
+ (_Bool)rapportSyncDisabled;
+ (id)userDefaults;
+ (id)productVersion;
+ (void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2;
+ (void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2;
+ (void)overrideDictionary:(id)arg1 withOverrides:(id)arg2;
+ (id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3;
+ (id)computedPolicyDictionary;
+ (id)deviceTypeWithHardwareModel:(id)arg1;
+ (id)localDeviceType;
+ (id)disabledPolicy;
+ (id)policyForTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(_Bool)arg5 isOnPower:(_Bool)arg6;
+ (void)clearPolicyCache;
+ (id)policyCache;
@property(retain, nonatomic) NSArray *featurePolicies; // @synthesize featurePolicies=_featurePolicies;
@property(retain, nonatomic) NSArray *transportPolicies; // @synthesize transportPolicies=_transportPolicies;
@property(nonatomic) _Bool isOnPower; // @synthesize isOnPower=_isOnPower;
@property(nonatomic) _Bool isSingleDevice; // @synthesize isSingleDevice=_isSingleDevice;
@property(retain, nonatomic) NSArray *destinationDevices; // @synthesize destinationDevices=_destinationDevices;
@property(retain, nonatomic) NSArray *sourceDevices; // @synthesize sourceDevices=_sourceDevices;
@property(nonatomic) long long mask; // @synthesize mask=_mask;
@property(nonatomic) _Bool syncDisabled; // @synthesize syncDisabled=_syncDisabled;
@property(nonatomic) unsigned long long triggeredSyncDelayInSeconds; // @synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;
- (double)timeIntervalBetweenSyncsWithUrgency:(unsigned long long)arg1;
- (double)timeIntervalBetweenSyncs;
- (id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4 previousHighWaterMark:(id)arg5;
- (id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4;
- (_Bool)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (_Bool)highPriorityForSyncDownWithSyncType:(id)arg1;
- (_Bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3;
- (_Bool)canDeferSyncOperationWithSyncType:(id)arg1;
- (id)streamNamesToSync;
- (id)enabledFeaturesForSyncType:(id)arg1;
- (unsigned long long)singleDevicePeriodicSyncCadenceInDaysMaximumValue;
- (unsigned long long)singleDevicePeriodicSyncCadenceInDaysMinimumValue;
- (unsigned long long)periodicSyncCadenceInMinutesMaximumValue;
- (unsigned long long)periodicSyncCadenceInMinutesMinimumValue;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMinimumValue;
- (unsigned long long)maximumSyncsPerDayMaximumValue;
- (unsigned long long)maximumSyncsPerDayMinimumValue;
- (_Bool)canPushTriggerSync;
- (_Bool)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(id /* block */)arg2;
- (unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(_Bool)arg3;
- (unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(_Bool)arg3;
- (id)initWithProperties:(id)arg1 transports:(long long)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(_Bool)arg5 isOnPower:(_Bool)arg6 transportPolicies:(id)arg7 featurePolicies:(id)arg8;
- (id)initWithTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(_Bool)arg5 isOnPower:(_Bool)arg6;
- (id)init;

@end

