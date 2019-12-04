//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AMSObservable : NSObject
{
    unsigned long long _behavior;
    NSError *_failureError;
    NSString *_logKey;
    NSMutableArray *_observers;
    NSMutableArray *_queuedResults;
    NSObject<OS_dispatch_queue> *_sendMessageQueue;
    NSConditionLock *_stateLock;
}

@property(retain, nonatomic) NSConditionLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue; // @synthesize sendMessageQueue=_sendMessageQueue;
@property(retain, nonatomic) NSMutableArray *queuedResults; // @synthesize queuedResults=_queuedResults;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
- (_Bool)_isComplete;
- (void)unsubscribeAll;
- (void)unsubscribe:(id)arg1;
- (id)subscribeWithResultBlock:(id /* block */)arg1;
- (void)subscribe:(id)arg1;
- (_Bool)sendResult:(id)arg1;
- (_Bool)sendFailure:(id)arg1;
- (_Bool)sendCompletion;
- (_Bool)cancel;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2;
- (id)initWithObservers:(id)arg1;
- (id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2;
- (id)initWithObserver:(id)arg1;
- (id)init;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithNotification:(id)arg1 object:(id)arg2;

@end

