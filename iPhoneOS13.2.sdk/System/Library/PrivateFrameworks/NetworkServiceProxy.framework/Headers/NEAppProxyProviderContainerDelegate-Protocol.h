//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NEAppProxyProviderContainer, NETunnelNetworkSettings, NSError;

@protocol NEAppProxyProviderContainerDelegate
- (void)container:(NEAppProxyProviderContainer *)arg1 didSetTunnelConfiguration:(NETunnelNetworkSettings *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)container:(NEAppProxyProviderContainer *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg2;
- (void)container:(NEAppProxyProviderContainer *)arg1 didFailWithError:(NSError *)arg2;
- (void)container:(NEAppProxyProviderContainer *)arg1 didStartWithError:(NSError *)arg2;
@end

