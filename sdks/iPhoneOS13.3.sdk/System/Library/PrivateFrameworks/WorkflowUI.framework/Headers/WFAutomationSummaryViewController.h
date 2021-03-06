//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray, UITableView, WFConfiguredTriggerRecord, WFTrigger, WFWorkflow;
@protocol WFAutomationSummaryViewControllerDelegate;

@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <WFAutomationSummaryViewControllerDelegate> _delegate;
    WFConfiguredTriggerRecord *_triggerRecord;
    WFTrigger *_trigger;
    WFWorkflow *_workflow;
    NSUInteger _mode;
    NSArray *_actionIcons;
    NSArray *_sections;
    UITableView *_tableView;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *actionIcons; // @synthesize actionIcons=_actionIcons;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // @synthesize triggerRecord=_triggerRecord;
@property(nonatomic) __weak id <WFAutomationSummaryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didTapDone:(id)arg1;
- (void)promptSwitchChanged:(id)arg1;
- (void)enabledSwitchChanged:(id)arg1;
- (void)testAutomation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadActionDescriptionIcons;
- (void)loadView;
- (BOOL)isModalInPresentation;
- (void)updateUI;
- (id)initWithTrigger:(id)arg1 workflow:(id)arg2 mode:(NSUInteger)arg3;

@end

