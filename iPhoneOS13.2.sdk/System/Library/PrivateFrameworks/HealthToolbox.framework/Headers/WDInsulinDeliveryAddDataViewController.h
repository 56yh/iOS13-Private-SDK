//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>
#import <HealthToolbox/WDAddDataManualEntrySpinnerDataSource-Protocol.h>

@class NSString, WDAddDataManualEntryItem, WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntrySpinner *_deliveryReasonEntryItem;
}

@property(retain, nonatomic) WDAddDataManualEntrySpinner *deliveryReasonEntryItem; // @synthesize deliveryReasonEntryItem=_deliveryReasonEntryItem;
@property(retain, nonatomic) WDAddDataManualEntryItem *dateTimeEntryItem; // @synthesize dateTimeEntryItem=_dateTimeEntryItem;
- (void)validateDataWithCompletion:(id /* block */)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)generateHKObjects;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)defaultMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

