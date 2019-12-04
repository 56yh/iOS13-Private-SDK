//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFUserAuthenticationModel-Protocol.h>

@class MCProfileConnection, NSDictionary, NSString, SBSecurityDefaults;
@protocol OS_dispatch_queue, SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject <SBFUserAuthenticationModel>
{
    MCProfileConnection *_profileConnection;
    SBSecurityDefaults *_securityDefaults;
    NSString *_journalPath;
    NSObject<OS_dispatch_queue> *_persistentStateQueue;
    _Bool _speculativePasscodeFailureChargeOutstanding;
    NSDictionary *_originalDefaultsForRollback;
    _Bool _pendingWipe;
    _Bool _permanentlyBlocked;
    double _unblockTime;
    id <SBFUserAuthenticationModelDelegate> _delegate;
}

+ (id)_journaledDefaultsAndTypes;
@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_loadLockControllerDefaultsJournalIfNecessary;
- (void)_loadLockControllerDefaults:(id)arg1;
- (void)_updateLockControllerDefaultsJournal;
- (id)_copyLockControllerDefaults;
- (id)updateLockControllerDefaultsWithBlock:(id /* block */)arg1 journaled:(_Bool)arg2;
- (void)test_reloadState;
- (void)_persistentStateQueue_clearBlockedState;
- (void)_persistentStateQueue_evaluatePendingWipe;
- (void)_persistentStateQueue_loadLockState;
- (void)_persistentStateQueue_unlockFailedWithError:(id)arg1;
- (void)_persistentStateQueue_unlockSucceeded;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (_Bool)_isDeviceWipePreferenceEnabled;
- (void)_evaluatePendingWipe;
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
- (void)clearBlockedState;
- (void)performPasswordTest:(id /* block */)arg1;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)synchronize;
- (id)_initWithJournalPath:(id)arg1 securityDefaults:(id)arg2 profileConnection:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

