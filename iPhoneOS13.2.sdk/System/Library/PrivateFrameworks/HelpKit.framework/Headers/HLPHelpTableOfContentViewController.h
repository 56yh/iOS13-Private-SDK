//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HelpKit/UISearchBarDelegate-Protocol.h>
#import <HelpKit/UISearchControllerDelegate-Protocol.h>
#import <HelpKit/UISearchResultsUpdating-Protocol.h>

@class HLPHelpBookController, HLPHelpLocale, HLPHelpSearchIndexController, HLPHelpSearchResultTableViewController, HLPHelpUsageController, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UISearchController, UIView;
@protocol HLPHelpTableOfContentViewControllerDelegate;

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate>
{
    UIView *_tableBackgroundView;
    UIView *_tableFooterSeparatorView;
    UILabel *_copyrightFooterLabel;
    UIButton *_footerViewOverlayButton;
    NSLayoutConstraint *_copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint *_copyrightFooterLabelTopConstraint;
    _Bool _fullBookView;
    id <HLPHelpTableOfContentViewControllerDelegate> _delegate;
    NSArray *_searchTerms;
    HLPHelpLocale *_locale;
    HLPHelpBookController *_helpBookController;
    HLPHelpUsageController *_usageController;
    NSMutableArray *_openSections;
    NSMutableArray *_displayHelpItems;
    UISearchController *_searchController;
    UIView *_tableFooterView;
    HLPHelpSearchIndexController *_helpSearchIndexController;
    HLPHelpSearchResultTableViewController *_searchResultTableViewController;
}

@property(retain, nonatomic) HLPHelpSearchResultTableViewController *searchResultTableViewController; // @synthesize searchResultTableViewController=_searchResultTableViewController;
@property(retain, nonatomic) HLPHelpSearchIndexController *helpSearchIndexController; // @synthesize helpSearchIndexController=_helpSearchIndexController;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSMutableArray *displayHelpItems; // @synthesize displayHelpItems=_displayHelpItems;
@property(retain, nonatomic) NSMutableArray *openSections; // @synthesize openSections=_openSections;
@property(retain, nonatomic) HLPHelpUsageController *usageController; // @synthesize usageController=_usageController;
@property(retain, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property(retain, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(nonatomic) __weak id <HLPHelpTableOfContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fullBookView; // @synthesize fullBookView=_fullBookView;
- (void)spotlightSearchDelay;
- (void)cancelSpotlightSearchDelay;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultViewSeparatorValue;
- (void)closeSectionItem:(id)arg1;
- (void)openHelpItem:(id)arg1 animated:(_Bool)arg2;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showTopicItem:(id)arg1 fromTableView:(id)arg2;
- (void)updateCellSelectionWithScollPosition:(long long)arg1 helpItem:(id)arg2 animated:(_Bool)arg3;
- (void)appendChildrenForSectionItem:(id)arg1;
- (void)loadError;
- (void)updateWithHelpBookController:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updateFooterViewLayout;
- (void)copyrightButtonTapped;
- (void)showHelpBookInfo;
- (void)scrollToHelpItem:(id)arg1 deselectImmediately:(_Bool)arg2 animated:(_Bool)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFooterViewBackgroundColor;
- (void)deselectCurrentRow;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

