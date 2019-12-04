//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/WFActionDrawerSiriSuggestionsTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFDailyRoutineShortcutSetupQuestionChildViewController-Protocol.h>

@class NSString, WFActionDrawerResults, WFDailyRoutineShortcutSetupActionSelectionQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController <WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController>
{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupActionSelectionQuestion *_question;
    WFActionDrawerResults *_results;
}

@property(retain, nonatomic) WFActionDrawerResults *results; // @synthesize results=_results;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupActionSelectionQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadResults;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool parentShouldShowSkipButton;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

