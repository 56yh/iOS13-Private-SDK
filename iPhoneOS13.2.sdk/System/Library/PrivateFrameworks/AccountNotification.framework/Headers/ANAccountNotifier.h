//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountNotification/ANClientCallbackProtocol-Protocol.h>


@class NSString, NSXPCConnection, NSXPCListener;
@protocol ANAccountNotifierDelegate;

@interface ANAccountNotifier : NSObject <NSXPCListenerDelegate, ANClientCallbackProtocol>
{
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_bulletinResponseListener;
    NSString *_callbackMachService;
    id <ANAccountNotifierDelegate> _delegate;
}

@property(nonatomic) __weak id <ANAccountNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationWasCleared:(id)arg1;
- (void)notificationWasDismissed:(id)arg1;
- (void)notificationWasActivated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_stopNotificationCallbackListener;
- (void)_startNotificationCallbackListenerWithMachServiceName:(id)arg1;
- (void)_daemonConnectionWasInvalidated;
- (void)_daemonConnectionWasInterrupted;
- (void)_disconnectFromDaemon;
- (id)_createDaemonConnection;
- (id)_daemonConnection;
- (void)removeNotificationsWithEventIdentifier:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)addNotification:(id)arg1;
- (void)dealloc;
- (id)initWithCallbackMachService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

