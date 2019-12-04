//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSServiceConnectionEndpointMonitorDelegate-Protocol.h>

@class BSAtomicSignal, BSServiceConnectionEndpoint, BSServiceConnectionEndpointMonitor, FBSSerialQueue, FBSWorkspaceFencingImpl, NSArray, NSMutableDictionary, NSString;
@protocol FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding>
{
    FBSSerialQueue *_callOutQueue;
    id <FBSWorkspaceDelegate> _delegate;
    BSAtomicSignal *_activateSignal;
    FBSWorkspaceFencingImpl *_fencingImpl;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_identifierToScenesSource;
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;
    BSServiceConnectionEndpoint *_defaultShellEndpoint;
}

+ (void)_registerBlockForWorkspaceCreation:(id /* block */)arg1;
+ (id)_sharedWorkspaceIfExists;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint; // @synthesize defaultShellEndpoint=_defaultShellEndpoint;
- (id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;
- (void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_activate;
- (void)_queue_unregisterSource:(id)arg1;
- (void)_unregisterSource:(id)arg1;
- (void)_queue_registerSource:(id)arg1;
- (void)_registerSource:(id)arg1;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)arg1;
- (_Bool)trackSystemAnimationFence:(id)arg1;
- (_Bool)isTrackingAnySystemAnimationFence;
- (id)requestSystemAnimationFence;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)sceneWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *scenes;
- (void)setDelegate:(id)arg1;
- (void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
@property(readonly, nonatomic) id <FBSWorkspaceDelegate> delegate;
- (void)dealloc;
- (id)_initWithOptions:(id)arg1;
- (id)_initWithSerialQueue:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

