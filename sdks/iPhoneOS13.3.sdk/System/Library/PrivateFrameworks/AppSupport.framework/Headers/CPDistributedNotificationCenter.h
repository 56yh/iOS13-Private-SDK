//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;
@protocol OS_dispatch_queue;

@interface CPDistributedNotificationCenter : NSObject
{
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource _receiveNotificationSource;
    BOOL _isServer;
    struct __CFDictionary _sendPorts;
    NSUInteger _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)centerForServerPort:(unsigned int)arg1;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;
+ (struct __CFDictionary )_serverPortToNotificationCenterMap;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (id)centerNamed:(id)arg1;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(CDStruct_6ad76789 )arg2;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1;
- (void)runServer;
- (void)runServerOnCurrentThread;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)stopDeliveringNotifications;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop )arg1;
- (void)startDeliveringNotificationsToMainThread;
- (void)_notificationServerWasRestarted;
- (void)_checkOutAndRemoveSource;
- (void)_checkIn;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop )arg1;
- (id)name;
- (void)dealloc;
- (id)_initWithServerName:(id)arg1;

@end

