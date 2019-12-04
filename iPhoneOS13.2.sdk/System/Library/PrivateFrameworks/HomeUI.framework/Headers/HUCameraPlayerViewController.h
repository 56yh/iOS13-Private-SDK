//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVPlayerViewController.h>

#import <HomeUI/AVPlayerViewControllerDelegate-Protocol.h>
#import <HomeUI/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUCameraPlayerAVBehaviorDelegate-Protocol.h>
#import <HomeUI/HUItemPresentationContainer-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class AVControlItem, AVHomeLoadingButtonControlItem, AVPlayerLooper, AVQueuePlayer, HFCameraItem, HFCameraPlaybackEngine, HFItem, HFItemManager, HMCameraProfile, HMHome, HUCalendarScrubberContainerViewController, HUCameraMiniScrubberViewController, HUCameraPlayerAVBehavior, HUCameraPlayerAccessoryViewController, HUCameraPlayerConfiguration, HUCameraPlayerFooterViewController, HUCameraPlayerLiveContentViewController, HUCameraPlayerPlaceholderContentViewController, HUCameraRecordingPlayerView, HUCameraStatusOverlayView, HUClipScrubberViewController, HULegibilityLabel, NAUILayoutConstraintSet, NSArray, NSLayoutConstraint, NSString, NSTimer, UIAlertController, UIViewController;
@protocol HUCameraPlayerScrubbing, HUCameraPlayerViewControllerDelegate, HUPresentationDelegate;

@interface HUCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate, HUPresentationDelegate, HUItemPresentationContainer, HUPresentationDelegateHost>
{
    _Bool _recordedClipInterfaceAvailable;
    _Bool _enteringFullScreen;
    _Bool _viewVisible;
    _Bool _viewDisappearing;
    _Bool _observingReadyForDisplay;
    _Bool _applicationIsActive;
    _Bool _shouldResumePlaying;
    id <HUPresentationDelegate> presentationDelegate;
    id <HUCameraPlayerViewControllerDelegate> _cameraDelegate;
    HFCameraItem *_cameraItem;
    HUCameraPlayerAVBehavior *_behavior;
    HUCameraPlayerConfiguration *_playerConfiguration;
    double _cornerRadius;
    HFItemManager *_itemManager;
    HFCameraPlaybackEngine *_playbackEngine;
    HUCameraStatusOverlayView *_cameraStatusView;
    AVControlItem *_microphoneControlItem;
    NSArray *_savedControlItems;
    AVHomeLoadingButtonControlItem *_nextControlItem;
    HUCalendarScrubberContainerViewController *_calendarContainerViewController;
    HUCameraPlayerAccessoryViewController *_accessoryViewController;
    HUCameraPlayerFooterViewController *_footerViewController;
    HUCameraPlayerLiveContentViewController *_liveContentViewController;
    HUClipScrubberViewController *_clipScrubberViewController;
    HUCameraMiniScrubberViewController *_miniScrubberViewController;
    HUCameraPlayerPlaceholderContentViewController *_placeholderContentViewController;
    NAUILayoutConstraintSet *_staticConstraintSet;
    NAUILayoutConstraintSet *_statusIndicatorConstraintSet;
    NAUILayoutConstraintSet *_scrubberConstraintSet;
    NAUILayoutConstraintSet *_calendarConstraintSet;
    NSLayoutConstraint *_cameraStatusViewTopConstraint;
    NSLayoutConstraint *_dayLabelTopConstraint;
    HUCameraRecordingPlayerView *_demoPlayerView;
    AVPlayerLooper *_looper;
    AVQueuePlayer *_demoModeQueuePlayer;
    UIAlertController *_airplaneAlertController;
    HULegibilityLabel *_dayLabel;
    HULegibilityLabel *_timeLabel;
    NSTimer *_liveTimer;
}

