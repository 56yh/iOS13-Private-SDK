//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSTimer, NSXPCConnection, NSXPCListener, PKInAppPaymentService, PKPaymentAuthorizationCoordinatorExportedObject, PKPaymentRequest;
@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate;

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate>
{
    _Bool _didPresent;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSTimer *_timer;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostIdentifier;
    PKPaymentAuthorizationCoordinatorExportedObject *_exportedObject;
    id /* block */ _presentationCompletionBlock;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCListener *_listener;
    double _connectionTimeout;
}

+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 webDomain:(id)arg3;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 webDomain:(id)arg2;
+ (_Bool)canMakePayments;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property(copy, nonatomic) id /* block */ presentationCompletionBlock; // @synthesize presentationCompletionBlock=_presentationCompletionBlock;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool didPresent; // @synthesize didPresent=_didPresent;
- (void)_viewServiceTimerFired:(id)arg1;
- (void)_invokeCallbackWithSuccess:(_Bool)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxy;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)presentWithOrientation:(id)arg1 completion:(id /* block */)arg2;
- (void)presentWithCompletion:(id /* block */)arg1;
@property(nonatomic, setter=_setPrivateDelegate:) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

