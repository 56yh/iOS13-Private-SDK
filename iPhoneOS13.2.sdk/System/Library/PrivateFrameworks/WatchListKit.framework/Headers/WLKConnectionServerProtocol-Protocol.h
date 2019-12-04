//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSNumber, NSString, WLKPlaybackSummary;

@protocol WLKConnectionServerProtocol 
- (void)clearOffers:(void (^)(NSError *))arg1;
- (void)fetchOffers:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)saveOffer:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)prewarm;
- (void)ping;
- (void)fetchLocationAuthorizationStatus:(void (^)(long long))arg1;
- (void)fetchSettings:(void (^)(NSDictionary *, NSError *))arg1;
- (void)postSettings:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)writeSettingsStore:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool))arg2;
- (void)readSettingsStore:(void (^)(NSDictionary *))arg1;
- (void)fetchApplications:(void (^)(NSDictionary *))arg1;
- (void)deletePlaybackActivityWithIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)requestConsentForBundleID:(NSString *)arg1 forceAuth:(_Bool)arg2 replyHandler:(void (^)(_Bool))arg3;
- (void)endPlaybackSession:(NSString *)arg1;
- (void)reportPlayback:(WLKPlaybackSummary *)arg1 sessionID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)reportPlayback:(WLKPlaybackSummary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestPlaybackSummaryForID:(NSNumber *)arg1 completion:(void (^)(WLKPlaybackSummary *))arg2;
- (void)requestDecoratedNowPlayingSummaries:(void (^)(NSDictionary *))arg1;
- (void)requestNowPlayingSummary:(void (^)(WLKPlaybackSummary *))arg1;
@end

