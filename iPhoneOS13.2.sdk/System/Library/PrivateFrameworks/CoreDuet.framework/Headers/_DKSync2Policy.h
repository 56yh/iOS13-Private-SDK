//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface _DKSync2Policy : NSObject
{
    _Bool _syncDisabled;
    _Bool _pushTriggersSync;
    _Bool _requireCharging;
    NSString *_name;
    NSNumber *_version;
    unsigned long long _maxSyncPeriodInDays;
    unsigned long long _maxSyncDownIntervalInDays;
    unsigned long long _minSyncIntervalInSeconds;
    unsigned long long _minSyncWindowInSeconds;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSDictionary *_streamNamesToSync;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncBatchSizeInEvents;
    unsigned long long _maxBatchesPerSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _triggeredSyncDelayInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
    NSArray *_streamNamesToAlwaysSync;
}

+ (id)disabledFeaturesForSyncType:(id)arg1 transports:(long long)arg2;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)productVersion;
+ (id)policyFromDictionary:(id)arg1;
+ (void)setOkToDownloadPolicyUpdates:(_Bool)arg1;
+ (_Bool)cloudSyncDisabled;
+ (_Bool)rapportSyncDisabled;
+ (id)_policyForSyncTransportType:(long long)arg1;
+ (id)policyForSyncTransportType:(long long)arg1;
+ (id)policyCache;
+ (id)userDefaults;
@property(retain, nonatomic) NSArray *streamNamesToAlwaysSync; // @synthesize streamNamesToAlwaysSync=_streamNamesToAlwaysSync;
@property(nonatomic) unsigned long long policyDownloadIntervalInDays; // @synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays;
@property(nonatomic) unsigned long long triggeredSyncDelayInSeconds; // @synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds;
@property(nonatomic) unsigned long long syncTimeoutInSeconds; // @synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds;
@property(nonatomic) unsigned long long maxBatchesPerSync; // @synthesize maxBatchesPerSync=_maxBatchesPerSync;
@property(nonatomic) unsigned long long syncBatchSizeInEvents; // @synthesize syncBatchSizeInEvents=_syncBatchSizeInEvents;
@property(retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync; // @synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync;
@property(retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync; // @synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync;
@property(retain, nonatomic) NSDictionary *streamNamesToSync; // @synthesize streamNamesToSync=_streamNamesToSync;
@property(nonatomic) unsigned long long singleDeviceSyncIntervalInDays; // @synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays;
@property(nonatomic) _Bool requireCharging; // @synthesize requireCharging=_requireCharging;
@property(nonatomic) _Bool pushTriggersSync; // @synthesize pushTriggersSync=_pushTriggersSync;
@property(nonatomic) unsigned long long numChangesTriggeringSync; // @synthesize numChangesTriggeringSync=_numChangesTriggeringSync;
@property(nonatomic) unsigned long long maxSyncsPerDay; // @synthesize maxSyncsPerDay=_maxSyncsPerDay;
@property(nonatomic) unsigned long long minSyncsPerDay; // @synthesize minSyncsPerDay=_minSyncsPerDay;
@property(nonatomic) unsigned long long minSyncWindowInSeconds; // @synthesize minSyncWindowInSeconds=_minSyncWindowInSeconds;
@property(nonatomic) unsigned long long minSyncIntervalInSeconds; // @synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds;
@property(nonatomic) unsigned long long maxSyncDownIntervalInDays; // @synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays;
@property(nonatomic) unsigned long long maxSyncPeriodInDays; // @synthesize maxSyncPeriodInDays=_maxSyncPeriodInDays;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(nonatomic) _Bool syncDisabled; // @synthesize syncDisabled=_syncDisabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1 urgency:(unsigned long long)arg2;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1;
- (id)queryStartDateWithSyncType:(id)arg1 previousHighWaterMark:(id)arg2;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 previousHighWaterMark:(id)arg4;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3;
- (_Bool)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (_Bool)highPriorityForSyncDownWithSyncType:(id)arg1;
- (_Bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isCharging:(_Bool)arg4;
- (_Bool)canDeferSyncOperationWithSyncType:(id)arg1;
- (id)streamNamesToSyncWithSyncType:(id)arg1 transportType:(long long)arg2;
- (id)streamNamesToSyncWithDisabledFeatures:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

