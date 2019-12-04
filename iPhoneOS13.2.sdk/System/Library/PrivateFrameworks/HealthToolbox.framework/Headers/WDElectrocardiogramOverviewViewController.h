//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKHeartRhythmAvailabilityObserver-Protocol.h>
#import <HealthToolbox/HKOnboardingSetupViewDelegate-Protocol.h>
#import <HealthToolbox/HRFeatureRegulatoryReenableFeatureActionDelegate-Protocol.h>
#import <HealthToolbox/HROnboardingManagerDelegate-Protocol.h>
#import <HealthToolbox/WDElectrocardiogramFilterDataProviderDelegate-Protocol.h>

@class HKDisplayType, HKHeartRhythmAvailability, HROnboardingManager, NSString, UITapGestureRecognizer, WDElectrocardiogramFilterDataProvider, WDElectrocardiogramListDataProvider, WDProfile;
@protocol HKDataMetadataSectionProtocol;

@interface WDElectrocardiogramOverviewViewController : HKTableViewController <HRFeatureRegulatoryReenableFeatureActionDelegate, HROnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate, HKOnboardingSetupViewDelegate, HKHeartRhythmAvailabilityObserver>
{
    _Bool _previousElectrocardiogramDisabledCacheValue;
    long long _placeholderCellCount;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HROnboardingManager *_onboardingManager;
    WDElectrocardiogramListDataProvider *_dataProvider;
    WDElectrocardiogramFilterDataProvider *_filterDataProvider;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    id <HKDataMetadataSectionProtocol> _educationSection;
    UITapGestureRecognizer *_tripleTapToSettingsRecognizer;
}

@property(nonatomic) _Bool previousElectrocardiogramDisabledCacheValue; // @synthesize previousElectrocardiogramDisabledCacheValue=_previousElectrocardiogramDisabledCacheValue;
@property(retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer; // @synthesize tripleTapToSettingsRecognizer=_tripleTapToSettingsRecognizer;
@property(retain, nonatomic) id <HKDataMetadataSectionProtocol> educationSection; // @synthesize educationSection=_educationSection;
@property(retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(retain, nonatomic) WDElectrocardiogramFilterDataProvider *filterDataProvider; // @synthesize filterDataProvider=_filterDataProvider;
@property(retain, nonatomic) WDElectrocardiogramListDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) HROnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(nonatomic) __weak WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(nonatomic) long long placeholderCellCount; // @synthesize placeholderCellCount=_placeholderCellCount;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_showDataSourcesAndAccessController;
- (id)_dataListViewControllerWithFilterType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didDismissOnboarding;
- (void)didCompleteOnboarding;
- (void)didTapOnAtrialFibrillationNotificationLearnMore;
- (void)didTapOnElectrocardiogram:(id)arg1;
- (void)didSelectReenableFeatureForProductName:(id)arg1;
- (void)beginOnboardingForOnboardingSetupView:(id)arg1;
- (void)electrocardiogramFilterDataProvider:(id)arg1 didUpdateCount:(long long)arg2 type:(long long)arg3;
- (void)isFavorited:(_Bool)arg1;
- (_Bool)_isPrimaryProfile;
- (long long)_filterTypeForDataSectionRow:(long long)arg1;
- (id)_cellWithDisclosureIndicatorAndText:(id)arg1 value:(id)arg2;
- (id)_cellForDescription;
- (_Bool)_isDisplayTypeFavorited;
- (id)_cellForRegulatoryPane;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForFavorites;
- (id)_showAllResultsCellForType:(long long)arg1;
- (id)_cellForSampleAtIndex:(long long)arg1 section:(long long)arg2;
- (id)_electrocardiogramSetupContainerView;
- (void)_reloadElectrocardiogramSetupTableHeaderView;
- (_Bool)_shouldShowElectrocardiogramSetupTableHeaderView;
- (id)_recordingDisabledHeaderView;
- (id)_sectionHeaderViewWithTitle:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShowRecordingDisabledHeader;
- (unsigned long long)availabilityState;
- (struct WDElectrocardiogramOverviewUserConfigurationRowInfo)userConfigurationRowInfo;
- (struct WDElectrocardiogramOverviewSectionInfo)sectionInfo;
- (void)_startOnboardingForFirstTime:(_Bool)arg1;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (void)heartRhythmAvailabilityDidUpdate;
- (void)_reloadTableViewAndScrollToTop;
- (void)showInternalSettings;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

