//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCoordinatorEventNotificationDelegate-Protocol.h>

@protocol OS_dispatch_queue;

@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedInstance;
@property(readonly) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
// - (void).cxx_destruct;
- (void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
- (void)_syncCoordinatorDidCreateChangeSetOfType:(id)arg1;
- (void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(NSUInteger)arg2;
- (void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
- (void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(NSUInteger)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1;
- (void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3;
- (void)_updateSyncCounter:(id)arg1 streamNameCounts:(id)arg2;
- (id)typeValueWithStreamName:(id)arg1;
- (id)portraitStreamNames;
- (id)init;

@end

