//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBProcessMonitoring-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSCountedSet, NSMutableSet, NSString, RBProcessIndex, RBProcessMap;
@protocol OS_dispatch_queue, RBStateCaptureManaging;

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing>
{
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBProcessMap *_suppressedState;
    RBProcessMap *_publishedState;
    NSCountedSet *_suppressedIdentities;
    struct os_unfair_lock_s _observersLock;
    NSMutableSet *_observers;
    id <RBStateCaptureManaging> _stateCaptureManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_clientStateForServerState:(id)arg1 process:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorSerializationQueue; // @synthesize monitorSerializationQueue=_queue;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_queue_publishState:(id)arg1 forIdentity:(id)arg2;
- (void)_queue_updateServerState:(id)arg1 forProcess:(id)arg2 force:(_Bool)arg3;
- (void)_queue_unsuppressUpdatesForIdentity:(id)arg1;
- (void)_queue_suppressUpdatesForIdentity:(id)arg1;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)unsuppressUpdatesForIdentity:(id)arg1;
- (void)suppressUpdatesForIdentity:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)trackStateForProcessIdentity:(id)arg1;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;
- (void)didUpdateProcessStates:(id)arg1;
- (void)didAddProcess:(id)arg1 withState:(id)arg2;
- (id)statesMatchingConfiguration:(id)arg1;
- (id)statesMatchingPredicate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithStateCaptureManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

