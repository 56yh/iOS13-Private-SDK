//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface MCDNowPlayingObserver : NSObject
{
    NSHashTable *_observers;
    unsigned int _playbackState;
    NSString *_bundleIdentifier;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_notifyObservers;
- (unsigned int)queryPlaybackState;
- (void)playbackStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

