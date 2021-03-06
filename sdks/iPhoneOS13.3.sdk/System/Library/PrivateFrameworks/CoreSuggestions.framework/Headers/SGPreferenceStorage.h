//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGPreferenceStorage : NSObject
{
}

+ (void)resumeNotificationQueue;
+ (void)suspendNotificationQueue;
+ (id)defaultsForTests;
+ (void)setUseMLModelForSelfIdForTests:(BOOL)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)arg1;
+ (void)setSyncHistoryToCloudForTests:(BOOL)arg1;
+ (void)setAllowGeocodeForTests:(BOOL)arg1;
+ (void)setContactsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setRemindersDetectionEnabledForTests:(BOOL)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setShowCancelledEventsForTests:(BOOL)arg1;
+ (void)setHidePastEventsForTests:(BOOL)arg1;
+ (BOOL)hidePastEventsForTests;
+ (void)setShowOperatingSystemVersionInSnippets:(BOOL)arg1;
+ (BOOL)showOperatingSystemVersionInSnippets;
+ (void)setUseManateeSaltForHistory:(BOOL)arg1;
+ (BOOL)useManateeSaltForHistory;
+ (void)setCloudKitPersistedState:(id)arg1;
+ (id)cloudKitPersistedState;
+ (BOOL)shouldHarvestEvents;
+ (void)setFirstPartyMailAppIsInstalled:(BOOL)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg1;
+ (void)setParsecFlightCachingAPIBaseURL:(id)arg1;
+ (id)parsecFlightCachingAPIBaseURL;
+ (void)setDetectReminders:(BOOL)arg1;
+ (void)setDetectContacts:(BOOL)arg1;
+ (void)setDetectNLEvents:(BOOL)arg1;
+ (void)setDetectStructuredEvents:(BOOL)arg1;
+ (void)updateDetection:(BOOL)arg1 forKey:(id)arg2;
+ (BOOL)detectReminders;
+ (BOOL)detectStructuredEvents;
+ (BOOL)detectNLEvents;
+ (BOOL)detectContacts;
+ (void)setContactSharingNegativeSamplingRate:(float)arg1;
+ (float)contactSharingNegativeSamplingRate;
+ (void)setUseMLModelForContactSharing:(BOOL)arg1;
+ (BOOL)useMLModelForContactSharing;
+ (void)setUseMLModelForSelfId:(BOOL)arg1;
+ (BOOL)useMLModelForSelfId;
+ (void)setUseMLModelForContacts:(BOOL)arg1;
+ (BOOL)useMLModelForContacts;
+ (void)setAllowAgeBasedPruning:(BOOL)arg1;
+ (BOOL)allowAgeBasedPruning;
+ (void)setAllowGeocode:(BOOL)arg1;
+ (BOOL)allowGeocode;
+ (void)setSyncHistoryToCloud:(BOOL)arg1;
+ (BOOL)syncHistoryToCloud;
+ (void)setMessagesToProcessImmediately:(long long)arg1;
+ (long long)messagesToProcessImmediately;
+ (id)defaults;
+ (void)removeDeprecatedDefaults;
+ (int)registerBlockOnSuggestionsSettingsChange:(id /* CDUnknownBlockType */)arg1;
+ (BOOL)showSuggestionsCalendar;
+ (void)setHashedSessionsLogging:(int)arg1;
+ (long long)hashedSessionsLogging;
+ (void)setOnlyShowSignificantNLEvents:(BOOL)arg1;
+ (BOOL)onlyShowSignificantNLEvents;
+ (void)setOnlyShowSignificantPseudoContactsForTests:(BOOL)arg1;
+ (void)setOnlyShowSignificantPseudoContacts:(BOOL)arg1;
+ (BOOL)onlyShowSignificantPseudoContacts;
+ (void)updateIntSettingKey:(id)arg1 withValue:(int)arg2;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2;
+ (void)setAlwaysShowCancelledEvents:(BOOL)arg1;
+ (BOOL)alwaysShowCancelledEvents;
+ (void)setShowPastEvents:(BOOL)arg1;
+ (BOOL)showPastEvents;
+ (long long)suggestionsLogLevel;
+ (void)resetAllPreferences;
+ (void)setShowEventsFoundInMail:(BOOL)arg1;
+ (BOOL)showEventsFoundInMail;
+ (void)setShowContactsFoundInMail:(BOOL)arg1;
+ (BOOL)showContactsFoundInMail;

@end

