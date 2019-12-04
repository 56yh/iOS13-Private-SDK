//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFSetupPairingController-Protocol.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSDate, NSHashTable, NSSet, NSString, NSTimer;

@interface HFSetupAutomaticDiscoveryPairingController : NSObject <HFSetupPairingController>
{
    HFSetupPairingContext *_context;
    HFSetupAccessoryResult *_setupResult;
    HMAccessorySetupCompletedInfo *_completedInfo;
    unsigned long long _phase;
    NSString *_statusTitle;
    NSString *_statusDescription;
    HMHome *_home;
    HFDiscoveredAccessory *_discoveredAccessoryToPair;
    NSSet *_pairedAccessories;
    NSHashTable *_pairingObservers;
    NAFuture *_pairingFuture;
    NSDate *_phaseStartDate;
    NSTimer *_accessoryNotFoundFatalTimeoutTimer;
    NSTimer *_accessoryNotFoundSoftTimeoutTimer;
}

+ (_Bool)supportsSetupPayloadRetry;
@property(retain, nonatomic) NSTimer *accessoryNotFoundSoftTimeoutTimer; // @synthesize accessoryNotFoundSoftTimeoutTimer=_accessoryNotFoundSoftTimeoutTimer;
@property(retain, nonatomic) NSTimer *accessoryNotFoundFatalTimeoutTimer; // @synthesize accessoryNotFoundFatalTimeoutTimer=_accessoryNotFoundFatalTimeoutTimer;
@property(retain, nonatomic) NSDate *phaseStartDate; // @synthesize phaseStartDate=_phaseStartDate;
@property(retain, nonatomic) NAFuture *pairingFuture; // @synthesize pairingFuture=_pairingFuture;
@property(retain, nonatomic) NSHashTable *pairingObservers; // @synthesize pairingObservers=_pairingObservers;
@property(retain, nonatomic) NSSet *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(retain, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // @synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(retain, nonatomic) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo; // @synthesize completedInfo=_completedInfo;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult; // @synthesize setupResult=_setupResult;
@property(readonly, nonatomic) HFSetupPairingContext *context; // @synthesize context=_context;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_updateStatusTextAndNotifyDelegate:(_Bool)arg1;
- (void)_finishPairingWithAccessories:(id)arg1 completedInfo:(id)arg2;
- (void)_failPairingWithError:(id)arg1;
- (id)_sendCancellationRequestToHomeKit;
- (id)cancel;
- (void)startWithHome:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removePairingObserver:(id)arg1;
- (void)addPairingObserver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

