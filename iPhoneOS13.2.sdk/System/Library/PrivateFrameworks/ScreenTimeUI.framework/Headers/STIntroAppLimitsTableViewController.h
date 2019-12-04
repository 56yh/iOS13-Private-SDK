//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSDateComponentsFormatter, STAllowance;

__attribute__((visibility("hidden")))
@interface STIntroAppLimitsTableViewController : UITableViewController
{
    _Bool _showingAllCategories;
    _Bool _showingDatePicker;
    STAllowance *_allowance;
    NSDateComponentsFormatter *_timeAmountFormatter;
}

@property(readonly) NSDateComponentsFormatter *timeAmountFormatter; // @synthesize timeAmountFormatter=_timeAmountFormatter;
@property _Bool showingDatePicker; // @synthesize showingDatePicker=_showingDatePicker;
@property _Bool showingAllCategories; // @synthesize showingAllCategories=_showingAllCategories;
@property(readonly) STAllowance *allowance; // @synthesize allowance=_allowance;
- (void)_datePickerChanged:(id)arg1;
- (id)_selectedCategories;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_stIntroAppLimitsTableViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

