//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMDHTTPDevice, HMDHTTPServerMessageTransport, NSDictionary, NSError;

@protocol HMDHTTPServerMessageTransportDelegate 
- (void)server:(HMDHTTPServerMessageTransport *)arg1 didReceiveMessage:(NSDictionary *)arg2 fromDevice:(HMDHTTPDevice *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)server:(HMDHTTPServerMessageTransport *)arg1 didRemoveDevice:(HMDHTTPDevice *)arg2;
- (void)server:(HMDHTTPServerMessageTransport *)arg1 didAddDevice:(HMDHTTPDevice *)arg2;
- (void)server:(HMDHTTPServerMessageTransport *)arg1 didStopWithError:(NSError *)arg2;
@end

