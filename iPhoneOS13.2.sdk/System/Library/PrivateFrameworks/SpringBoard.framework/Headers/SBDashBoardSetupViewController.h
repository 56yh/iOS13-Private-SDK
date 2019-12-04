//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/CSEventHandling-Protocol.h>

@class CSCoverSheetViewController, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBSetupManager, SBSetupRegulatoryInfoViewController;

@interface SBDashBoardSetupViewController : CSCoverSheetViewControllerBase <CSEventHandling>
{
    SBActivationInfoViewController *_activationInfoViewController;
    SBSetupRegulatoryInfoViewController *_regulatoryInfoViewController;
    SBSetupManager *_setupManager;
    CSCoverSheetViewController *_coverSheetViewController;
    NSString *_configureKey;
    NSString *_wifiPrimaryLanguage;
    NSString *_telephonyPrimaryLanguage;
    NSTimer *_cycleStartTimer;
    NSDictionary *_localizedStrings;
    NSDictionary *_storeRestrictedStrings;
    NSArray *_stringsOrdering;
    NSMutableArray *_currentStringsOrdering;
    unsigned long long _currentStringsIndex;
    _Bool _shouldResetOrderingOnNextCycle;
    _Bool _isCyclingComponents;
    unsigned long long _componentsToCycle;
    _Bool _isStoreRestricted;
}

- (void)_cancelWifiScan;
- (void)_startWifiScan;
- (void)_regulatoryInfoButtonTapped:(id)arg1;
- (void)_infoButtonTapped:(id)arg1;
- (void)_updateWifiPrimaryLanguageFromDiscoveredCountryCodes:(id)arg1;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStoreRestrictedStringsDictionary;
- (id)_currentStringsDictionary;
- (void)_updateDisplayedStrings;
- (void)_resetDisplayedLocalizedStringsImmediately:(_Bool)arg1;
- (void)_incrementLocalizedStringsForNewCycle;
- (void)_stopCyclingComponents:(unsigned long long)arg1;
- (void)_animateComponentsForNewCycle;
- (void)_startCyclingComponents:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)setupView;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)handleEvent:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

