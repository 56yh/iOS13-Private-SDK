//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController
{
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    NSArray *_appActivitySpecifiers;
    NSArray *_iCloudSpecifiers;
    PSSpecifier *_spinnerSpecifier;
    _Bool _shouldShareHealthRecordsData;
    NSArray *_healthDataSpecifiers;
    NSArray *_healthRecordsDataSpecifiers;
    NSArray *_wheelchairDataSpecifiers;
    NSArray *_improveSiriSpecifiers;
}

+ (_Bool)isProblemReportingEnabled;
@property(retain, nonatomic) NSArray *improveSiriSpecifiers; // @synthesize improveSiriSpecifiers=_improveSiriSpecifiers;
@property(nonatomic) _Bool shouldShareHealthRecordsData; // @synthesize shouldShareHealthRecordsData=_shouldShareHealthRecordsData;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (id)shouldShareAppActivityWithAppDevelopers;
- (id)specifiers;
- (void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareWheelchairDataForSpecifier:(id)arg1;
@property(readonly) NSArray *wheelchairDataSpecifiers; // @synthesize wheelchairDataSpecifiers=_wheelchairDataSpecifiers;
- (void)setShouldShareHealthRecordsData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareHealthRecordsDataForSpecifier:(id)arg1;
- (void)_handleUpdateForSpecifierID:(id)arg1 value:(id)arg2 error:(id)arg3;
- (void)updateHealthRecordsPreferenceForSpecifierID:(id)arg1;
@property(readonly) NSArray *healthRecordsDataSpecifiers; // @synthesize healthRecordsDataSpecifiers=_healthRecordsDataSpecifiers;
- (void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareHealthDataForSpecifier:(id)arg1;
@property(readonly) NSArray *healthDataSpecifiers; // @synthesize healthDataSpecifiers=_healthDataSpecifiers;
- (void)setAutomatedFeedbackEnabled:(id)arg1 specifier:(id)arg2;
- (id)automatedFeedbackEnabled:(id)arg1;
- (void)automatedFeedbackLinkTapped;
- (id)automatedFeedbackSpecifiers;
- (id)iCloudSpecifiers;
- (_Bool)shouldShowiCloudSpecifiersForAccount:(id)arg1;
- (void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2;
- (id)shouldShareiCloudAnalytics:(id)arg1;
@property(readonly) NSArray *appActivitySpecifiers;
@property(readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property(readonly) PSSpecifier *spinnerSpecifier;
- (void)snapshot:(id)arg1;
- (void)setProblemReportingEnabled:(_Bool)arg1;
- (void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)problemReportingEnabled:(id)arg1;
- (void)updateiCloudAnalyticsForSpecifierID:(id)arg1;
- (void)setBoolValue:(_Bool)arg1 forIdMSConfigKey:(id)arg2 completion:(id /* block */)arg3;
- (void)showAboutWheelchairDataSheet;
- (void)showAboutHealthRecordsDataSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)showAboutImproveSiriAnalyticsSheet;
- (void)showAboutAnalyticsSheet;
- (void)dismissAboutSheet:(id)arg1;
- (void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2;
- (void)launchDiagnosticsSession:(id)arg1;
- (void)checkDiagnosticsSessionAvailability;

@end

