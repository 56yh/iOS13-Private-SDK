//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HMSettingsDelegate-Protocol.h>

@class HMSetting, HMSettings, NSSet;

@protocol HFHomeKitSettingsObserver <HMSettingsDelegate>

@optional
- (void)settings:(HMSettings *)arg1 didWriteValueForSettings:(NSSet *)arg2 failedSettings:(NSSet *)arg3;
- (void)settings:(HMSettings *)arg1 willWriteValueForSettings:(NSSet *)arg2;
- (void)settings:(HMSettings *)arg1 didUpdateSetting:(HMSetting *)arg2;
@end

