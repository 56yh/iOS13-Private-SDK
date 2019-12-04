//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSGroupContextNotifyingObserver, NSXPCConnection;
@protocol IDSGroupContextCacheMiddlewareDaemonProtocol, IDSGroupContextDataSourceDaemonProtocol;

@interface IDSDaemonProtocolController : NSObject
{
    NSXPCConnection *_connection;
    IDSGroupContextNotifyingObserver *_observer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IDSGroupContextNotifyingObserver *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) id <IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware;
@property(readonly, nonatomic) id <IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)init;

@end

