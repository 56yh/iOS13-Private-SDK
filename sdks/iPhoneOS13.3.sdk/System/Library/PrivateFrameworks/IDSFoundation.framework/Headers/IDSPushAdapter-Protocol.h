//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class APSConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol IDSPushAdapter <NSObject>
- (APSConnection *)apsConnectionWithEnvironmentName:(NSString *)arg1 namedDelegatePort:(NSString *)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (NSString *)placeholderMachPort;
@end

