//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, EKTimedEventStorePurger, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSTimer, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate>
{
    int _lastDBSequence;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    _Bool _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    _Bool _needsAlarmTablePopulation;
    _Bool _fencesNeedAdjusted;
    NSDateFormatter *_dateFormatter;
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    _Bool _includeRefiringAlarmsForInitialReschedule;
    _Bool _refirePastAlarmsForInitialUpdate;
    NSMutableDictionary *_monitoredRegions;
    _Bool _shouldUpdateWithForceForAlarmTable;
    _Bool _shouldUpdateWithForceForFences;
    long long _vehicleConnectionState;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

+ (void)logUnexpectedRemindersCall:(const char *)arg1;
+ (_Bool)remindersNotificationsEnabled;
+ (id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1;
+ (id)_publisherBulletinIDForReminder:(id)arg1;
+ (id)_publisherBulletinIDForTask:(void *)arg1;
+ (id)sharedInstance;
+ (id)requestedDarwinNotifications;
- (id)_insertSideAlarmObjectForVehicleTriggerAlarm:(id)arg1 forReminder:(id)arg2 withDelay:(double)arg3 eventStore:(id)arg4 context:(id)arg5;
- (void)_vehicleTriggerFired:(_Bool)arg1;
- (id)_debugStringForVehicleConnectionState:(long long)arg1;
- (void)_motionUpdatedWithConnectionState:(long long)arg1;
- (_Bool)_allowVehicleTrigger;
- (void)_setupLocationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)_proximityAlertTriggered:(id)arg1 entered:(_Bool)arg2;
- (_Bool)_allowConservativeEntry;
- (void)_updateRegionMonitoringForRegion:(id)arg1 withLocationOfInterest:(id)arg2 forLocation:(struct CLLocationCoordinate2D)arg3;
- (void)_adjustFences:(id)arg1;
- (_Bool)_shouldAdjustFencesWithStatus:(int)arg1;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)_removeAllFencesSynch;
- (void)_removeAllFences;
- (void)_locationDaemonDidLaunch;
- (void)_calendarNotificationSettingChanged;
- (void)_timeDidChangeSignificantly;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (_Bool)_shouldUseCoreRoutine;
- (_Bool)_shouldRefireAlarms;
- (_Bool)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2;
- (void)_removeStaleRefiringAlarmsWithEventStore:(id)arg1;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)arg1;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)arg1;
- (void)_timerFired;
- (void)_notifyAlarmsFired:(id)arg1;
- (void)_installTimerWithFireDate:(id)arg1;
- (void)_rescheduleTimer;
- (id)_dateFormatter;
- (void)_killTimer;
- (void)_populateFinished;
- (_Bool)_populateAlarmTable:(id)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3;
- (void)_simulatedOffsetChanged:(id)arg1;
- (void)_timeZoneChanged:(id)arg1;
- (_Bool)_haveAlarmsChanged:(id)arg1;
- (void)_databaseChanged;
- (void)_updateWithForceForAlarmTable:(_Bool)arg1 forFences:(_Bool)arg2;
- (id)_eventStore;
- (_Bool)_isDataProtected;
- (void)_protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleDarwinNotification:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

