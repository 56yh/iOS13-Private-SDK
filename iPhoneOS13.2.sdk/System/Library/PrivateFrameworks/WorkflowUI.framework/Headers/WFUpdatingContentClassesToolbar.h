//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFContentClassesToolbar.h>

@class WFWorkflow;

@interface WFUpdatingContentClassesToolbar : WFContentClassesToolbar
{
    WFWorkflow *_workflow;
}

@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (_Bool)accessibilityElementsHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

