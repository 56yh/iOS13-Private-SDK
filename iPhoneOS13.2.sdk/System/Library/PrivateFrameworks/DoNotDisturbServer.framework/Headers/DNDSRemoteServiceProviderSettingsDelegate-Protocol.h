//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class DNDBehaviorSettings, DNDBypassSettings, DNDSRemoteServiceProvider, DNDScheduleSettings;

@protocol DNDSRemoteServiceProviderSettingsDelegate 
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setScheduleSettings:(DNDScheduleSettings *)arg2 withError:(id *)arg3;
- (DNDScheduleSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 scheduleSettingsWithError:(id *)arg2;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setPhoneCallBypassSettings:(DNDBypassSettings *)arg2 withError:(id *)arg3;
- (DNDBypassSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 phoneCallBypassSettingsWithError:(id *)arg2;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setBehaviorSettings:(DNDBehaviorSettings *)arg2 withError:(id *)arg3;
- (DNDBehaviorSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 behaviorSettingsWithError:(id *)arg2;
@end

