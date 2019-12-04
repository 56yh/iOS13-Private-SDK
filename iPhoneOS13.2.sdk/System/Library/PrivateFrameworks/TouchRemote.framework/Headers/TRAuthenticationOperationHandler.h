//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString, TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler>
{
    TRCompanionAuthOperationHandler *_companionAuthHandler;
    TRProxyAuthOperationHandler *_proxyAuthHandler;
}

@property(retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler; // @synthesize proxyAuthHandler=_proxyAuthHandler;
@property(retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler; // @synthesize companionAuthHandler=_companionAuthHandler;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithCompanionAuthHandler:(id /* block */)arg1 proxyAuthHandler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

