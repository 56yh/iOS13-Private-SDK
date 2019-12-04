//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpointInjector, NSMutableArray;
@protocol BSServiceConnectionHost, SASSignalServerDelegate;

@interface SASSignalServer : NSObject
{
    _Bool _invalidated;
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    NSMutableArray *_waitForConnectBlocks;
    id <SASSignalServerDelegate> _weak_delegate;
}

+ (id)serviceQuality;
+ (id)interface;
+ (id)serverForConnection:(id)arg1;
@property(nonatomic) __weak id <SASSignalServerDelegate> weak_delegate; // @synthesize weak_delegate=_weak_delegate;
@property(retain, nonatomic) NSMutableArray *waitForConnectBlocks; // @synthesize waitForConnectBlocks=_waitForConnectBlocks;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector; // @synthesize workspaceServiceInjector=_workspaceServiceInjector;
- (oneway void)buttonLongPressFromButtonIdentifier:(id)arg1 context:(id)arg2;
- (oneway void)buttonTapFromButtonIdentifier:(id)arg1;
- (oneway void)buttonUpFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)buttonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)cancelPrewarmFromButtonIdentifier:(id)arg1;
- (oneway void)prewarmFromButtonIdentifier:(id)arg1 longPressInterval:(id)arg2;
- (oneway void)prewarmFromButtonIdentifier:(id)arg1;
- (oneway void)activationRequestFromTestingWithContext:(id)arg1;
- (oneway void)activationRequestFromSpotlightWithContext:(id)arg1;
- (oneway void)activationRequestFromSimpleActivation:(id)arg1;
- (oneway void)activationRequestFromBreadcrumb;
- (oneway void)activationRequestFromContinuityWithContext:(id)arg1;
- (void)_activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2;
- (oneway void)deactivationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2 options:(id)arg3;
- (oneway void)activationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2;
- (oneway void)unregisterNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;
- (oneway void)registerNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;
- (oneway void)unregisterButtonIdentifier:(id)arg1 withUUID:(id)arg2;
- (oneway void)registerButtonIdentifier:(id)arg1 withUUID:(id)arg2;
- (void)_unregisterSourceForIdentifier:(id)arg1;
- (void)_registerSourceForIdentifier:(id)arg1;
- (void)_setConnection:(id)arg1;

@end

