//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BSDescriptionBuilder, BSSettings, NSString;

@protocol BSSettingDescriptionProvider 

@optional
- (NSString *)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned long long)arg1;
- (_Bool)appendDescriptionToBuilder:(BSDescriptionBuilder *)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)settings:(BSSettings *)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)settings:(BSSettings *)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (_Bool)settings:(BSSettings *)arg1 appendDescriptionToBuilder:(BSDescriptionBuilder *)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
@end
