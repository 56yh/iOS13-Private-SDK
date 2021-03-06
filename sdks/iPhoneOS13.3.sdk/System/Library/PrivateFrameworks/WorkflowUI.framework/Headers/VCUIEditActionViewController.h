//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFComponentNavigationContext-Protocol.h>
#import <WorkflowUI/WFEditWorkflowViewControllerDelegate-Protocol.h>

@class WFEditWorkflowViewController, WFWorkflow;

@interface VCUIEditActionViewController : UIViewController <WFEditWorkflowViewControllerDelegate, WFComponentNavigationContext>
{
    WFWorkflow *_workflow;
    WFEditWorkflowViewController *_workflowViewController;
}

@property(retain, nonatomic) WFEditWorkflowViewController *workflowViewController; // @synthesize workflowViewController=_workflowViewController;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
// - (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *componentHostingViewController;
- (BOOL)workflowViewControllerCanRemoveActions:(id)arg1;
- (void)viewDidLoad;
- (id)initWithWorkflow:(id)arg1;

@end

