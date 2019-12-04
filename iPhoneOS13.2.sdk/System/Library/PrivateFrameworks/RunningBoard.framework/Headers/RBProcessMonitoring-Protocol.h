//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSObject, RBProcess, RBProcessState, RBProcessStateChangeSet, RBSProcessIdentity, RBSProcessMonitorConfiguration, RBSProcessPredicate;
@protocol OS_dispatch_queue, RBProcessMonitorObserving;

@protocol RBProcessMonitoring 
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorSerializationQueue;
- (void)unsuppressUpdatesForIdentity:(RBSProcessIdentity *)arg1;
- (void)suppressUpdatesForIdentity:(RBSProcessIdentity *)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (void)trackStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (void)didRemoveProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
- (void)didAddProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
- (NSArray *)statesMatchingConfiguration:(RBSProcessMonitorConfiguration *)arg1;
- (NSArray *)statesMatchingPredicate:(RBSProcessPredicate *)arg1;
- (void)removeObserver:(id <RBProcessMonitorObserving>)arg1;
- (void)addObserver:(id <RBProcessMonitorObserving>)arg1;
@end

