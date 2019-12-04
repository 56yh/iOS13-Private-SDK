//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSCompoundAssertionState-Protocol.h>
#import <BaseBoard/BSInvalidatable-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable>
{
    struct os_unfair_lock_s _syncLock;
    _Bool _syncLock_invalid;
    id /* block */ _syncLock_block;
    struct os_unfair_lock_s _dataLock;
    NSMutableSet *_dataLock_acquisitions;
    NSString *_dataLock_identifierPrefix;
}

+ (id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(id /* block */)arg2;
+ (id)assertionWithIdentifier:(id)arg1;
+ (id)new;
- (void)_acquisitionDidInvalidate:(id)arg1;
- (void)_syncLock_acquisitionDidInvalidate:(id)arg1;
- (id)_syncLock_acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)_dataLock_context;
- (id)_dataLock_copyState;
- (id)acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)acquireForReason:(id)arg1;
@property(readonly) NSSet *reasons;
@property(readonly) NSSet *context;
@property(readonly, getter=isActive) _Bool active;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

