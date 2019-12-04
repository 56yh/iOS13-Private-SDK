//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <BridgePreferences/UITableViewDataSource-Protocol.h>
#import <BridgePreferences/UITableViewDelegate-Protocol.h>

@class BPSMultipleWatchMigrationPickerTableView, NSArray, NSMutableDictionary, NSString;

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_migratableDevices;
    unsigned long long _style;
    BPSMultipleWatchMigrationPickerTableView *_devicesTable;
    NSMutableDictionary *_selectedStates;
}

@property(retain, nonatomic) NSMutableDictionary *selectedStates; // @synthesize selectedStates=_selectedStates;
@property(retain, nonatomic) BPSMultipleWatchMigrationPickerTableView *devicesTable; // @synthesize devicesTable=_devicesTable;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *migratableDevices; // @synthesize migratableDevices=_migratableDevices;
- (id)selectedMigrationDevices;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)tableHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