+ (id)_legibilityLabelFactory;
@property(retain, nonatomic) NSTimer *liveTimer; // @synthesize liveTimer=_liveTimer;
@property(retain, nonatomic) HULegibilityLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) HULegibilityLabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(nonatomic) _Bool shouldResumePlaying; // @synthesize shouldResumePlaying=_shouldResumePlaying;
@property(nonatomic) __weak UIAlertController *airplaneAlertController; // @synthesize airplaneAlertController=_airplaneAlertController;
@property(nonatomic) __weak AVQueuePlayer *demoModeQueuePlayer; // @synthesize demoModeQueuePlayer=_demoModeQueuePlayer;
@property(retain, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
@property(retain, nonatomic) HUCameraRecordingPlayerView *demoPlayerView; // @synthesize demoPlayerView=_demoPlayerView;
@property(retain, nonatomic) NSLayoutConstraint *dayLabelTopConstraint; // @synthesize dayLabelTopConstraint=_dayLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraStatusViewTopConstraint; // @synthesize cameraStatusViewTopConstraint=_cameraStatusViewTopConstraint;
@property(retain, nonatomic) NAUILayoutConstraintSet *calendarConstraintSet; // @synthesize calendarConstraintSet=_calendarConstraintSet;
@property(retain, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet; // @synthesize scrubberConstraintSet=_scrubberConstraintSet;
@property(retain, nonatomic) NAUILayoutConstraintSet *statusIndicatorConstraintSet; // @synthesize statusIndicatorConstraintSet=_statusIndicatorConstraintSet;
@property(retain, nonatomic) NAUILayoutConstraintSet *staticConstraintSet; // @synthesize staticConstraintSet=_staticConstraintSet;
@property(nonatomic) _Bool applicationIsActive; // @synthesize applicationIsActive=_applicationIsActive;
@property(nonatomic, getter=isObservingReadyForDisplay) _Bool observingReadyForDisplay; // @synthesize observingReadyForDisplay=_observingReadyForDisplay;
@property(nonatomic, getter=isViewDisappearing) _Bool viewDisappearing; // @synthesize viewDisappearing=_viewDisappearing;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic, getter=isEnteringFullScreen) _Bool enteringFullScreen; // @synthesize enteringFullScreen=_enteringFullScreen;
@property(nonatomic) _Bool recordedClipInterfaceAvailable; // @synthesize recordedClipInterfaceAvailable=_recordedClipInterfaceAvailable;
@property(retain, nonatomic) HUCameraPlayerPlaceholderContentViewController *placeholderContentViewController; // @synthesize placeholderContentViewController=_placeholderContentViewController;
@property(retain, nonatomic) HUCameraMiniScrubberViewController *miniScrubberViewController; // @synthesize miniScrubberViewController=_miniScrubberViewController;
@property(retain, nonatomic) HUClipScrubberViewController *clipScrubberViewController; // @synthesize clipScrubberViewController=_clipScrubberViewController;
@property(retain, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController; // @synthesize liveContentViewController=_liveContentViewController;
@property(retain, nonatomic) HUCameraPlayerFooterViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) HUCalendarScrubberContainerViewController *calendarContainerViewController; // @synthesize calendarContainerViewController=_calendarContainerViewController;
@property(retain, nonatomic) AVHomeLoadingButtonControlItem *nextControlItem; // @synthesize nextControlItem=_nextControlItem;
@property(retain, nonatomic) NSArray *savedControlItems; // @synthesize savedControlItems=_savedControlItems;
@property(retain, nonatomic) AVControlItem *microphoneControlItem; // @synthesize microphoneControlItem=_microphoneControlItem;
@property(retain, nonatomic) HUCameraStatusOverlayView *cameraStatusView; // @synthesize cameraStatusView=_cameraStatusView;
@property(retain, nonatomic) HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) HUCameraPlayerConfiguration *playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) HUCameraPlayerAVBehavior *behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) HFCameraItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(nonatomic) __weak id <HUCameraPlayerViewControllerDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate;
- (void)dealloc;
- (void)_cleanUpIdleTimerState;
@property(readonly, nonatomic) HFItem *hu_presentedItem;
- (void)cancelLiveTimer;
- (void)startLiveTimer;
- (void)_updateDayLabelWithDate:(id)arg1;
- (void)_updateTimeLabelWithDate:(id)arg1 showingTime:(_Bool)arg2;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)pictureInPictureDidToggleMicrophone;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(_Bool)arg1;
- (void)playbackControlsDidToggleMuted:(_Bool)arg1;
- (double)currentScrubberResolutionForBehavior:(id)arg1;
- (void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(_Bool)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_handleApplicationWillResignActive;
- (void)_handleApplicationDidBecomeActive;
- (void)_updateIdleTimer;
- (_Bool)_homeHasSingleCameraProfile;
- (id)_microphoneGlyphForState:(_Bool)arg1;
- (id)_settingsImage;
- (id)_imageConfigurationForScrubberType;
- (long long)_imageScaleForScrubberType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_shouldAutoPlayOnViewAppearance;
- (void)_updateCanShowOverlayState;
- (_Bool)supportsRecordedClips;
- (_Bool)hasRecordedClips;
- (void)_presentInternalViewController:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)_presentNearbyAccessoriesViewController;
- (void)_presentDetailsViewController;
- (void)pauseEngineIfNeeded;
- (void)_addFooterConstraints;
- (void)_configureClipScrubberViewControllerIfNeeded;
- (void)_configureCalendarContainerViewControllerIfNeeded;
- (void)_configureFooterViewController;
- (void)_dismissEditInterface;
- (void)_removePlaybackHistoryUI;
- (void)_configureClipScrubberViewController;
- (void)_displayAudioControlsIfAvailable;
- (void)_updatePlaceholderContent;
- (void)_updateMicrophoneButtonState;
- (void)_updatePlayerVolumeSliderState;
- (_Bool)_shouldDisableLiveStreamAfterCameraStatusChange;
- (void)_updateCameraStatus;
- (void)_updateLivePreviewAspectRatio;
- (void)_updateIndicatorColor;
- (void)_updateStateForScrubbingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateStateForPlaybackPosition:(id)arg1 animated:(_Bool)arg2;
- (void)_setupPlaybackEngine;
- (void)_reloadClipsWithUpdate:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController<HUCameraPlayerScrubbing> *activeScrubberViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)_setupConstraintSets;
- (double)_cameraStatusViewConstantForTraitCollection;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile;
@property(readonly, nonatomic) HMHome *home;
- (void)_updatedRecordedClipInterfaceAvailabilityAnimated:(_Bool)arg1;
- (void)_displayAirplaneModeAlert;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)toggleDemoModeLiveStreamVideo:(_Bool)arg1;
- (void)showCameraPicker;
- (id)initWithCameraPlayerConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

