//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)serviceQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)performServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_serviceQueuePerformBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)performSynchronousServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

