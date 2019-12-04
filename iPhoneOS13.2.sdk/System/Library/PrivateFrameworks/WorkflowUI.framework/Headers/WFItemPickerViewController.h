//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/UISearchResultsUpdating-Protocol.h>
#import <WorkflowUI/WFAlertPresenter-Protocol.h>

@class NSArray, NSString, WFAlertButton;

@interface WFItemPickerViewController : UITableViewController <WFAlertPresenter, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    NSString *_prompt;
    NSArray *_allButtons;
    NSArray *_buttons;
    NSArray *_trailingNavigationButtons;
    WFAlertButton *_leadingNavigationButton;
}

+ (void)presentAlert:(id)arg1 withUserInterface:(id)arg2;
@property(retain, nonatomic) WFAlertButton *leadingNavigationButton; // @synthesize leadingNavigationButton=_leadingNavigationButton;
@property(copy, nonatomic) NSArray *trailingNavigationButtons; // @synthesize trailingNavigationButtons=_trailingNavigationButtons;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSArray *allButtons; // @synthesize allButtons=_allButtons;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3;
- (void)setButtons:(id)arg1 forAlert:(id)arg2;
- (void)dismissAlert:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)filteredButtons;
- (id)paletteForPrompt:(id)arg1;
- (void)reloadNavigationItems;
- (void)cancel;
- (_Bool)accessibilityPerformEscape;
- (void)trailingNavigationButtonTapped:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

