//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolNetworkDomainEventDispatcher.h>

@interface RWIProtocolNetworkDomainEventDispatcher (IKJSDependency)
- (void)safe_loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id *)arg3 metrics:(id *)arg4;
- (void)safe_dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;
- (void)safe_loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(_Bool *)arg4;
- (void)safe_requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;
- (void)safe_webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)safe_webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;
- (void)safe_responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;
- (void)safe_webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;
- (void)safe_requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 walltime:(double)arg7 initiator:(id)arg8 redirectResponse:(id *)arg9 type:(long long *)arg10 targetId:(id *)arg11;
- (void)safe_webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)safe_webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;
- (void)safe_webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;
- (void)safe_webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
@end

