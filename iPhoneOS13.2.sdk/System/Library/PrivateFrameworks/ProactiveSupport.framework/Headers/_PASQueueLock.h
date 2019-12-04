//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (id)guardedDataAssertingLockContext;
- (id)unsafeGuardedData;
- (void)runAsyncWithLockAcquired:(id /* block */)arg1;
- (void)runWithLockAcquired:(id /* block */)arg1;
- (id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2;

@end

