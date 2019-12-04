//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/WFWorkflowWizardNameCellDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowWizardNameSuggestionCellDelegate-Protocol.h>

@class NSString, WFIconComposeViewController, WFWorkflow, WFWorkflowWizardNameConfiguration;
@protocol WFWorkflowWizardNameViewControllerDelegate;

@interface WFWorkflowWizardNameViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameSuggestionCellDelegate>
{
    id <WFWorkflowWizardNameViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFWorkflowWizardNameConfiguration *_configuration;
    NSString *_updatedName;
    WFIconComposeViewController *_iconComposeViewController;
}

@property(nonatomic) __weak WFIconComposeViewController *iconComposeViewController; // @synthesize iconComposeViewController=_iconComposeViewController;
@property(retain, nonatomic) NSString *updatedName; // @synthesize updatedName=_updatedName;
@property(retain, nonatomic) WFWorkflowWizardNameConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFWorkflowWizardNameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dequeueNameSuggestionCellAtIndexPath:(id)arg1;
- (id)dequeueNameCellAtIndexPath:(id)arg1;
- (void)updateNameCell:(id)arg1;
- (id)nameSuggestionCell;
- (id)nameCell;
- (id)suggestedPhrases;
- (id)workflowName;
- (void)iconComposeViewControllerDidTapDone;
- (void)didTapDone;
- (void)updateDoneButtonForName:(id)arg1;
- (id)infoText;
- (void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)arg1;
- (void)workflowWizardNameCellDidFinishEditing:(id)arg1;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWorkflow:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

