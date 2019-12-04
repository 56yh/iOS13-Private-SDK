//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFLocationPickerViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTimeRangePickerViewControllerDelegate-Protocol.h>

@class NSArray, NSDateFormatter, NSString, UITableView;

@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFLocationPickerViewControllerDelegate, WFTimeRangePickerViewControllerDelegate>
{
    _Bool _isLocationBasedAlertsEnabled;
    _Bool _isArrive;
    UITableView *_tableView;
    NSArray *_sections;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) _Bool isArrive; // @synthesize isArrive=_isArrive;
@property(nonatomic) _Bool isLocationBasedAlertsEnabled; // @synthesize isLocationBasedAlertsEnabled=_isLocationBasedAlertsEnabled;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)timeRangePickerViewControllerDidCancel:(id)arg1;
- (void)timeRangePickerViewController:(id)arg1 didPickStartTime:(id)arg2 endTime:(id)arg3;
- (void)locationPickerDidCancel:(id)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)presentNavigationControllerWithRootViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)textForSummaryFooterView;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)checkLocationAuthorization;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

