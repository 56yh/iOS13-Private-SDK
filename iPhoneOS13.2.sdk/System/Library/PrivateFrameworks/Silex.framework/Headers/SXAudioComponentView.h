//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import <Silex/AVPlayerViewControllerDelegate_AppStoreOnly-Protocol.h>
#import <Silex/SXMediaPlaybackDelegate-Protocol.h>

@class AVPlayerViewController, NSString, SXAVPlayer, SXAudioComponentOverlayView;
@protocol SXHost, SXResourceDataSource;

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate, AVPlayerViewControllerDelegate_AppStoreOnly>
{
    _Bool _audioHasPlayed;
    _Bool _startPlaybackWhenReady;
    id <SXResourceDataSource> _resourceDataSource;
    id <SXHost> _host;
    SXAudioComponentOverlayView *_overlayView;
    AVPlayerViewController *_playerViewController;
    SXAVPlayer *_player;
    id /* block */ _cancelHandler;
}

@property(copy, nonatomic) id /* block */ cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(nonatomic) _Bool startPlaybackWhenReady; // @synthesize startPlaybackWhenReady=_startPlaybackWhenReady;
@property(nonatomic) _Bool audioHasPlayed; // @synthesize audioHasPlayed=_audioHasPlayed;
@property(retain, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) SXAudioComponentOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (_Bool)allowHierarchyRemoval;
- (void)submitMediaEngageCompleteEvent;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)arg1;
- (unsigned long long)analyticsMediaType;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hidePlaybackControls;
- (void)showPlaybackControls;
- (void)pauseMediaPlayback;
- (void)playbackStarted;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackFinished;
- (_Bool)shouldAutoStartPlayback;
- (void)loadAudio;
- (void)loadImage;
- (void)setupPlayerViewControllerWithPlayer:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)layoutViews;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 host:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

