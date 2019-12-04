//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKInteractiveChartViewObserver-Protocol.h>
#import <HealthToolbox/SKStoreProductViewControllerDelegate-Protocol.h>
#import <HealthToolbox/UITableViewDataSource-Protocol.h>
#import <HealthToolbox/UITableViewDelegate-Protocol.h>
#import <HealthToolbox/WDAppSwooshTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDSourceOrderObserver-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayCategory, HKDisplayType, HKInteractiveChartViewController, HKNavigationController, HKTimeScopeControl, NSDate, NSMutableArray, NSSet, NSString, UIFont, WDProfile, _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeDetailViewController : HKTableViewController <SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WDAppSwooshTableViewCellDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    _UINavigationControllerPalette *_palette;
    HKTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    _Bool _inLandscapeMode;
    WDProfile *_profile;
    NSMutableArray *_sections;
    UIFont *_bodyFont;
    HKInteractiveChartViewController *_interactiveChartViewController;
}

@property(readonly, nonatomic) HKInteractiveChartViewController *interactiveChartViewController; // @synthesize interactiveChartViewController=_interactiveChartViewController;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (void)_displayAppWithStoreID:(id)arg1;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (id)_showAllDataVC:(id)arg1;
- (id)_showAddDataVC:(id)arg1;
- (void)_changeTimeScope:(long long)arg1;
- (void)_timeFrameForChartsChanged:(id)arg1;
- (void)sourceOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_selectedUnitCellText;
- (_Bool)_shouldShowAppsRow;
- (_Bool)_shouldShowUnitsRow;
- (_Bool)_canSelectUnitsRow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_detachPaletteIfNecessary;
- (void)_attachPaletteIfNecessary;
- (void)calculateSections;
- (void)addSectionWithItems:(id)arg1;
- (void)addSectionWithItem:(id)arg1;
- (void)viewDidLoad;
- (void)_didBecomeActive:(id)arg1;
- (void)_showAppsRowIfNecessary:(id)arg1;
- (void)updateAppsSectionIfNecessary;
- (long long)findAppsSectionLocation;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_loadStoreData:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_configureCell:(id)arg1 forTableView:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupObservers;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

