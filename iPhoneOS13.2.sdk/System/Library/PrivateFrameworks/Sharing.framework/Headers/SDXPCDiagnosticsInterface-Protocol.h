//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SFBLEDevice;

@protocol SDXPCDiagnosticsInterface
- (void)diagnosticUnlockTestServer;
- (void)diagnosticUnlockTestClientWithDevice:(SFBLEDevice *)arg1;
- (void)diagnosticShow:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticMockStop:(void (^)(NSError *))arg1;
- (void)diagnosticMockStart:(void (^)(NSError *))arg1;
- (void)diagnosticMock:(NSString *)arg1 device:(SFBLEDevice *)arg2 completion:(void (^)(NSError *))arg3;
- (void)diagnosticLogControl:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticControl:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)diagnosticBLEModeWithCompletion:(void (^)(NSError *))arg1;
- (void)bluetoothUserInteraction;
@end

