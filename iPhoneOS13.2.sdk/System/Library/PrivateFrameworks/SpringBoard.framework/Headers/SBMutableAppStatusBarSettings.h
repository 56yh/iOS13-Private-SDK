//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBAppStatusBarSettings.h>

@class NSNumber, _UILegibilitySettings;

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applySettings:(id)arg1;
@property(nonatomic) int styleOverridesToCancel; // @dynamic styleOverridesToCancel;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @dynamic legibilitySettings;
@property(nonatomic) long long style; // @dynamic style;
@property(retain, nonatomic) NSNumber *alpha; // @dynamic alpha;
- (id)init;

@end

