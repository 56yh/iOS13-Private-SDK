//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapServiceTraits, GEOProtobufSessionTask, NSString, PBRequest;
@protocol GEOServiceRequestConfiguring;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSessionTask *_task;
    _Bool _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    id /* block */ _completionHandler;
    id /* block */ _validationHandler;
    id <GEOServiceRequestConfiguring> _config;
    NSString *_appIdentifier;
    GEOApplicationAuditToken *_auditToken;
    CDStruct_d1a7ebee _dataRequestKind;
    GEOMapServiceTraits *_traits;
    double _timeout;
    GEODataRequestThrottlerToken *_throttleToken;
}

- (id)_userInfoForTask:(id)arg1;
- (id)protobufSession:(id)arg1 validateResponse:(id)arg2;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)startWithValidationHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)_fullURL;
- (void)cancel;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(CDStruct_d1a7ebee)arg5 traits:(id)arg6 throttleToken:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
