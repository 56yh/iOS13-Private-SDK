//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFuture-Protocol.h>
#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFutureCompletionBlocks, CNFutureResult, CNTask, NSConditionLock, NSString;

@interface CNFutureTask : NSObject <CNFuture, CNPromise>
{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

- (id)recover:(id /* block */)arg1;
- (id)flatMap:(id /* block */)arg1;
- (void)_flushCompletionBlocks;
- (id)futureResult;
- (void)addFailureBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (id /* block */)completionHandlerAdapter;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)run;
- (void)didCancel;
- (_Bool)cancel;
- (_Bool)nts_isFinished;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (id)initWithTask:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

