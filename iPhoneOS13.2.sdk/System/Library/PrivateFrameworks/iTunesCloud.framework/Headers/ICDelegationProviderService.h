//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegationProviderServiceSessionDelegate-Protocol.h>
#import <iTunesCloud/ICSDelegationProviderServiceXPC-Protocol.h>



@class ICRequestContext, ICUserIdentityStore, NSMapTable, NSMutableDictionary, NSMutableSet, NSNetServiceBrowser, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationProviderService : NSObject <ICSDelegationProviderServiceXPC, ICDelegationProviderServiceSessionDelegate, NSNetServiceBrowserDelegate, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_activeServiceSessions;
    NSMutableSet *_connections;
    NSMapTable *_connectionToAssertions;
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_source> *_assertionTimeoutSource;
    NSMutableSet *_discoveredServices;
    ICUserIdentityStore *_identityStore;
    _Bool _isNetServiceBrowserSearching;
    _Bool _isSystemService;
    NSXPCListener *_listener;
    NSNetServiceBrowser *_netServiceBrowser;
    NSObject<OS_dispatch_queue> *_netServiceBrowserQueue;
    NSOperationQueue *_identityStoreOperationQueue;
    NSMutableDictionary *_supportedDelegationAccountUUIDToUserIdentity;
    NSXPCConnection *_xpcConnection;
    ICRequestContext *_requestContext;
}

+ (id)systemServiceWithRequestContext:(id)arg1;
+ (id)sharedService;
@property(readonly, copy, nonatomic) ICRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (id)_xpcConnection;
- (void)_updateSupportedDelegationAccountUUIDs;
- (void)_updateDelegationForDiscoveredServices;
- (void)_updateBrowsingStatus;
- (void)_updateAssertionTimeouts;
- (void)_removeConnection:(id)arg1;
- (void)_unregisterNotificationsForDelegationNetService:(id)arg1;
- (void)_registerNotificationsForDelegationNetService:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)_userIdentityStoreDidChangeNotification:(id)arg1;
- (void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)arg1;
- (void)delegationProviderServiceRemoveAssertion:(id)arg1;
- (void)delegationProviderServiceAddAssertion:(id)arg1;
- (void)delegationProviderServiceSession:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)startSystemXPCService;
- (void)removeAssertion:(id)arg1;
- (void)addAssertion:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

