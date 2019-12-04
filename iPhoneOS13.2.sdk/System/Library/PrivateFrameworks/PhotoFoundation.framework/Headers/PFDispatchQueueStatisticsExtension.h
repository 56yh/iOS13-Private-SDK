//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension
{
    // Error parsing type: AQ, name: _enqueuedCount
    // Error parsing type: AQ, name: _maxEnqueuedCount
    // Error parsing type: AQ, name: _executingCount
    // Error parsing type: AQ, name: _completedCount
    // Error parsing type: AQ, name: _executionTime
    // Error parsing type: AQ, name: _maxExecutionTime
    // Error parsing type: AQ, name: _maxWaitTime
    // Error parsing type: AQ, name: _totalWaitTime
    unsigned long long _maxEnqueuedCountTrigger;
    unsigned long long _maxExecutionTimeTrigger;
    unsigned long long _maxWaitTimeTrigger;
    unsigned long long _lastLogTime;
}

- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (id)newBlockInfo;
- (Class)blockInfoClass;
- (id)description;
- (void)blockCompletedAfterWait:(unsigned long long)arg1 executionTime:(unsigned long long)arg2 queue:(id)arg3;
- (void)blockEnqueued:(id)arg1;
-     // Error parsing type: B32@0:8^AQ16Q24, name: _updateMaximum:value:
- (void)maxWaitTimeIncreased:(id)arg1;
- (void)maxExecutionTimeIncreased:(id)arg1;
- (void)maxEnqueuedCountIncreased:(id)arg1;
- (_Bool)_shouldLog;
- (unsigned long long)totalWaitTime;
- (unsigned long long)maxWaitTime;
- (unsigned long long)maxExecutionTime;
- (unsigned long long)executionTime;
- (unsigned long long)completedCount;
- (unsigned long long)executingCount;
- (unsigned long long)maxEnqueuedCount;
- (unsigned long long)enqueuedCount;
- (void)installOnQueue:(id)arg1;
- (id)init;

@end

