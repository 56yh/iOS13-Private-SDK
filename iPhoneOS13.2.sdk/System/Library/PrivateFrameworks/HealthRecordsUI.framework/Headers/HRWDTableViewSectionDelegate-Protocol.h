//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HRProfile, NSIndexPath, UITableView, UITableViewCell, UIViewController;

@protocol HRWDTableViewSectionDelegate 
@property(retain) UITableView *tableView;
@property(retain) HRProfile *profile;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)sectionAddedChildViewController:(UIViewController *)arg1;
- (void)pushViewController:(UIViewController *)arg1;
- (void)reloadTable;
- (void)reloadSection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (NSIndexPath *)indexPathForCell:(UITableViewCell *)arg1;
@end

