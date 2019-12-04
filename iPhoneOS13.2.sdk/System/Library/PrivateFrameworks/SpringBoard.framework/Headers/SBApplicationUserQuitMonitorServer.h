//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SBApplicationUserQuitMonitorServer : NSObject <BSServiceConnectionListenerDelegate>
{
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
}

- (void)_queue_removeConnection:(id)arg1;
- (void)_queue_addConnection:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
