//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, SBIcon, SBLeafIcon, UIImage;

@protocol SBLeafIconDataSource 
- (NSString *)icon:(SBLeafIcon *)arg1 displayNameForLocation:(NSString *)arg2;
- (unsigned long long)priorityForIcon:(SBLeafIcon *)arg1;

@optional
- (_Bool)icon:(SBLeafIcon *)arg1 launchFromLocation:(NSString *)arg2 context:(id)arg3;
- (NSString *)icon:(SBLeafIcon *)arg1 displayNameForObscuredDisabledLaunchForLocation:(NSString *)arg2;
- (_Bool)iconDisallowsLaunchForObscuredReason:(SBLeafIcon *)arg1;
- (_Bool)iconAllowsLaunch:(SBLeafIcon *)arg1;
- (_Bool)iconCompleteUninstall:(SBLeafIcon *)arg1;
- (_Bool)iconSupportsUninstall:(SBLeafIcon *)arg1;
- (_Bool)isTimedOutForIcon:(SBIcon *)arg1;
- (long long)labelAccessoryTypeForIcon:(SBLeafIcon *)arg1;
- (long long)accessoryTypeForIcon:(SBLeafIcon *)arg1;
- (NSString *)formattedAccessoryStringForIcon:(SBLeafIcon *)arg1;
- (id)badgeNumberOrStringForIcon:(SBLeafIcon *)arg1;
- (_Bool)isProgressPausedForIcon:(SBLeafIcon *)arg1;
- (double)progressPercentForIcon:(SBLeafIcon *)arg1;
- (long long)progressStateForIcon:(SBLeafIcon *)arg1;
- (_Bool)iconCanTightenLabel:(SBLeafIcon *)arg1;
- (_Bool)iconCanTruncateLabel:(SBLeafIcon *)arg1;
- (UIImage *)icon:(SBLeafIcon *)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 defaultImageWithInfo:(struct SBIconImageInfo)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
@end

