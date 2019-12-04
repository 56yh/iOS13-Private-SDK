//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOETATrafficUpdateRequest, GEOMapServiceTraits, GEOProtobufSession, GEOProtobufSessionTask, NSString;
@protocol OS_dispatch_queue;

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_task;
    GEOETATrafficUpdateRequest *_currentRequest;
    id /* block */ _errorHandler;
    id /* block */ _finishedHandler;
    id /* block */ _willSendRequestHandler;
    GEOApplicationAuditToken *_auditToken;
    GEOMapServiceTraits *_traits;
    _Bool _cancelled;
    struct GEOOnce_s _didStart;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property(copy, nonatomic) id /* block */ willSendRequestHandler; // @synthesize willSendRequestHandler=_willSendRequestHandler;
@property(copy, nonatomic) id /* block */ finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) id /* block */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain) GEOETATrafficUpdateRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) GEOProtobufSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void)cancelRequest;
- (void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)updateRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)initWithAuditToken:(id)arg1 traits:(id)arg2;
- (id)init;
- (void)didCompleteTask;
- (void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

