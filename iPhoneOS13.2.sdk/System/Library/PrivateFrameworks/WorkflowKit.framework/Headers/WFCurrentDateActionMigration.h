//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFWorkflowMigration.h>

@class NSDateFormatter;

@interface WFCurrentDateActionMigration : WFWorkflowMigration
{
    NSDateFormatter *_dateFormatter;
}

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)migrateWorkflow;

@end

