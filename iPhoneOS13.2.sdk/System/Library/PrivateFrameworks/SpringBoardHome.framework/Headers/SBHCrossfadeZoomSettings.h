//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings
{
    _Bool _morphWithZoom;
    SBFAnimationSettings *_morphSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFAnimationSettings *morphSettings; // @synthesize morphSettings=_morphSettings;
@property(nonatomic) _Bool morphWithZoom; // @synthesize morphWithZoom=_morphWithZoom;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end

