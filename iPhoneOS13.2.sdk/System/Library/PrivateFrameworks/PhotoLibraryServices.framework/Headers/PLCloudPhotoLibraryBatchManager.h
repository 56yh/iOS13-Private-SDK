//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject
{
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    _Bool _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (id)description;
- (_Bool)isAboveMaximumResourceBudget;
- (long long)currentBatchCount;
- (id)drainBatches;
- (void)reset;
- (void)addRecord:(id)arg1 ignoreBatchSize:(_Bool)arg2;
- (void)addRecord:(id)arg1;
- (void)dealloc;
- (id)init;

@end

