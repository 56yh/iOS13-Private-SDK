//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackStateObserving-Protocol.h>

@class NFStateMachine, NSError, NSString;
@protocol SVPlayerStatusObserving, SVPlayerTimeControlStatusObserving, SVVideoPlaybackPositionObserving;

@interface SVVideoPlaybackStateObserver : NSObject <SVVideoPlaybackStateObserving>
{
    id /* block */ changeBlock;
    id <SVPlayerStatusObserving> _statusObserver;
    id <SVVideoPlaybackPositionObserving> _playbackPositionObserver;
    id <SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
    NFStateMachine *_stateMachine;
    unsigned long long _state;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SVPlayerTimeControlStatusObserving> timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;
@property(readonly, nonatomic) id <SVVideoPlaybackPositionObserving> playbackPositionObserver; // @synthesize playbackPositionObserver=_playbackPositionObserver;
@property(readonly, nonatomic) id <SVPlayerStatusObserving> statusObserver; // @synthesize statusObserver=_statusObserver;
@property(copy, nonatomic, setter=onChange:) id /* block */ changeBlock; // @synthesize changeBlock;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (id)initWithStatusObserver:(id)arg1 playbackPositionObserver:(id)arg2 timeControlStatusObserver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

