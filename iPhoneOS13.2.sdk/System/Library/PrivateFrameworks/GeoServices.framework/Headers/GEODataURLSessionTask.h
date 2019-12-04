//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTask-Protocol.h>
#import <GeoServices/GEODataSessionUpdatableTask-Protocol.h>
#import <GeoServices/GEOStateCapturing-Protocol.h>

@class GEOClientMetrics, GEODataRequest, NSData, NSDate, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLRequest, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol GEODataSessionTaskDelegate, GEORequestCounterTicket, NSObject, OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEODataURLSessionTask : NSObject <GEOStateCapturing, GEODataSessionTask, GEODataSessionUpdatableTask>
{
    id <GEODataSessionTaskDelegate> _delegate;
    GEODataRequest *_request;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSURLSessionTask *_backingTask;
    NSError *_nonBackingTaskError;
    NSData *_cachedData;
    NSMutableData *_receivedData;
    NSURLSessionTaskMetrics *_urlTaskMetrics;
    double _startTime;
    double _endTime;
    CDStruct_d1a7ebee _requestKind;
    unsigned int _taskIdentifier;
    _Bool _mptcpNegotiated;
    _Bool _receivedRNFNotification;
    unsigned long long _stateCaptureHandle;
    float _priority;
    unsigned int _sessionIdentifier;
    _Bool _backingTaskNeedsResume;
    _Bool _finished;
    unsigned int _qos;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_voucher> *_voucher;
    id sponse;
    NSDate *_originalStartDate;
}

@property(nonatomic) _Bool receivedRNFNotification; // @synthesize receivedRNFNotification=_receivedRNFNotification;
@property(readonly, nonatomic) _Bool mptcpNegotiated; // @synthesize mptcpNegotiated=_mptcpNegotiated;
@property(nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) NSURLSessionTask *backingTask; // @synthesize backingTask=_backingTask;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSURLSessionTaskMetrics *urlTaskMetrics; // @synthesize urlTaskMetrics=_urlTaskMetrics;
@property(readonly, nonatomic) unsigned int taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, nonatomic) __weak id <GEODataSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CDStruct_d1a7ebee requestKind; // @synthesize requestKind=_requestKind;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
- (void)delegateAsync:(id /* block */)arg1;
@property(readonly, nonatomic) id <GEORequestCounterTicket> requestCounterTicket;
- (void)notifyDelegateWithSession:(id)arg1;
@property(readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property(readonly, nonatomic) NSString *remoteAddressAndPort;
@property(readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) _Bool failedDueToCancel;
@property(readonly, nonatomic) unsigned long long incomingPayloadSize;
@property(readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property(readonly, nonatomic) NSURLRequest *originalURLRequest;
- (void)setParsedResponse:(id)arg1;
@property(readonly, nonatomic) id ponse;
@property(retain, nonatomic) NSError *error;
@property(readonly, nonatomic) NSHTTPURLResponse *response;
@property(readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property(readonly, nonatomic) NSData *receivedData;
@property(readonly, nonatomic) _Bool protocolBufferHasPreamble;
@property float priority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)_prepareForRestart;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(CDStruct_d1a7ebee)arg4 priority:(float)arg5;
- (id)init;
- (_Bool)validateContentLengthWithError:(id *)arg1;
- (_Bool)validateNonEmptyResponseWithError:(id *)arg1;
- (_Bool)validateTileResponse:(_Bool)arg1 error:(id *)arg2;
- (id)captureStateWithHints:(struct os_state_hints_s *)arg1;
- (void)didCollectMetrics:(id)arg1;
- (void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)createURLRequest;
- (id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;
- (_Bool)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;
- (double)loadTimeIncludingTask:(id)arg1;
@property(readonly, nonatomic) double loadTime;
@property(readonly, nonatomic) double elapsedTime;
@property(readonly, nonatomic) NSURL *originalRequestURL;
@property(readonly, nonatomic) long long HTTPStatusCode;
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, nonatomic) NSString *contentLengthString;
@property(readonly, nonatomic) NSString *entityTag;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

