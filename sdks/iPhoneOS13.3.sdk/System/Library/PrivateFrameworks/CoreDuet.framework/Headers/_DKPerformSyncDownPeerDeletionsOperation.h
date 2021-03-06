//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    BOOL _highPriority;
    _DKSyncHistory *_history;
    NSDate *_highWaterMark;
    NSUInteger _batchNumber;
    BOOL _foundDeletions;
}

+ (void)_updateEventStatsWithTotal:(NSUInteger)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
// - (void).cxx_destruct;
- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)handleFetchedDeletedEventIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 untilDate:(id)arg4;
- (void)performSyncDownPeerDeletionsWithPreviousUntilDate:(id)arg1;
- (void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletionsWithDidPrewarm:(BOOL)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletions;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

