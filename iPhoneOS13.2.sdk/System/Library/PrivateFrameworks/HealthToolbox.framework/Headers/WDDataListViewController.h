//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKMonthViewControllerDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayType, NSDate, NSString, UIActivityIndicatorView, UIBarButtonItem, WDProfile, _UIContentUnavailableView;
@protocol WDDataListViewControllerDataProvider;

__attribute__((visibility("hidden")))
@interface WDDataListViewController : HKTableViewController <HKMonthViewControllerDelegate, WDUserActivityResponder>
{
    WDProfile *_profile;
    UIBarButtonItem *_deleteAllButtonItem;
    UIActivityIndicatorView *_spinner;
    long long _cellStyle;
    _UIContentUnavailableView *_noContentView;
    id <WDDataListViewControllerDataProvider> _dataProvider;
    HKDisplayType *_displayType;
    NSDate *_scrollToDate;
}

@property(retain, nonatomic) NSDate *scrollToDate; // @synthesize scrollToDate=_scrollToDate;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) id <WDDataListViewControllerDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (_Bool)_hasSpinnerRowRowAtIndexPath:(id)arg1;
- (_Bool)_shouldShowSpinnerRowInSection:(long long)arg1;
- (void)_updateRightBarButtonItems;
- (id)_rightBarButtonItems;
- (void)_deleteAllWithOptions:(unsigned long long)arg1;
- (void)_deleteAssociatedSamplesConfirmationPlural:(_Bool)arg1 deleteBlock:(id /* block */)arg2;
- (void)_deleteAllButtonTapped:(id)arg1;
- (void)_calendarDateSelectorButtonTapped:(id)arg1;
- (void)resetDataAndScrollToDate:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didTapBackButtonForMonthViewController:(id)arg1;
- (void)monthViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)_sampleAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_defaultCellForTableView:(id)arg1 cellStyle:(long long)arg2 indexPath:(id)arg3 text:(id)arg4 secondaryText:(id)arg5 icon:(id)arg6;
- (id)_quantityCellForTableView:(id)arg1 dataObjectSource:(id)arg2;
- (id)_sourceIconForObject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_dataProviderDidUpdate;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_dataProviderEnabled;
- (long long)_closestRowToDate:(id)arg1;
- (void)_reloadAllData;
- (void)_reloadAllDataScrolledToDate:(id)arg1;
- (id)_sampleTypesForDeleteAll;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) WDProfile *profile;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 dataProvider:(id)arg3 usingInsetStyling:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

