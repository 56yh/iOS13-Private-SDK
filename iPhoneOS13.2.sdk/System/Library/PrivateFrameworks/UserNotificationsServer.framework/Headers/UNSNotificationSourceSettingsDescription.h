//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UNSNotificationSourceSettingsDescription : NSObject
{
    _Bool _supportsSounds;
    _Bool _supportsAlerts;
    _Bool _supportsBadges;
    _Bool _supportsLockScreen;
    _Bool _supportsNotificationCenter;
    _Bool _supportsCarPlay;
    _Bool _supportsSpoken;
    _Bool _modalAlertStyle;
    _Bool _alwaysShowPreviews;
    _Bool _providesAppNotificationSettings;
}

+ (id)notificationSourceSettingsDescriptionFromDictionary:(id)arg1;
@property(nonatomic) _Bool providesAppNotificationSettings; // @synthesize providesAppNotificationSettings=_providesAppNotificationSettings;
@property(nonatomic) _Bool alwaysShowPreviews; // @synthesize alwaysShowPreviews=_alwaysShowPreviews;
@property(nonatomic) _Bool modalAlertStyle; // @synthesize modalAlertStyle=_modalAlertStyle;
@property(nonatomic) _Bool supportsSpoken; // @synthesize supportsSpoken=_supportsSpoken;
@property(nonatomic) _Bool supportsCarPlay; // @synthesize supportsCarPlay=_supportsCarPlay;
@property(nonatomic) _Bool supportsNotificationCenter; // @synthesize supportsNotificationCenter=_supportsNotificationCenter;
@property(nonatomic) _Bool supportsLockScreen; // @synthesize supportsLockScreen=_supportsLockScreen;
@property(nonatomic) _Bool supportsBadges; // @synthesize supportsBadges=_supportsBadges;
@property(nonatomic) _Bool supportsAlerts; // @synthesize supportsAlerts=_supportsAlerts;
@property(nonatomic) _Bool supportsSounds; // @synthesize supportsSounds=_supportsSounds;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

