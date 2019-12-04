//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/UITableViewDataSource-Protocol.h>
#import <iTunesStoreUI/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSString, SUTableDataSource, SUTableView, UITableView;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>
{
    SUTableDataSource *_dataSource;
    long long _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    long long _placeholderRowCount;
    _Bool _preferUserInteractionWhileScrolling;
    SUTableView *_tableView;
    long long _tableViewStyle;
}

@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SUTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_resetTableView;
- (void)_reloadPlaceholderCells;
- (void)_deliverTapCount:(long long)arg1 forIndexPath:(id)arg2;
- (void)_doubleTapTimeout;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)reloadData;
- (void)reloadForChangedRowCount:(long long)arg1;
- (id)newTableView;
- (_Bool)indexPathIsPlaceholder:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (_Bool)deleteRowAtIndexPath:(id)arg1;
- (int)clippedCornersForIndexPath:(id)arg1;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

