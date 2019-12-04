//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>

@class NSString, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider>
{
    long long _variant;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

