//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ChatKit/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString;
@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating>
{
    NSArray *_allPlugins;
    id <CKBrowserAppManagerViewControllerDelegate> _delegate;
    NSArray *_searchResults;
}

@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <CKBrowserAppManagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *allPlugins; // @synthesize allPlugins=_allPlugins;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchEnded;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

