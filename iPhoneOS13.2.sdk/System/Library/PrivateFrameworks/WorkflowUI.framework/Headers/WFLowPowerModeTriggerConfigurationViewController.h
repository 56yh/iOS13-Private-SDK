//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView;

@interface WFLowPowerModeTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateUI;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

