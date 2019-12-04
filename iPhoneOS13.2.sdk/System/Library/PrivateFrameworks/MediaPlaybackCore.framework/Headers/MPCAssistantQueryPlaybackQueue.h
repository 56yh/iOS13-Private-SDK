//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class MPMediaItem, MPMediaQuery;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue
{
    MPMediaQuery *_query;
    MPMediaItem *_firstItem;
    long long _shuffleType;
}

+ (id)queryQueueWithContextID:(id)arg1 query:(id)arg2;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(retain, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 query:(id)arg2;

@end

