//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBLeafIcon.h>

@interface SBSpringBoardApplicationIcon : SBLeafIcon
{
    long long _interfaceStyle;
}

- (id)_generateImageWithInfo:(struct SBIconImageInfo)arg1;
- (_Bool)isUninstallSupported;
- (_Bool)canTightenLabel;
- (_Bool)canTruncateLabel;
- (id)displayNameForLocation:(id)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)init;
- (id)initWithInterfaceStyle:(long long)arg1;

@end

