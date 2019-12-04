//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPromise;
@protocol OS_dispatch_queue;

@interface AMSTask : NSObject
{
    _Bool _cancelled;
    long long _runMode;
    NSObject<OS_dispatch_queue> *_performTaskQueue;
    AMSPromise *_promise;
    NSObject<OS_dispatch_queue> *_promiseAccessQueue;
}

+ (id)taskCacheAccessQueue;
+ (id)taskCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue; // @synthesize promiseAccessQueue=_promiseAccessQueue;
@property(retain, nonatomic) AMSPromise *promise; // @synthesize promise=_promise;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *performTaskQueue; // @synthesize performTaskQueue=_performTaskQueue;
@property(nonatomic) long long runMode; // @synthesize runMode=_runMode;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (id)performTaskWithBlock:(id /* block */)arg1;
- (id)performBinaryTaskWithBlock:(id /* block */)arg1;
- (_Bool)cancel;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (id)init;

@end

