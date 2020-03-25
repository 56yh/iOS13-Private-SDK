//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFAccessibilityState, AFAudioPlaybackRequest;

@protocol AFClientConfigurationMutating <NSObject>
- (void)setTwoShotAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setIsDeviceInStarkMode:(BOOL)arg1;
- (void)setIsDeviceInCarDNDMode:(BOOL)arg1;
- (void)setIsDeviceInSetupFlow:(BOOL)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setAccessibilityState:(AFAccessibilityState *)arg1;
@end
