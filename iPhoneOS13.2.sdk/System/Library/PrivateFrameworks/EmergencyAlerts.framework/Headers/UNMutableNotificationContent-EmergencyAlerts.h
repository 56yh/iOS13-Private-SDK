//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNMutableNotificationContent.h>

@interface UNMutableNotificationContent (EmergencyAlerts)
- (void)ea_setPropertiesForCellBroadcastMessage:(id)arg1 withActivePhoneCall:(_Bool)arg2;
- (id)ea_operatorPreferenceForSoundIsMutableInRelayMode;
- (id)ea_operatorPreferences;
- (id)ea_bundleForBundleIdentifier:(id)arg1;
- (id)ea_externalVibrationPatternFileURLForVibration:(id)arg1 inBundle:(id)arg2;
- (id)ea_externalToneFileURLForTone:(id)arg1 inBundle:(id)arg2;
- (id)ea_defaultTitle;
- (id)ea_timestampSubtitleForDate:(id)arg1 locale:(id)arg2;
- (id)ea_timestampSubtitleForNow;
@end

