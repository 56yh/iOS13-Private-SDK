//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

@class AVPlayer, AVPlayerItem, AVVideoComposition, ISWrappedAVAudioSession, NSArray, NSError, NSMutableDictionary, NSObject;
@protocol ISWrappedAVPlayerDelegate, OS_dispatch_queue;

@interface ISWrappedAVPlayer : ISObservable
{
    NSObject<OS_dispatch_queue> *_avPlayerQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AVPlayer *_playerQueue_avPlayer;
    ISWrappedAVAudioSession *_playerQueue_wrappedAudioSession;
    id _playerQueue_playerItemDidPlayToEndObserver;
    AVPlayerItem *_ivarQueue_currentItem;
    long long _ivarQueue_status;
    NSError *_ivarQueue_error;
    float _ivarQueue_rate;
    float _ivarQueue_volume;
    CDStruct_e83c9415 _ivarQueue_loopTimeRange;
    _Bool _ivarQueue_loopingEnabled;
    _Bool _ivarQueue_audioEnabled;
    long long _ivarQueue_itemStatus;
    NSError *_ivarQueue_itemError;
    CDStruct_1b6d18a9 _ivarQueue_itemForwardPlaybackEndTime;
    CDStruct_1b6d18a9 _ivarQueue_itemDuration;
    _Bool _ivarQueue_itemPlaybackBufferFull;
    AVVideoComposition *_ivarQueue_itemVideoComposition;
    _Bool _ivarQueue_itemIsLikelyToKeepUp;
    _Bool _ivarQueue_itemPlaybackBufferEmpty;
    NSArray *_ivarQueue_currentItemLoadedTimeRanges;
    NSMutableDictionary *_observersByID;
    void *_ivarQueueIdentifier;
    _Bool _playerQueue_didBeginObservingPlayer;
    id <ISWrappedAVPlayerDelegate> _delegate;
}

+ (id)observedAVPIKeysAndContexts;
+ (id)observedAVPKeys;
@property __weak id <ISWrappedAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setWrappedAudioSession:(id)arg1;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(id /* block */)arg4;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(id /* block */)arg2;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize)arg1;
- (void)pause;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)playToTime:(CDStruct_1b6d18a9)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(id /* block */)arg4;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)setLoopTimeRange:(CDStruct_e83c9415)arg1;
- (void)setLoopingEnabled:(_Bool)arg1 withTemplateItem:(id)arg2;
@property(getter=isLoopingEnabled) _Bool loopingEnabled;
- (_Bool)isAudioEnabled;
- (void)_playerQueue_updatePlayerItemAudioTracksEnabled;
- (void)setAudioEnabled:(_Bool)arg1;
- (CDStruct_1b6d18a9)itemForwardPlaybackEndTime;
- (CDStruct_1b6d18a9)currentTime;
- (float)volume;
- (float)rate;
- (id)currentItem;
- (id)error;
- (id)currentItemError;
- (id)currentItemVideoComposition;
- (_Bool)currentItemIsLikelyToKeepUp;
- (_Bool)currentItemPlaybackBufferEmpty;
- (_Bool)currentItemPlaybackBufferFull;
- (id)currentItemLoadedTimeRanges;
- (CDStruct_1b6d18a9)currentItemDuration;
- (long long)currentItemStatus;
- (long long)status;
- (CDStruct_e83c9415)loopTimeRange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_nilOrValue:(id)arg1;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (void)_playerQueue_stopObservingPlayerItem:(id)arg1;
- (void)_playerQueue_startObservingPlayerItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)_nextObserverUID;
- (void)setItemBlendsVideoFrames:(_Bool)arg1;
- (void)setItemForwardEndPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)attachToPlayerLayerIfNeeded:(id)arg1;
- (void)dealloc;
- (id)_playerQueue_avPlayer;
- (id)init;
- (id)_initWithAVPlayer:(id)arg1;
- (void)_assertOnIvarQueue;
- (_Bool)_isOnIvarQueue;
- (void)_performIvarWrite:(id /* block */)arg1;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performPlayerTransaction:(id /* block */)arg1;
- (id)mutableChangeObject;

@end

