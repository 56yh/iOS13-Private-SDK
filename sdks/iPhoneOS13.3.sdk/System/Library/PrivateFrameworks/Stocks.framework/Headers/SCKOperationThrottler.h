//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKOperationThrottler-Protocol.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface SCKOperationThrottler : NSObject <SCKOperationThrottler>
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
    BOOL _suspended;
}

// - (void).cxx_destruct;
@property BOOL suspended; // @synthesize suspended=_suspended;
- (void)tickle;
- (void)addCompletionForCurrentOperation:(id /* CDUnknownBlockType */)arg1;
- (void)tickleWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

