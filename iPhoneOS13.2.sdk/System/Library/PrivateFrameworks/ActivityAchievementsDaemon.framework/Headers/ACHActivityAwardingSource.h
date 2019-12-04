//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHAchievementProgressProviding-Protocol.h>
#import <ActivityAchievementsDaemon/ACHDataStorePropertyProviding-Protocol.h>
#import <ActivityAchievementsDaemon/ACHEarnedInstanceAwarding-Protocol.h>
#import <ActivityAchievementsDaemon/HDCurrentActivitySummaryHelperObserver-Protocol.h>
#import <ActivityAchievementsDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class ACHAchievementProgressEngine, ACHActivityAwardingDataProvider, ACHActivityAwardingEnvironment, ACHActivitySummaryUtility, ACHActivityTriggerGenerator, ACHDataStore, ACHEarnedInstanceAwardingEngine, ACHTemplateStore, HDProfile, HKActivitySummary, NSArray, NSCalendar, NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface ACHActivityAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>
{
    _Bool _isObservingSummaryUpdates;
    NSCalendar *_gregorianUTCCalendar;
    HDProfile *_profile;
    ACHEarnedInstanceAwardingEngine *_engine;
    ACHAchievementProgressEngine *_progressProvider;
    ACHDataStore *_dataStore;
    ACHTemplateStore *_templateStore;
    ACHActivityAwardingDataProvider *_dataProvider;
    ACHActivityTriggerGenerator *_triggerGenerator;
    ACHActivityAwardingEnvironment *_environment;
    NSMutableArray *_currentTemplates;
    ACHActivityAwardingDataProvider *_progressDataProvider;
    ACHActivityAwardingEnvironment *_progressEnvironment;
    HKActivitySummary *_todayActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    ACHActivitySummaryUtility *_activitySummaryUtility;
    id /* block */ _incrementalUpdateCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSNumber *_overrideIsAppleWatch;
    NSString *_overrideWatchCountryCode;
    NSString *_watchCountryCode;
}

@property(nonatomic) _Bool isObservingSummaryUpdates; // @synthesize isObservingSummaryUpdates=_isObservingSummaryUpdates;
@property(retain, nonatomic) NSString *watchCountryCode; // @synthesize watchCountryCode=_watchCountryCode;
@property(retain, nonatomic) NSString *overrideWatchCountryCode; // @synthesize overrideWatchCountryCode=_overrideWatchCountryCode;
@property(retain, nonatomic) NSNumber *overrideIsAppleWatch; // @synthesize overrideIsAppleWatch=_overrideIsAppleWatch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(copy, nonatomic) id /* block */ incrementalUpdateCompletionHandler; // @synthesize incrementalUpdateCompletionHandler=_incrementalUpdateCompletionHandler;
@property(retain, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // @synthesize activitySummaryUtility=_activitySummaryUtility;
@property(retain, nonatomic) HKActivitySummary *yesterdayActivitySummary; // @synthesize yesterdayActivitySummary=_yesterdayActivitySummary;
@property(retain, nonatomic) HKActivitySummary *todayActivitySummary; // @synthesize todayActivitySummary=_todayActivitySummary;
@property(retain, nonatomic) ACHActivityAwardingEnvironment *progressEnvironment; // @synthesize progressEnvironment=_progressEnvironment;
@property(retain, nonatomic) ACHActivityAwardingDataProvider *progressDataProvider; // @synthesize progressDataProvider=_progressDataProvider;
@property(retain, nonatomic) NSMutableArray *currentTemplates; // @synthesize currentTemplates=_currentTemplates;
@property(retain, nonatomic) ACHActivityAwardingEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) ACHActivityTriggerGenerator *triggerGenerator; // @synthesize triggerGenerator=_triggerGenerator;
@property(retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(nonatomic) __weak ACHDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) __weak ACHAchievementProgressEngine *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(nonatomic) __weak ACHEarnedInstanceAwardingEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSCalendar *gregorianUTCCalendar; // @synthesize gregorianUTCCalendar=_gregorianUTCCalendar;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(id /* block */)arg2;
@property(retain, nonatomic) NSDictionary *dataStoreProperties;
@property(readonly, nonatomic) NSArray *dataStorePropertyKeys;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)_queue_observeSummaries;
- (id)_queue_evaluateTriggers:(unsigned long long)arg1 activitySummary:(id)arg2 templates:(id)arg3 shouldLog:(_Bool)arg4;
- (unsigned long long)_queue_triggersWithChangedSummaryFields:(unsigned long long)arg1 dataProvider:(id)arg2;
- (void)_runIncrementallyForChangedSummaryFields:(unsigned long long)arg1;
- (id)_queue_companionProgressEnvironment;
- (id)_queue_progressEnvironment;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (_Bool)providesProgressForTemplate:(id)arg1;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (void)_queue_updateDataProvider:(id)arg1 forDateInterval:(id)arg2 awardingBlock:(id /* block */)arg3;
@property(readonly, nonatomic) NSString *uniqueName;
- (unsigned char)_creatorDevice;
@property(readonly, nonatomic) _Bool isAppleWatch;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 templateStore:(id)arg3 awardingEngine:(id)arg4 progressProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

