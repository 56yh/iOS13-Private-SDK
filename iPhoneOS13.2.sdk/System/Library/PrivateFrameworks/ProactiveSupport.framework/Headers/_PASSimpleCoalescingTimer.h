//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject
{
    _PASCoalescingTimer *_timer;
}

- (void)cancelPendingOperations;
- (void)runAfterStrictDelaySeconds:(double)arg1;
- (void)runImmediately;
- (void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2;
- (id)initWithQueue:(id)arg1 operation:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(id /* block */)arg3;

@end

