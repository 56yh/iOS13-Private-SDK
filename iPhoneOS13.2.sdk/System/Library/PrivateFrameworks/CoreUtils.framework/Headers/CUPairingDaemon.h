//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CUHomeKitManager, NSData, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate>
{
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    unsigned long long _stateHandle;
    struct NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    _Bool _testMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedPairingDaemon;
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (void)_removeDups:(id)arg1;
- (id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2;
- (int)_deleteIdentityWithOptions:(unsigned long long)arg1;
- (int)deleteIdentityWithOptions:(unsigned long long)arg1;
- (id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;
@property(readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
- (void)_rpIdentityUpdate;
- (void)reset;
- (void)_connectionInvalidated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)detailedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

