//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSUUID;
@protocol HMDSettingsMessageController;

@protocol HMDSettingsMessageHandlerProtocol 
- (void)unconfigureFromSettingGroup:(NSUUID *)arg1;
- (void)configureForSettingGroup:(NSUUID *)arg1;
- (void)unconfigureFromSetting:(NSUUID *)arg1;
- (void)configureForSetting:(NSUUID *)arg1;
- (void)setMessageController:(id <HMDSettingsMessageController>)arg1;
@end

