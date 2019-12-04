//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HealthToolbox/HKMedicalIDViewControllerDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKMedicalIDViewController, HKNavigationController, NSString, SOSContactsManager, UIAlertController, UIScrollView, UIStackView, WDProfile, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface WDMedicalIDViewController : UITableViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder>
{
    _HKMedicalIDData *_medicalIDData;
    _Bool _medicalIDIsNew;
    UIScrollView *_introView;
    UIStackView *_introStackView;
    _Bool _loadingMedicalID;
    int _medicalIDChangedToken;
    HKNavigationController *_medicalIDEditor;
    _Bool _shouldShowConsolidationAlert;
    _Bool _shouldReloadMedicalIDData;
    HKMedicalIDViewController *_currentMedicalIDViewController;
    UIAlertController *_consolidationAlertController;
    SOSContactsManager *_sosContactsManager;
    WDProfile *_profile;
}

@property(nonatomic) _Bool shouldReloadMedicalIDData; // @synthesize shouldReloadMedicalIDData=_shouldReloadMedicalIDData;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) SOSContactsManager *sosContactsManager; // @synthesize sosContactsManager=_sosContactsManager;
@property(nonatomic) __weak UIAlertController *consolidationAlertController; // @synthesize consolidationAlertController=_consolidationAlertController;
@property(nonatomic) __weak HKMedicalIDViewController *currentMedicalIDViewController; // @synthesize currentMedicalIDViewController=_currentMedicalIDViewController;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (id)uniqueUserActivityType;
- (id)_createMedicalIDDataFromMeCardAndHealthKit;
- (void)medicalIDViewControllerDidAppear:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)_assertViewStateWhenViewDidAppear;
- (void)_dismissMedicalIDEditor;
- (void)_dismissMedicalIDView;
- (void)_pushAndSetCurrentMedicalIDViewController:(id)arg1;
- (void)_showMedicalIDView;
- (void)_showMedicalIDEditor;
- (id)medicalIDViewControllerInEditMode:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_organDonationSignupButtonTapped:(id)arg1;
- (void)_createMedicalIDTapped:(id)arg1;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)_showContactsConsolidationAlert;
- (void)_checkForEmergencyContactConsolidationNeeds;
- (void)_handleFetchedMedicalIDData:(id)arg1;
- (void)_loadMedicalIDDataIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)updateNavigationbar;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

