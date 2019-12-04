//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_customXpcHandlers;
    NSObject<OS_xpc_object> *_connection;
    id /* block */ _messageHandler;
    id /* block */ _invalidationHandler;
}

@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)_registerCallbacks;
- (id)sendSyncMessage:(id)arg1 error:(id *)arg2;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)removeCustomXPCHandler:(unsigned long long)arg1;
- (void)addCustomXPCHandler:(id /* block */)arg1 forKey:(unsigned long long)arg2;
@property(readonly, nonatomic) int pid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;

@end
