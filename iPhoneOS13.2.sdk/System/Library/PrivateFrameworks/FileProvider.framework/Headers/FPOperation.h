//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <FileProvider/FPOperationClient-Protocol.h>

@class NSObject;
@protocol FPCancellable, OS_dispatch_queue;

@interface FPOperation : NSOperation <FPOperationClient>
{
    id <FPCancellable> _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    id _executionTransaction;
    _Bool _finished;
    id /* block */ _finishedBlock;
}

@property(copy) id /* block */ finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(retain, nonatomic) id <FPCancellable> remoteOperation; // @synthesize remoteOperation=_remoteOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_queue;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invalidate;
- (void)setCancellationHandler:(id)arg1;
- (void)_setRemoteCancellationHandler:(id)arg1;
- (void)resetRemoteOperation;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (_Bool)finishIfCancelled;
- (_Bool)_finishIfCancelled;
- (void)cancel;
- (void)start;
- (void)_setExecuting:(_Bool)arg1;
@property(readonly, getter=isExecuting) _Bool executing;
- (void)_setFinished:(_Bool)arg1;
- (void)dealloc;
- (id)description;
- (id)proxifiedDescription;
- (id)operationDescription;
- (id)init;

@end

