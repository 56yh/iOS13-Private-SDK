//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/PKUserNotificationServerRemoteNotificationXPCServer-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSXPCListener, UNSRemoteNotificationServer;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServerRemoteNotificationConnectionListener : NSObject <NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNSRemoteNotificationServer *_remoteNotificationService;
}

// - (void).cxx_destruct;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)arg1;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (id)_currentConnection;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (BOOL)_allowsRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)dealloc;
- (id)initWithRemoteNotificationService:(id)arg1;

@end
