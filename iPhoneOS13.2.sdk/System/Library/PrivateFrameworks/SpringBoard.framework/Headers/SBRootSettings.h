//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@class SBAttentionAwarenessSettings, SBProximitySettings, SBStatusBarStyleOverridesSettings;

@interface SBRootSettings : _UISettings
{
    SBStatusBarStyleOverridesSettings *_statusBarStyleOverridesSettings;
    SBAttentionAwarenessSettings *_attentionAwarenessSettings;
    SBProximitySettings *_proximitySettings;
}

@property(retain) SBProximitySettings *proximitySettings; // @synthesize proximitySettings=_proximitySettings;
@property(retain) SBAttentionAwarenessSettings *attentionAwarenessSettings; // @synthesize attentionAwarenessSettings=_attentionAwarenessSettings;
@property(retain) SBStatusBarStyleOverridesSettings *statusBarStyleOverridesSettings; // @synthesize statusBarStyleOverridesSettings=_statusBarStyleOverridesSettings;

@end

