//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/PocketAPIDelegate-Protocol.h>

@interface WFPocketGetAction : WFAction <PocketAPIDelegate>
{
}

- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

