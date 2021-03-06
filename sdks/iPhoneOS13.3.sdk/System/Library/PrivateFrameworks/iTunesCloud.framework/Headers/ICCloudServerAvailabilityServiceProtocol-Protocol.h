//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol ICCloudServerAvailabilityServiceProtocol <NSObject>
- (void)canShowCloudVideoWithCompletion:(void (^)(BOOL))arg1;
- (void)canShowCloudMusicWithCompletion:(void (^)(BOOL))arg1;
- (void)canShowCloudDownloadButtonsWithCompletion:(void (^)(BOOL))arg1;
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(void (^)(BOOL))arg1;
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(void (^)(BOOL))arg1;
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(void (^)(BOOL))arg1;
- (void)isCellularDataRestrictedForVideosWithCompletion:(void (^)(BOOL))arg1;
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(void (^)(BOOL))arg1;
- (void)isCellularDataRestrictedForMusicWithCompletion:(void (^)(BOOL))arg1;
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(void (^)(BOOL))arg1;
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(void (^)(BOOL))arg1;
@end

