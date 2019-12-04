//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFolderController, SBHUnlockSettings, SBIconZoomAnimator, SBLockToAppStatusBarAnimator, SBSceneManager, SBWallpaperController, SBWindowSelfHostWrapper, UIWindow;

@interface SBCoverSheetAnimator : NSObject
{
    _Bool _transitioning;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconZoomAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_coverSheetWindowHostWrapper;
    SBSceneManager *_sceneManager;
    UIWindow *_hostingWindow;
    UIWindow *_switcherWindow;
    SBWallpaperController *_wallpaperController;
    SBFolderController *_folderController;
    SBHUnlockSettings *_unlockSettings;
    UIWindow *_coverSheetWindow;
}

@property(nonatomic) __weak UIWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) SBHUnlockSettings *unlockSettings; // @synthesize unlockSettings=_unlockSettings;
@property(retain, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(retain, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(retain, nonatomic) UIWindow *switcherWindow; // @synthesize switcherWindow=_switcherWindow;
@property(retain, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(retain, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper; // @synthesize coverSheetWindowHostWrapper=_coverSheetWindowHostWrapper;
@property(retain, nonatomic) SBIconZoomAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator; // @synthesize statusBarAnimator=_statusBarAnimator;
- (void)_setWallpaperToLocked:(_Bool)arg1 duration:(double)arg2;
- (void)_prepareIconAnimatorIncludingLockScreen:(_Bool)arg1;
- (void)_updateCoverSheetHosting;
- (void)animateToCoverSheet:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7;

@end

