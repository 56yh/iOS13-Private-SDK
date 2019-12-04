//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSObject, NSString, RWIRelay, _RWIApplicationInfo, _RWIRelayConnectionToApplication;
@protocol OS_xpc_object;

@protocol RWIRelayDelegate
- (void)relay:(RWIRelay *)arg1 activateApplicationWithBundleIdentifier:(NSString *)arg2;
- (NSDictionary *)relaySetupResponseForClientConnection:(RWIRelay *)arg1;
- (void)relay:(RWIRelay *)arg1 unhandledApplicationXPCMessage:(NSObject<OS_xpc_object> *)arg2;
- (void)relayClientConnectionDidChange:(RWIRelay *)arg1;
- (void)relay:(RWIRelay *)arg1 applicationUpdated:(_RWIApplicationInfo *)arg2;
- (void)relay:(RWIRelay *)arg1 applicationDisconnected:(_RWIApplicationInfo *)arg2;
- (void)relay:(RWIRelay *)arg1 applicationConnected:(_RWIApplicationInfo *)arg2;
- (_RWIApplicationInfo *)relay:(RWIRelay *)arg1 applicationInfoForIncomingConnection:(_RWIRelayConnectionToApplication *)arg2 bundleIdentifier:(NSString *)arg3;
- (_Bool)relay:(RWIRelay *)arg1 allowIncomingApplicationConnection:(_RWIRelayConnectionToApplication *)arg2 bundleIdentifier:(NSString *)arg3;
- (_Bool)relay:(RWIRelay *)arg1 allowIncomingApplicationViaProxy:(CDStruct_6ad76789)arg2 pid:(int)arg3;
- (void)relayInitialize:(RWIRelay *)arg1;
@end

