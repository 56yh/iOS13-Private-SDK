//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFClient : NSObject
{
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)arg1;
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)testContinuityKeyboardBegin:(_Bool)arg1;
- (void)showDevicePickerWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setupDevice:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (void)retriggerProximitySetup:(id /* block */)arg1;
- (void)retriggerProximityPairing:(id /* block */)arg1;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)repairDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)reenableProxCardType:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)preventExitForLocaleReason:(id)arg1;
- (void)openSetupURL:(id)arg1 completion:(id /* block */)arg2;
- (void)getPeopleSuggestions:(id)arg1 completion:(id /* block */)arg2;
- (void)getDeviceAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)findContact:(id)arg1 completion:(id /* block */)arg2;
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(id /* block */)arg3;
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(id /* block */)arg3;
- (void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)appleIDInfoWithCompletion:(id /* block */)arg1;
- (void)activityStateWithCompletion:(id /* block */)arg1;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

