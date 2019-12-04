//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UIPickerViewDataSource-Protocol.h>
#import <WorkflowUI/UIPickerViewDelegate-Protocol.h>
#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView, UITableView;
@protocol WFTimeOffsetPickerViewControllerDelegate;

@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <WFTimeOffsetPickerViewControllerDelegate> _delegate;
    unsigned long long _event;
    UIPickerView *_currentPickerView;
    UITableView *_tableView;
    NSArray *_sections;
    NSArray *_pickerItems;
    unsigned long long _timeOffset;
}

@property(nonatomic) unsigned long long timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIPickerView *currentPickerView; // @synthesize currentPickerView=_currentPickerView;
@property(readonly, nonatomic) unsigned long long event; // @synthesize event=_event;
@property(nonatomic) __weak id <WFTimeOffsetPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)loadView;
- (id)initWithTimeTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

