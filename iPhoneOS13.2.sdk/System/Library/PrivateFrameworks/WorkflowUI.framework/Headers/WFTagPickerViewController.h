//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, UISearchController;
@protocol WFTagPickerViewControllerDelegate;

@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating>
{
    id <WFTagPickerViewControllerDelegate> _delegate;
    NSArray *_tags;
    NSMutableOrderedSet *_selectedTags;
    UISearchController *_searchController;
}

@property(readonly, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) NSMutableOrderedSet *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) __weak id <WFTagPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)currentResults;
- (void)dismiss;
- (void)cancel;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 tags:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

