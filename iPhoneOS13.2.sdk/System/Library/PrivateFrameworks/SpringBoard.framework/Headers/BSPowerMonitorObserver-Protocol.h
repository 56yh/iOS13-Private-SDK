//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BSPowerMonitor;

@protocol BSPowerMonitorObserver 

@optional
- (void)powerMonitorSystemDidWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(BSPowerMonitor *)arg1;
- (_Bool)powerMonitorSystemSleepRequested:(BSPowerMonitor *)arg1;
@end

