//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDRemoteServiceClientProtocol-Protocol.h>
#import <DoNotDisturb/DNDRemoteServiceServerProtocol-Protocol.h>

@class NSHashTable, NSString, NSXPCConnection;

@interface DNDRemoteServiceConnection : NSObject <DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol>
{
    NSXPCConnection *_connection;
    NSHashTable *_eventListeners;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void)_handleRemoteConnectionInvalidated;
- (void)_handleRemoteConnectionInterrupted;
- (void)deliverUpdatedScheduleSettings:(id)arg1;
- (void)deliverUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)deliverUpdatedBehaviorSettings:(id)arg1;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deliverStateUpdate:(id)arg1;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deliverActiveModeAssertionUpdate:(id)arg1 invalidation:(id)arg2 clientIdentifiers:(id)arg3;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 requestDetails:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

