//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFComposeViewController.h>

@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController : WFComposeViewController
{
    id <WFTriggerComposeViewControllerDelegate> delegate;
    unsigned long long _mode;
}

@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WFTriggerComposeViewControllerDelegate> delegate; // @synthesize delegate;
- (void)didTapNext:(id)arg1;
- (id)doneBarButtonItem;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (id)emptyStateString;
- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
- (id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3;

@end

