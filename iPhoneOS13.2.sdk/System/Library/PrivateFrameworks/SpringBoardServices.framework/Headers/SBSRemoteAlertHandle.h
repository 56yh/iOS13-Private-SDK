//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;

@interface SBSRemoteAlertHandle : NSObject
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    _Bool _active;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    _Bool _valid;
    id <SBSRemoteAlertHandleClient> _handleClient;
    NSString *_handleID;
    NSHashTable *_observers;
}

+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (void)setDefaultHandleClient:(id)arg1;
+ (id)defaultHandleClient;
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2 configurationContext:(id)arg3;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1;
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
- (void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(_Bool)arg2;
- (void)_receivedInvalidationWithError:(id)arg1;
- (void)_didDeactivate;
- (void)_didActivate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)activateWithContext:(id)arg1;
- (void)activateWithOptions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_initWithHandleID:(id)arg1 handleClient:(id)arg2;

@end

