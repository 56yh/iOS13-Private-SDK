//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

#import <ScreenTimeUI/CDPUIDeviceToDeviceEncryptionHelperDelegate-Protocol.h>
#import <ScreenTimeUI/MCProfileConnectionObserver-Protocol.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STCloudSyncDataGroupSpecifierProvider : STRootGroupSpecifierProvider <CDPUIDeviceToDeviceEncryptionHelperDelegate, MCProfileConnectionObserver>
{
    PSSpecifier *_toggleCloudSyncDataSpecifier;
}

@property(readonly, nonatomic) PSSpecifier *toggleCloudSyncDataSpecifier; // @synthesize toggleCloudSyncDataSpecifier=_toggleCloudSyncDataSpecifier;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (void)_updateEnabledValue;
- (id)cloudSyncData:(id)arg1;
- (void)presentHSA2RepairUI:(id /* block */)arg1;
- (void)performHSA2RepairIfNeeded:(id /* block */)arg1;
- (void)setScreenTimeSyncing:(_Bool)arg1;
- (void)changeCloudSyncData:(_Bool)arg1;
- (void)setCloudSyncData:(id)arg1 specifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
