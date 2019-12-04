//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSObject, NSProtocolChecker;
@protocol OS_dispatch_queue;

@interface IDSDaemonControllerForwarder : NSProxy
{
    NSProtocolChecker *_protocol;
    id /* block */ _completion;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    int _priority;
}

@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // @synthesize remoteMessageQueue=_remoteMessageQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSProtocolChecker *protocol; // @synthesize protocol=_protocol;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3;

@end

