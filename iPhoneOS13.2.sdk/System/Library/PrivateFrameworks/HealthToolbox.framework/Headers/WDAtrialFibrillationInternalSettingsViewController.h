//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, HKKeyValueDomain, NPSManager;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController
{
    _Bool _deletingSamples;
    HKHealthStore *_healthStore;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    HKKeyValueDomain *_keyValueDomain;
    NPSManager *_nanoPreferenceSyncManager;
}

@property(nonatomic) _Bool deletingSamples; // @synthesize deletingSamples=_deletingSamples;
@property(readonly, nonatomic) NPSManager *nanoPreferenceSyncManager; // @synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager;
@property(readonly, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_addNewSample;
- (void)_fakeNewAnalyzedSample;
- (void)_deleteAllSamples;
- (void)_resetOnboarding;
- (id)_buttonCellForTableView:(id)arg1 text:(id)arg2;
- (id)initWithHealthStore:(id)arg1;

@end

