//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WFAction, WFLibraryRunCoordinator, WFWorkflowControllerState, WFWorkflowReference;
@protocol WFUserInterface;

@protocol WFLibraryRunCoordinatorDelegate 
- (id <WFUserInterface>)runCoordinator:(WFLibraryRunCoordinator *)arg1 userInterfaceForWorkflow:(WFWorkflowReference *)arg2;

@optional
- (_Bool)runCoordinator:(WFLibraryRunCoordinator *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (void)runCoordinator:(WFLibraryRunCoordinator *)arg1 handOffWithState:(WFWorkflowControllerState *)arg2 completionHandler:(void (^)(_Bool))arg3;
@end

