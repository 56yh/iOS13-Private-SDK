//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKUISettingsGroupDescription;
@protocol SKUISettingsGroupControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupController : NSObject
{
    id <SKUISettingsGroupControllerDelegate> _delegate;
    NSMutableArray *_settingDescriptions;
    SKUISettingsGroupDescription *_settingsGroupDescription;
}

@property(retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription; // @synthesize settingsGroupDescription=_settingsGroupDescription;
@property(retain, nonatomic) NSMutableArray *settingDescriptions; // @synthesize settingDescriptions=_settingDescriptions;
@property(nonatomic) __weak id <SKUISettingsGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewForSettingDescription:(id)arg1;
- (void)_reloadSettingDescription:(id)arg1;
- (void)attachSettingDescription:(id)arg1;

@end

