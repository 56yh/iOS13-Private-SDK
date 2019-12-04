//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBBestAppSuggestion.h>

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion
{
    UABestAppSuggestion *_appSuggestion;
}

@property(readonly, nonatomic) UABestAppSuggestion *appSuggestion; // @synthesize appSuggestion=_appSuggestion;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isHandoff;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isNotificationSuggestion;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)originatingDeviceIdentifier;
- (id)lastUpdateTime;
- (id)activityType;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithAppSuggestion:(id)arg1;

@end

