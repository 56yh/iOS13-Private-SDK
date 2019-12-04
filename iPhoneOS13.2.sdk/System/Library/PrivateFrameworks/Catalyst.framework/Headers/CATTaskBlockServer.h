//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATTaskServerDelegate-Protocol.h>

@class CATTaskServer, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;

@interface CATTaskBlockServer : NSObject <CATTaskServerDelegate>
{
    CATTaskServer *mServer;
    NSMutableDictionary *mOperationBlocksByRequestClassName;
    NSMutableSet *mLongRunningOperationRequestClassNames;
    NSMapTable *mLongRunningOperationsByUUID;
    NSArray *_clientSessions;
    id /* block */ _sessionDidConnect;
    id /* block */ _sessionDidReceiveNotification;
    id /* block */ _sessionDidInterruptWithError;
    id /* block */ _sessionDidDisconnect;
    id /* block */ _sessionDidInvalidate;
    id /* block */ _didInvalidate;
}

@property(copy, nonatomic) id /* block */ didInvalidate; // @synthesize didInvalidate=_didInvalidate;
@property(copy, nonatomic) id /* block */ sessionDidInvalidate; // @synthesize sessionDidInvalidate=_sessionDidInvalidate;
@property(copy, nonatomic) id /* block */ sessionDidDisconnect; // @synthesize sessionDidDisconnect=_sessionDidDisconnect;
@property(copy, nonatomic) id /* block */ sessionDidInterruptWithError; // @synthesize sessionDidInterruptWithError=_sessionDidInterruptWithError;
@property(copy, nonatomic) id /* block */ sessionDidReceiveNotification; // @synthesize sessionDidReceiveNotification=_sessionDidReceiveNotification;
@property(copy, nonatomic) id /* block */ sessionDidConnect; // @synthesize sessionDidConnect=_sessionDidConnect;
@property(readonly, copy, nonatomic) NSArray *clientSessions; // @synthesize clientSessions=_clientSessions;
- (void)serverDidInvalidate:(id)arg1;
- (void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;
- (void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
- (void)server:(id)arg1 clientSessionDidConnect:(id)arg2;
- (void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;
- (void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;
- (id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id *)arg4;
- (void)invalidate;
- (void)disconnectAllClientSessions;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)cancelLongRunningOperationsForRequestClass:(Class)arg1;
- (void)registerLongRunningOperationForRequestClass:(Class)arg1;
- (void)registerBlock:(id /* block */)arg1 forRequestClass:(Class)arg2;
- (id)createClientTransport;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

