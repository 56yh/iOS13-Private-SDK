//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIView;
@protocol PXTrimToolPlayerObserver;

@protocol PXTrimToolPlayerWrapper 
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) UIView *loupePlayerView;
@property(nonatomic) __weak id <PXTrimToolPlayerObserver> playerObserver;
- (void)stopPeriodicTimeObserver;
- (void)startPeriodicTimeObserver;
- (void)pause;
- (void)play;
- (void)invalidateComposition;
- (void)requestPlayerItemWithCompletion:(void (^)(AVPlayerItem *))arg1;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(_Bool)arg2 exact:(_Bool)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@end

