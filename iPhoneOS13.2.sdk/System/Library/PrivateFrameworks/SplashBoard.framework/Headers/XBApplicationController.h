//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject
{
    FBSDisplayConfiguration *_mainDisplayConfiguration;
    long long _statusBarOrientation;
}

+ (id)sharedInstance;
@property(getter=_statusBarOrientation, setter=_setStatusBarOrientation:) long long statusBarOrientation; // @synthesize statusBarOrientation=_statusBarOrientation;
- (void)_updateStatusBarOrientation;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(_Bool)arg3;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(_Bool)arg2;
- (void)resetEverything;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (void)removeAllGeneratedLaunchImages;
- (id)allSplashBoardSystemApplications;
- (id)allSplashBoardApplications;
- (id)_allApplications;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (void)_deleteLegacyCachesSnapshotPathsIfNeeded;
- (void)_migrateDataIfNeeded;
- (void)dealloc;
- (id)init;

@end

