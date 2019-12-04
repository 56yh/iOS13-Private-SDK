//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

#import <Sharing/SFContinuityScannerClient-Protocol.h>

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager : SFXPCClient <SFContinuityScannerClient>
{
    NSMutableSet *_foundDevices;
    NSHashTable *_observers;
    unsigned long long _scanTypes;
}

+ (id)sharedManager;
@property unsigned long long scanTypes; // @synthesize scanTypes=_scanTypes;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableSet *foundDevices; // @synthesize foundDevices=_foundDevices;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)pairedDevicesChanged:(id)arg1;
- (void)lostDeviceWithDevice:(id)arg1;
- (void)foundDeviceWithDevice:(id)arg1;
- (void)receivedAdvertisement:(id)arg1;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionEstablished;
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)scanForTypes:(unsigned long long)arg1;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

