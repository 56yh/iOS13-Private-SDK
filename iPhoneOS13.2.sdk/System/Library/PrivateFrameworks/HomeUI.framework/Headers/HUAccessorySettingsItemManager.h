//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsItemModule;

@interface HUAccessorySettingsItemManager : HFItemManager
{
    HFAccessorySettingGroupItem *_groupItem;
    HUAccessorySettingsItemModule *_accessorySettingsSectionItemModule;
}

@property(retain, nonatomic) HUAccessorySettingsItemModule *accessorySettingsSectionItemModule; // @synthesize accessorySettingsSectionItemModule=_accessorySettingsSectionItemModule;
@property(retain, nonatomic) HFAccessorySettingGroupItem *groupItem; // @synthesize groupItem=_groupItem;
- (void)_unregisterForExternalUpdates;
- (void)_registerForExternalUpdates;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;

@end

