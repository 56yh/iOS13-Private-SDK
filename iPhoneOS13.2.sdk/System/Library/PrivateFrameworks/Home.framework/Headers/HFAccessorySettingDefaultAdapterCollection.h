//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFAccessorySettingAdapter, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject
{
    HFAccessorySettingManagedConfigurationAdapter *_managedConfigurationAdapter;
    HFAccessorySettingAdapter *_mobileTimerAdapter;
    HFAccessorySettingSiriLanguageAdapter *_siriLanguageAdapter;
}

@property(retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter; // @synthesize siriLanguageAdapter=_siriLanguageAdapter;
@property(retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter; // @synthesize mobileTimerAdapter=_mobileTimerAdapter;
@property(retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter; // @synthesize managedConfigurationAdapter=_managedConfigurationAdapter;
@property(readonly, nonatomic) NSSet *allAdapters;

@end

