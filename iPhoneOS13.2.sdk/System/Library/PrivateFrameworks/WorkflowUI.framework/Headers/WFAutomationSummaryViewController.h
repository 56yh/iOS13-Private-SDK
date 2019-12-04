//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, WFConfiguredTriggerRecord, WFTrigger, WFWorkflow;
@protocol WFAutomationSummaryViewControllerDelegate;

@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <WFAutomationSummaryViewControllerDelegate> _delegate;
    WFConfiguredTriggerRecord *_triggerRecord;
    WFTrigger *_trigger;
    WFWorkflow *_workflow;
    unsigned long long _mode;
    NSArray *_actionIcons;
    NSArray *_sections;
    UITableView *_tableView;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *actionIcons; // @synthesize actionIcons=_actionIcons;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // @synthesize triggerRecord=_triggerRecord;
@property(nonatomic) __weak id <WFAutomationSummaryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
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
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadActionDescriptionIcons;
- (void)loadView;
- (_Bool)isModalInPresentation;
- (void)updateUI;
- (id)initWithTrigger:(id)arg1 workflow:(id)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

