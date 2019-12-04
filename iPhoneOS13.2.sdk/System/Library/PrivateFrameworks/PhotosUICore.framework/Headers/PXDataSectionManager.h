//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXDataSectionManagerChangeObserver-Protocol.h>

@class NSArray, NSString, PXArrayChangeDetails, PXDataSection;
@protocol NSObject><NSCopying;

@interface PXDataSectionManager : PXObservable <PXDataSectionManagerChangeObserver>
{
    PXDataSection *_dataSection;
    NSArray *_childDataSectionManagers;
    id <NSCopying> _outlineObject;
    PXArrayChangeDetails *_changeDetailsFromPreviousDataSection;
    PXDataSection *_previousDataSection;
    unsigned long long _previousDataSectionIdentifier;
}

@property(readonly, nonatomic) unsigned long long previousDataSectionIdentifier; // @synthesize previousDataSectionIdentifier=_previousDataSectionIdentifier;
@property(readonly, nonatomic) PXDataSection *previousDataSection; // @synthesize previousDataSection=_previousDataSection;
@property(readonly, nonatomic) PXArrayChangeDetails *changeDetailsFromPreviousDataSection; // @synthesize changeDetailsFromPreviousDataSection=_changeDetailsFromPreviousDataSection;
@property(retain, nonatomic) id <NSCopying> outlineObject; // @synthesize outlineObject=_outlineObject;
@property(copy, nonatomic) NSArray *childDataSectionManagers; // @synthesize childDataSectionManagers=_childDataSectionManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (void)childDataSectionManager:(id)arg1 didChangeDataSectionWithChangeDetails:(id)arg2;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
@property(readonly, nonatomic) PXDataSection *dataSection;
@property(readonly, nonatomic) PXDataSection *dataSectionIfCreated;
- (id)createDataSection;
- (void)updateDataSectionWithChangeDetails:(id)arg1;
- (void)_setDataSection:(id)arg1 changeDetails:(id)arg2;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (id)init;
- (id)initWithChildDataSectionManagers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

