//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection
{
    SFSession *_session;
}

@property(retain) SFSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setRequestMessageHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)requestMessageHandler;
- (void)setEventMessageHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)eventMessageHandler;
- (void)setInvalidationHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)invalidationHandler;
- (void)setInterruptionHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)interruptionHandler;

@end

