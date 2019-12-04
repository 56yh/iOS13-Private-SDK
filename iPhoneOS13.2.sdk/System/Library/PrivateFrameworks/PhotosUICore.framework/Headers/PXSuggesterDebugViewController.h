//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PHSuggestion, UIActivityIndicatorView, UIBarButtonItem, UILabel;

@interface PXSuggesterDebugViewController : UITableViewController <PXOneUpPresentationDelegate>
{
    NSArray *_heuristicallySortedItems;
    NSArray *_sortedItems;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
    _Bool _fullLibraryIsEnabled;
    NSDate *_date;
    unsigned long long _currentSortCriteria;
    _Bool _showsInvalidItems;
    UIActivityIndicatorView *_spinnerView;
    UILabel *_noResultLabel;
    UIBarButtonItem *_fullLibraryButton;
    UIBarButtonItem *_dateButton;
    UIBarButtonItem *_showInvalidItemsButton;
    UIBarButtonItem *_sortButton;
}

- (id)_stringWithSortCriteria:(unsigned long long)arg1;
- (void)_sortItems;
- (void)didSelectSortButton:(id)arg1;
- (void)updateShowInvalidItemsButton;
- (void)didSelectShowInvalidItemsButton:(id)arg1;
- (void)didSelectDateButton:(id)arg1;
- (void)didSelectFullLibraryButton:(id)arg1;
- (void)_updateToolbarItems;
- (id)sortButton;
- (id)showInvalidItemsButton;
- (id)dateButton;
- (id)fullLibraryButton;
- (void)_fetchSuggestions;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)assetsDataSourceManagerForSuggestion:(id)arg1;
- (void)refresh;
- (void)didStopProcessing;
- (void)willStartProcessing;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithName:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

