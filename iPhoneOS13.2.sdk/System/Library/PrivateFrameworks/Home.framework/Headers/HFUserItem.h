//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFHomeKitSettingsVendor-Protocol.h>


@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFUserNameFormatter, HMHome, HMSettings, HMUser, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject;

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying>
{
    _Bool _isItemGroup;
    _Bool _isContainedWithinItemGroup;
    HMHome *_home;
    HMUser *_user;
    unsigned long long _numberOfItemsContainedWithinGroup;
    NSUUID *_uniqueIdentifier;
    HFUserNameFormatter *_userNameFormatter;
    HMHome *_hf_home;
}

+ (id)_fakeHMSettings;
+ (void)set_fakeHMSettings:(id)arg1;
@property(retain, nonatomic) HMHome *hf_home; // @synthesize hf_home=_hf_home;
@property(readonly, nonatomic) HFUserNameFormatter *userNameFormatter; // @synthesize userNameFormatter=_userNameFormatter;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup; // @synthesize numberOfItemsContainedWithinGroup=_numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup; // @synthesize isContainedWithinItemGroup=_isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup; // @synthesize isItemGroup=_isItemGroup;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (_Bool)hasDismissedUserSplitMediaAccountWarning;
- (id)setDismissUserSplitMediaAccountWarning:(_Bool)arg1;
- (_Bool)isPlaybackInfluencesForYouEnabled;
- (id)setPlaybackInfluencesForYou:(_Bool)arg1;
- (_Bool)isIdentifyVoiceEnabled;
- (id)setEnableIdentifyVoice:(_Bool)arg1;
- (id)setDismissCameraRecordingReminderBanner:(_Bool)arg1;
- (_Bool)hasDismissedCameraRecordingReminderBanner;
- (id)setDismissCameraRecordingOnboarding:(_Bool)arg1;
- (_Bool)hasDismissedCameraRecordingOnboarding;
- (id)setDismissTVViewingProfilesReminderBanner:(_Bool)arg1;
- (_Bool)hasDismissedTVViewingProfilesReminderBanner;
- (id)setDismissTVViewingProfilesOnboarding:(_Bool)arg1;
- (_Bool)hasDismissedTVViewingProfilesOnboarding;
- (id)setDismissIdentifyVoiceReminderBanner:(_Bool)arg1;
- (_Bool)hasDismissedIdentifyVoiceReminderBanner;
- (id)setDismissIdentifyVoiceOnboarding:(_Bool)arg1;
- (_Bool)hasDismissedVoiceProfileOnboarding;
- (void)_setFakeBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2;
- (_Bool)_getFakeBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_setBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;
- (_Bool)_getBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;
- (_Bool)_hasValidPrivateSettings;
- (id)_privateSettings;
- (id)_privateSettingsValueManager;
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly) HMSettings *settings;
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) unsigned long long nameStyle;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

