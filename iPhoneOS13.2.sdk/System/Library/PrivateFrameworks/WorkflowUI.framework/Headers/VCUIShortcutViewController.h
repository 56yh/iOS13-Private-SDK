//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>
#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/UITextFieldDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowViewControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, OBTrayButton, OBWelcomeController, UIBarButtonItem, UINavigationController, UITableView, UIView, WFDatabase, WFWorkflow, WFWorkflowIcon, WFWorkflowViewController;
@protocol VCUIShortcutViewControllerDelegate;

@interface VCUIShortcutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UINavigationControllerDelegate, WFWorkflowViewControllerDelegate>
{
    _Bool _hasAppeared;
    id <VCUIShortcutViewControllerDelegate> _delegate;
    OBWelcomeController *_welcomeController;
    UINavigationController *_navigationController;
    UIBarButtonItem *_rightBarButtonItem;
    WFWorkflow *_workflow;
    NSString *_shortcutName;
    NSString *_shortcutDescription;
    WFWorkflowIcon *_shortcutIcon;
    unsigned long long _mode;
    NSLayoutConstraint *_tableViewHeightConstraint;
    UITableView *_tableView;
    NSLayoutConstraint *_customViewContainerHeightConstraint;
    UIView *_customViewContainer;
    UIView *_customView;
    OBTrayButton *_primaryButton;
    OBTrayButton *_secondaryButton;
    WFDatabase *_database;
    WFWorkflowViewController *_inlineWorkflowViewController;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) WFWorkflowViewController *inlineWorkflowViewController; // @synthesize inlineWorkflowViewController=_inlineWorkflowViewController;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) OBTrayButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) OBTrayButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(readonly, nonatomic) UIView *customViewContainer; // @synthesize customViewContainer=_customViewContainer;
@property(readonly, nonatomic) NSLayoutConstraint *customViewContainerHeightConstraint; // @synthesize customViewContainerHeightConstraint=_customViewContainerHeightConstraint;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) WFWorkflowIcon *shortcutIcon; // @synthesize shortcutIcon=_shortcutIcon;
@property(copy, nonatomic) NSString *shortcutDescription; // @synthesize shortcutDescription=_shortcutDescription;
@property(copy, nonatomic) NSString *shortcutName; // @synthesize shortcutName=_shortcutName;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) OBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property(nonatomic) __weak id <VCUIShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardWillChange:(id)arg1;
- (void)updatePrimaryButton;
- (void)didTapCancel;
- (void)didTapSecondaryButton;
- (void)didTapPrimaryButton;
- (id)nameCell;
- (id)applicationBundleIdentifier;
- (_Bool)shouldShowActionCell;
- (id)nameSectionTitle;
- (id)headerImage;
- (id)captionText;
- (id)secondaryButtonTintColor;
- (id)createdSecondaryButton;
- (id)secondaryButtonTitle;
- (id)primaryButtonTintColor;
- (id)primaryButtonTitle;
- (id)shortcutPreview;
- (id)shortcutPreviewImage;
- (id)subtitle;
- (id)title;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)workflowViewController:(id)arg1 didChangeContentSize:(struct CGSize)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setCustomView:(id)arg1 withHeight:(double)arg2;
- (void)updateCustomView;
- (unsigned long long)currentPreviewMode;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
