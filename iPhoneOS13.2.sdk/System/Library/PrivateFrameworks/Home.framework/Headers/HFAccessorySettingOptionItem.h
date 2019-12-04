//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFAccessorySettingItem.h>

@class HMAccessorySelectionSettingItem, NSDictionary;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem
{
    HMAccessorySelectionSettingItem *_optionItem;
    NSDictionary *_usageOptions;
}

@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(retain, nonatomic) HMAccessorySelectionSettingItem *optionItem; // @synthesize optionItem=_optionItem;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)settingKeyPath;
- (id)value;
- (id)toggleSelection;
- (id)homeKitObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;

@end

