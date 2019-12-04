//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class HRContentStatusView, HRProfile, NSArray;
@protocol HRRecordViewControllerFactory;

@interface HRAccountsTableViewController : UITableViewController
{
    HRProfile *_profile;
    id <HRRecordViewControllerFactory> _factory;
    NSArray *_accounts;
    HRContentStatusView *_loadingView;
}

@property(retain, nonatomic) HRContentStatusView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) id <HRRecordViewControllerFactory> factory; // @synthesize factory=_factory;
@property(readonly, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)_reloadAccounts;
- (void)viewDidLoad;
- (id)init;

@end

