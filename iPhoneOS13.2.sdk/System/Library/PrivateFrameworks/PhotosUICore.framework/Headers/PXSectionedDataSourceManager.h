//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, PXSectionedChangeDetailsRepository, PXSectionedDataSource;

@interface PXSectionedDataSourceManager : PXObservable
{
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
    PXSectionedChangeDetailsRepository *_changeHistory;
}

@property(readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory; // @synthesize changeHistory=_changeHistory;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource;
- (id)createInitialDataSource;
- (id)queryObserversInterestingObjectReferences;
- (void)_setDataSource:(id)arg1;
- (void)didPublishChanges;
- (id)mutableChangeObject;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_waitingConditionDidTimeout:(id)arg1;
- (void)_reevaluateWaitingConditions;
- (void)waitForCondition:(id /* block */)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)init;

@end

