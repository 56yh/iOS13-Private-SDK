//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary;

@protocol SOSControlProtocol 
- (void)setWatchdogParmeters:(NSDictionary *)arg1 complete:(void (^)(NSError *))arg2;
- (void)getWatchdogParameters:(void (^)(NSDictionary *, NSError *))arg1;
- (void)triggerSync:(NSArray *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)importInitialSyncCredentials:(NSArray *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)initialSyncCredentials:(unsigned int)arg1 complete:(void (^)(NSArray *, NSError *))arg2;
- (void)joinCircleWithBlob:(NSData *)arg1 version:(int)arg2 complete:(void (^)(_Bool, NSError *))arg3;
- (void)circleJoiningBlob:(NSData *)arg1 complete:(void (^)(NSData *, NSError *))arg2;
- (void)circleHash:(void (^)(NSString *, NSError *))arg1;
- (void)myPeerInfo:(void (^)(NSData *, NSError *))arg1;
- (void)ghostBustInfo:(void (^)(NSData *, NSError *))arg1;
- (void)ghostBustTriggerTimed:(unsigned int)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)ghostBustPeriodic:(unsigned int)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)ghostBust:(unsigned int)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)stashAccountCredential:(NSData *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)validatedStashedAccountCredential:(void (^)(NSData *, NSError *))arg1;
- (void)assertStashedAccountCredential:(void (^)(_Bool, NSError *))arg1;
- (void)stashedCredentialPublicKey:(void (^)(NSData *, NSError *))arg1;
- (void)rateLimitingPerformanceCounters:(void (^)(NSDictionary *))arg1;
- (void)kvsPerformanceCounters:(void (^)(NSDictionary *))arg1;
- (void)userPublicKey:(void (^)(_Bool, NSData *, NSError *))arg1;
@end

