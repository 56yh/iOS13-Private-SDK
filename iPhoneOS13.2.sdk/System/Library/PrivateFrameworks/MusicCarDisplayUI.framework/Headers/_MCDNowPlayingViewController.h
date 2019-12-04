//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MCDPlayModeControlView, MCDProgressView, MCDShadowImageView, MCDSongDetailsView, MCDTransportControlView, NSArray, NSMutableDictionary, NSString, UIColor, UIFocusContainerGuide, UIImageView, UILongPressGestureRecognizer, UINavigationBar, UITapGestureRecognizer;
@protocol MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate;

@interface _MCDNowPlayingViewController : UIViewController
{
    long long _heldAction;
    UINavigationBar *_navigationBar;
    UIColor *_navbarColor;
    double _scale;
    double _contentAspectRatio;
    _Bool _navbarHidesShadow;
    _Bool _highTouchMode;
    _Bool _handledWillAppear;
    _Bool _needsUpdate;
    _Bool _needsConstraintUpdate;
    NSMutableDictionary *_constraintCache;
    _Bool _albumArtAllowed;
    MCDTransportControlView *_transportControlView;
    MCDPlayModeControlView *_playModeControlView;
    MCDSongDetailsView *_songDetailsView;
    id <MCDNowPlayingViewControllerDelegate> _delegate;
    id <MCDNowPlayingViewControllerDataSource> _dataSource;
    MCDProgressView *_progressView;
    UIImageView *_artworkView;
    UITapGestureRecognizer *_knobPressRecognizer;
    UITapGestureRecognizer *_backPressRecognizer;
    UITapGestureRecognizer *_leftNudgePressRecognizer;
    UITapGestureRecognizer *_rightNudgePressRecognizer;
    UILongPressGestureRecognizer *_leftNudgeLongPressRecognizer;
    UILongPressGestureRecognizer *_rightNudgeLongPressRecognizer;
    UILongPressGestureRecognizer *_leftButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_fastForwardButtonLongPressRecognizer;
    UIFocusContainerGuide *_controlsFocusContainerGuide;
    NSString *_previousTransportButtonImageIdentifier;
    NSString *_forwardTransportButtonImageIdentifier;
    NSString *_playPauseTransportButtonImageIdentifier;
    long long _layoutType;
    MCDShadowImageView *_artworkViewBrick;
    NSArray *_activeConstraints;
    struct CGRect _nowPlayingContentRect;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(readonly, nonatomic) MCDShadowImageView *artworkViewBrick; // @synthesize artworkViewBrick=_artworkViewBrick;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct CGRect nowPlayingContentRect; // @synthesize nowPlayingContentRect=_nowPlayingContentRect;
@property(retain, nonatomic) NSString *playPauseTransportButtonImageIdentifier; // @synthesize playPauseTransportButtonImageIdentifier=_playPauseTransportButtonImageIdentifier;
@property(retain, nonatomic) NSString *forwardTransportButtonImageIdentifier; // @synthesize forwardTransportButtonImageIdentifier=_forwardTransportButtonImageIdentifier;
@property(retain, nonatomic) NSString *previousTransportButtonImageIdentifier; // @synthesize previousTransportButtonImageIdentifier=_previousTransportButtonImageIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *controlsFocusContainerGuide; // @synthesize controlsFocusContainerGuide=_controlsFocusContainerGuide;
@property(retain, nonatomic) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer; // @synthesize fastForwardButtonLongPressRecognizer=_fastForwardButtonLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *leftButtonLongPressRecognizer; // @synthesize leftButtonLongPressRecognizer=_leftButtonLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer; // @synthesize rightNudgeLongPressRecognizer=_rightNudgeLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer; // @synthesize leftNudgeLongPressRecognizer=_leftNudgeLongPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *rightNudgePressRecognizer; // @synthesize rightNudgePressRecognizer=_rightNudgePressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftNudgePressRecognizer; // @synthesize leftNudgePressRecognizer=_leftNudgePressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *backPressRecognizer; // @synthesize backPressRecognizer=_backPressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *knobPressRecognizer; // @synthesize knobPressRecognizer=_knobPressRecognizer;
@property(readonly, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(readonly, nonatomic) MCDProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic, getter=isAlbumArtAllowed) _Bool albumArtAllowed; // @synthesize albumArtAllowed=_albumArtAllowed;
@property(nonatomic) __weak id <MCDNowPlayingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MCDNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MCDSongDetailsView *songDetailsView; // @synthesize songDetailsView=_songDetailsView;
@property(readonly, nonatomic) MCDPlayModeControlView *playModeControlView; // @synthesize playModeControlView=_playModeControlView;
@property(readonly, nonatomic) MCDTransportControlView *transportControlView; // @synthesize transportControlView=_transportControlView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_recalculateLayout:(_Bool)arg1;
- (void)_invalidateConstraintCache;
- (void)layoutStyleDidChange;
- (void)setNowPlayingLayout:(long long)arg1 forceChange:(_Bool)arg2;
- (_Bool)isCompactHeight;
- (_Bool)isCompactWidth;
- (void)updateLayoutStyle:(_Bool)arg1;
- (void)updateLayoutStyle;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (void)_initializeTransportControls;
- (void)_playbackButtonTouchUp:(id)arg1;
- (void)_addToLibraryButtonTouchUp:(id)arg1;
- (void)_moreButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonLongPress:(id)arg1;
- (void)_rightNudgePress:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_leftNudgePress:(id)arg1;
- (void)_leftButtonLongPress:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_sendHeldAction;
- (void)_respondToHeldAction;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_playPauseButtonTouchDown:(id)arg1;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)reloadData;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_updatePlaybackRate;
- (void)_updateShuffleStateWithType:(long long)arg1;
- (void)_updateRepeatStateWithType:(long long)arg1;
- (void)_updatePlayModesState;
- (void)_updateBackgroundEffect;
- (void)updatePlayControls;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_handleWillAppear;
- (double)_artBrickScale;
- (_Bool)_showsButtonSelectionsForTouch;
- (id)constraintsForLayoutType:(long long)arg1;
- (void)updateViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

