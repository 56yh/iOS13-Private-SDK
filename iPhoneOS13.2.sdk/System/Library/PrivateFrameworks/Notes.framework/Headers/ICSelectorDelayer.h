//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ICSelectorDelayer : NSObject
{
    _Bool _waitToFireUntilRequestsStop;
    _Bool _callOnMainThread;
    id _target;
    SEL _selector;
    double _delay;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id /* block */ _fireBlock;
}

@property(copy, nonatomic) id /* block */ fireBlock; // @synthesize fireBlock=_fireBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(nonatomic) _Bool callOnMainThread; // @synthesize callOnMainThread=_callOnMainThread;
@property(nonatomic) _Bool waitToFireUntilRequestsStop; // @synthesize waitToFireUntilRequestsStop=_waitToFireUntilRequestsStop;
@property double delay; // @synthesize delay=_delay;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void)_cancelFireRequests;
- (void)cancelPreviousFireRequests;
@property(readonly, nonatomic) _Bool isScheduledToFire;
- (void)callTargetSelector;
- (void)fireImmediately;
- (void)requestFire;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(_Bool)arg4 callOnMainThread:(_Bool)arg5;

@end

