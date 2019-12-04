//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//


#import <SilexVideo/SVVideoQueueDiffing-Protocol.h>

@class NSOrderedSet;
@protocol SVVideo;

@protocol SVVideoQueue <SVVideoQueueDiffing, NSCopying>
@property(readonly, nonatomic) NSOrderedSet *videos;
@property(readonly, nonatomic) id <SVVideo> lastVideo;
@property(readonly, nonatomic) id <SVVideo> firstVideo;
@property(readonly, nonatomic) id <SVVideo> previousVideo;
@property(readonly, nonatomic) id <SVVideo> nextVideo;
@property(retain, nonatomic) id <SVVideo> video;
- (unsigned long long)indexOfVideo:(id <SVVideo>)arg1;
- (id <SVVideo>)videoAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfVideos;
- (id <SVVideo>)videoAfterVideo:(id <SVVideo>)arg1;
- (id <SVVideo>)videoBeforeVideo:(id <SVVideo>)arg1;
- (id <SVVideo>)previousVideoOfType:(unsigned long long)arg1;
- (id <SVVideo>)nextVideoOfType:(unsigned long long)arg1;
@end

