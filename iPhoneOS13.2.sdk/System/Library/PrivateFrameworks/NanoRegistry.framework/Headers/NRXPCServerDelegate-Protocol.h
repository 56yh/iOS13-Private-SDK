//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NRXPCProxy, NRXPCServer;

@protocol NRXPCServerDelegate 

@optional
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidResume:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidSuspend:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidDisconnect:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyWillConnect:(NRXPCProxy *)arg2;
@end

