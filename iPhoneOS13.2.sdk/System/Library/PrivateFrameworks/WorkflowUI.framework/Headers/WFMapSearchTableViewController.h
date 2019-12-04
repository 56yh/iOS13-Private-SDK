//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString;
@protocol WFMapSearchTableViewControllerDelegate;

@interface WFMapSearchTableViewController : UITableViewController <UISearchResultsUpdating>
{
    id <WFMapSearchTableViewControllerDelegate> _delegate;
    NSArray *_mapItems;
}

@property(retain, nonatomic) NSArray *mapItems; // @synthesize mapItems=_mapItems;
@property(nonatomic) __weak id <WFMapSearchTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

