//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, SXAVPlayer, SXImageView, SXVideoResource;

@interface SXVideoFillPlayerView : UIView
{
    _Bool _shouldLoop;
    _Bool _hasRequestedPlayback;
    unsigned long long _fillMode;
    SXVideoResource *_videoResource;
    AVPlayerLayer *_playerLayer;
    SXAVPlayer *_player;
    SXImageView *_stillImageView;
}

@property(nonatomic) _Bool hasRequestedPlayback; // @synthesize hasRequestedPlayback=_hasRequestedPlayback;
@property(retain, nonatomic) SXImageView *stillImageView; // @synthesize stillImageView=_stillImageView;
@property(retain, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) SXVideoResource *videoResource; // @synthesize videoResource=_videoResource;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playIfPossible;
- (void)switchToPlayer;
- (void)reset;
- (void)pause;
- (void)play;
- (void)layoutSubviews;
- (id)initWithVideoResource:(id)arg1 imageView:(id)arg2;

@end

