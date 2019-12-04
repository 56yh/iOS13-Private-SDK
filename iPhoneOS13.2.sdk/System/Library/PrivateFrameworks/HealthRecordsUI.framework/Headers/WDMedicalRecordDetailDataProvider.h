//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKConceptStore, HKHealthRecordsStore, HKMedicalRecord, NSMutableDictionary;
@protocol OS_dispatch_queue, WDMedicalRecordDetailDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDetailDataProvider : NSObject
{
    HKHealthRecordsStore *_healthRecordsStore;
    HKConceptStore *_conceptStore;
    HKMedicalRecord *_medicalRecord;
    id <WDMedicalRecordDetailDataProviderDelegate> _delegate;
    NSMutableDictionary *_displayItemsBySection;
    NSMutableDictionary *_sectionTitles;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) NSMutableDictionary *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableDictionary *displayItemsBySection; // @synthesize displayItemsBySection=_displayItemsBySection;
@property(nonatomic) __weak id <WDMedicalRecordDetailDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property(retain, nonatomic) HKConceptStore *conceptStore; // @synthesize conceptStore=_conceptStore;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (void)_updatePlacementForDisplayItems:(id)arg1;
- (long long)sectionFHIRSourceData;
- (void)_rqueue_recomputeDisplayItems;
- (id)displayItemForSection:(long long)arg1 row:(long long)arg2;
- (id)displayItemsForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 medicalRecord:(id)arg3 delegate:(id)arg4;

@end

