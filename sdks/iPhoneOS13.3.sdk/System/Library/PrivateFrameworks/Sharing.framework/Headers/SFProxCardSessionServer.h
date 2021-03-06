//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, SFProxCardXPCServerInterface;

@interface SFProxCardSessionServer : NSObject
{
    BOOL _dismissCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
    id <SFProxCardXPCServerInterface> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _errorHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
    NSXPCListenerEndpoint *_xpcEndpoint;
}

@property(retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) id <SFProxCardXPCServerInterface> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)performAction:(int)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_reportError:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end

