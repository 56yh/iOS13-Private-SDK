//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSServiceConnectionConfiguring_DispatchingQueue-Protocol.h>
#import <BoardServices/BSServiceConnectionInternalConfiguring-Protocol.h>

@class BSServiceInterface, BSServiceQuality, NSString;
@protocol BSServiceDispatchingQueue, NSCopying, OS_dispatch_queue, OS_xpc_object;

@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionInternalConfiguring, BSServiceConnectionConfiguring_DispatchingQueue>
{
    struct os_unfair_lock_s *_lock;
    NSObject<OS_xpc_object> *_clientContext;
    id <NSCopying> _userInfo;
    NSString *_name;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _target;
    id /* block */ _activationHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id <BSServiceDispatchingQueue> _targetDispatchingQueue;
    id /* block */ _messageHandler;
    id /* block */ _errorHandler;
}

- (void)setErrorHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setTargetDispatchingQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setActivationHandler:(id /* block */)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(id)arg1;
- (id)interface;
- (void)setServiceQuality:(id)arg1;
- (void)setName:(id)arg1;
- (id)initWithLock:(struct os_unfair_lock_s *)arg1 clientContext:(id)arg2;

@end

