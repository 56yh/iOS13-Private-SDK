//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFNetworkConfigurationGroupItem, HUNetworkConfigurationSettingsModule;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager
{
    HUNetworkConfigurationSettingsModule *_networkConfigurationSettingsModule;
}

@property(retain, nonatomic) HUNetworkConfigurationSettingsModule *networkConfigurationSettingsModule; // @synthesize networkConfigurationSettingsModule=_networkConfigurationSettingsModule;
@property(readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceNetworkConfigurationGroupItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2;

@end

