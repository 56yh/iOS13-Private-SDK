//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSFuture-Protocol.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface BSFuture : NSObject <BSFuture>
{
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

- (void)_flushCompletionBlocks;
- (void)_addCompletionBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (_Bool)_nts_isFinished;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (_Bool)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

