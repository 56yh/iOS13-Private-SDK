//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/UITableViewDataSource-Protocol.h>
#import <HealthUI/UITableViewDelegate-Protocol.h>

@class HKDisplayTypeController, HKHealthStore, HKQuantitySample, HKQuantitySeriesSampleEditor, HKUnitPreferenceController, NSMutableArray, NSString;
@protocol HKQuantitySeriesDataProviderDelegate;

@interface HKQuantitySeriesDataProvider : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasSubsamplesToRemove;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKQuantitySeriesDataProviderDelegate> _delegate;
    HKHealthStore *_healthStore;
    HKQuantitySample *_parentSample;
    NSMutableArray *_quantities;
    HKQuantitySeriesSampleEditor *_editor;
}

@property(nonatomic) _Bool hasSubsamplesToRemove; // @synthesize hasSubsamplesToRemove=_hasSubsamplesToRemove;
@property(retain, nonatomic) HKQuantitySeriesSampleEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) NSMutableArray *quantities; // @synthesize quantities=_quantities;
@property(retain, nonatomic) HKQuantitySample *parentSample; // @synthesize parentSample=_parentSample;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) id <HKQuantitySeriesDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
- (void)commitDeletionsIfNeeded;
- (void)deleteQuantity:(id)arg1;
- (void)queryForSubsamples:(id /* block */)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)textForQuantity:(id)arg1;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

