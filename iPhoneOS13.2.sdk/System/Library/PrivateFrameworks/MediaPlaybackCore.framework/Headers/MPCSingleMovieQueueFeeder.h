//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <MediaPlaybackCore/MPCQueueControllerDataSource-Protocol.h>

@class MPMovie, NSString;
@protocol MPMutableIdentifierListSection;

@interface MPCSingleMovieQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource>
{
    NSString *_uniqueIdentifier;
    MPMovie *_movie;
    NSString *_movieIdentifier;
    id <MPMutableIdentifierListSection> _section;
}

@property(readonly, nonatomic) id <MPMutableIdentifierListSection> section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *movieIdentifier; // @synthesize movieIdentifier=_movieIdentifier;
@property(retain, nonatomic) MPMovie *movie; // @synthesize movie=_movie;
- (id)uniqueIdentifier;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(id /* block */)arg2;
@property(readonly, nonatomic) _Bool containsTransportableContent;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (id)playbackInfoForItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

