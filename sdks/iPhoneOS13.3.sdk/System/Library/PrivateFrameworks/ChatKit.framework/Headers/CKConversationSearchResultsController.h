//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>


@class CKSpotlightQuery, CSSearchQuery, NSArray, NSString;
@protocol CKConversationResultsControllerDelegate;

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating>
{
    BOOL _gotTopConversationResults;
    id <CKConversationResultsControllerDelegate> _delegate;
    NSArray *_topConversationsResults;
    NSArray *_messageResults;
    CKSpotlightQuery *_currentQuery;
    CSSearchQuery *_topConversationsQuery;
    NSString *_selectedChatGUID;
}

@property(nonatomic) BOOL gotTopConversationResults; // @synthesize gotTopConversationResults=_gotTopConversationResults;
@property(retain, nonatomic) NSString *selectedChatGUID; // @synthesize selectedChatGUID=_selectedChatGUID;
@property(retain, nonatomic) CSSearchQuery *topConversationsQuery; // @synthesize topConversationsQuery=_topConversationsQuery;
@property(retain, nonatomic) CKSpotlightQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(retain, nonatomic) NSArray *messageResults; // @synthesize messageResults=_messageResults;
@property(retain, nonatomic) NSArray *topConversationsResults; // @synthesize topConversationsResults=_topConversationsResults;
@property(nonatomic) __weak id <CKConversationResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateTableViewRowHeights;
- (void)_selectChatGUID:(id)arg1;
- (Class)_conversationListCellClass;
@property(readonly, nonatomic) NSArray *searchResults;
- (void)searchEnded;
- (void)cancelCurrentQuery;
- (void)setCurrentSearchResultSelected:(BOOL)arg1;
- (void)_reloadDataForNewResults;
- (void)topConversationsQueryCompletedWithResults:(id)arg1;
- (id)_topConversationsQueryForText:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

