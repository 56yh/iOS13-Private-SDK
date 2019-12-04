//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDate;
@protocol WFTimeRangePickerViewControllerDelegate;

@interface WFTimeRangePickerViewController : UITableViewController
{
    id <WFTimeRangePickerViewControllerDelegate> _delegate;
    NSDate *_startTime;
    NSDate *_endTime;
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <WFTimeRangePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)endTimeChanged:(id)arg1;
- (void)startTimeChanged:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)init;

@end

