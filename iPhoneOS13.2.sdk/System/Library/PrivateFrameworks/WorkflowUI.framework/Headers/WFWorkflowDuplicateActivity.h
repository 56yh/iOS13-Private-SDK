//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class WFWorkflow;

@interface WFWorkflowDuplicateActivity : UIActivity
{
    id /* block */ _dismissToHomeHandler;
    WFWorkflow *_workflow;
}

+ (id)workflowFromActivityItems:(id)arg1;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(copy, nonatomic) id /* block */ dismissToHomeHandler; // @synthesize dismissToHomeHandler=_dismissToHomeHandler;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

