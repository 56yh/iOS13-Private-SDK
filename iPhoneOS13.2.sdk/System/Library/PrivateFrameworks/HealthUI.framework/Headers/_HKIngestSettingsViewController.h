//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthUI/HKSwitchTableViewCellDelegate-Protocol.h>

@class HKDisplayTypeController, HKHealthStore, NSMutableArray, NSUUID;

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate>
{
    HKDisplayTypeController *_displayTypeController;
    NSMutableArray *_dataTypeNames;
    _Bool _deviceEnabled;
    _Bool _deviceFound;
    NSUUID *_deviceIdentifier;
    HKHealthStore *_healthStore;
}

@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)reloadData:(id)arg1;
- (void)fetchEnabledStatusForPeripheral;
- (void)viewDidLoad;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 useInsetStyling:(_Bool)arg3;

@end

