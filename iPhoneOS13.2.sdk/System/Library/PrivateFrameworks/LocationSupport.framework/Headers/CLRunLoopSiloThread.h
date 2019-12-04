//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject
{
    struct _opaque_pthread_t *_threadId;
    NSRunLoop *_underlyingRunLoop;
    NSThread *_underlyingThread;
    _Bool _shouldCancelThread;
}

@property(readonly, nonatomic) _Bool shouldCancelThread; // @synthesize shouldCancelThread=_shouldCancelThread;
@property(readonly, nonatomic) NSThread *underlyingThread; // @synthesize underlyingThread=_underlyingThread;
@property(readonly, nonatomic) NSRunLoop *underlyingRunLoop; // @synthesize underlyingRunLoop=_underlyingRunLoop;
@property(readonly, nonatomic) struct _opaque_pthread_t *threadId; // @synthesize threadId=_threadId;
- (void)dealloc;
- (id)initWithCurrentThread;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;
- (id)init;

@end

