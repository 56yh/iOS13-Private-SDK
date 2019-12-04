//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class NSString, WFHomeWorkflow, WFOutOfProcessWorkflowController;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate>
{
    WFOutOfProcessWorkflowController *_workflowController;
    WFHomeWorkflow *_workflow;
    id /* block */ _completionHandler;
}

@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) WFHomeWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) WFOutOfProcessWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(_Bool)arg3;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)cancel;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithWorkflow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

