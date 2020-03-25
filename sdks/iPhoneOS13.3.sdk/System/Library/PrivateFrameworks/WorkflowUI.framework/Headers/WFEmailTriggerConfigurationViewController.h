//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/WFEmailContactsTableViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTriggerTextConfigurationViewControllerDelegate-Protocol.h>

@class CSSearchQuery, NSArray, NSMutableSet, UITableView;

@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerTextConfigurationViewControllerDelegate, WFEmailContactsTableViewControllerDelegate>
{
    BOOL _showingAccounts;
    BOOL _showingRecipients;
    BOOL _showingAttachments;
    UITableView *_tableView;
    NSArray *_sections;
    NSMutableSet *_allRecipients;
    NSMutableSet *_allSenders;
    NSArray *_allAccounts;
    NSMutableSet *_allAccountsUsernames;
    CSSearchQuery *_query;
}

@property(nonatomic) BOOL showingAttachments; // @synthesize showingAttachments=_showingAttachments;
@property(nonatomic) BOOL showingRecipients; // @synthesize showingRecipients=_showingRecipients;
@property(nonatomic) BOOL showingAccounts; // @synthesize showingAccounts=_showingAccounts;
@property(retain, nonatomic) CSSearchQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSMutableSet *allAccountsUsernames; // @synthesize allAccountsUsernames=_allAccountsUsernames;
@property(retain, nonatomic) NSArray *allAccounts; // @synthesize allAccounts=_allAccounts;
@property(retain, nonatomic) NSMutableSet *allSenders; // @synthesize allSenders=_allSenders;
@property(retain, nonatomic) NSMutableSet *allRecipients; // @synthesize allRecipients=_allRecipients;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (id)accountFromUsername:(id)arg1;
- (void)didSelectContacts:(id)arg1 ofType:(NSUInteger)arg2;
- (void)triggerTextConfigurationViewControllerDidCancel:(id)arg1;
- (void)triggerTextConfigurationViewController:(id)arg1 didSelectText:(id)arg2;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (id)displayForSelectedContacts:(id)arg1;
- (BOOL)additionalSectionRowWithinHasAttachment:(long long)arg1;
- (long long)firstRowOfHasAttachment;
- (long long)firstRowOfRecipient;
- (BOOL)additionalSectionRowWithinRecipient:(long long)arg1;
- (BOOL)additionalSectionRowWithinAccounts:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)updateUI;
- (void)startQuery:(id)arg1;
- (void)setUpAccounts;
- (id)supportedAccountTypeIdentifiers;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(NSUInteger)arg3;

@end
