//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface STWebUsageController : NSObject
{
    NSXPCConnection *_xpcConnection;
}

@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)_asynchronousProxyWithHandler:(id /* block */)arg1;
- (void)deleteAllWebHistoryForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;

@end

