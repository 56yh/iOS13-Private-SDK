//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol BYDaemonGeneralProtocol 
- (void)cancelDataMigratorDeferredExit:(void (^)(void))arg1;
- (void)deferDataMigratorExit:(void (^)(void))arg1;
- (void)performSilentICDPUpgrade:(void (^)(void))arg1;
- (void)observeFinishSetupTriggers:(void (^)(void))arg1;
- (void)backupMetadata:(void (^)(NSData *))arg1;
- (void)ensureShortLivedTokenUpgrade:(void (^)(void))arg1;
- (void)ensureSilentLoginUpgrade:(void (^)(void))arg1;
- (void)setupAssistantNeedsToRun:(void (^)(_Bool))arg1;
@end

