//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WLKBasicContentMetadata, WLKComingSoonInfo;

@interface WLKBrowseItem : NSObject
{
    _Bool _watchlisted;
    _Bool _watchlistable;
    WLKBasicContentMetadata *_content;
    WLKBrowseItem *_currentEpisode;
    NSArray *_playables;
    WLKComingSoonInfo *_contentComingSoonInfo;
}

+ (id)browseItemsWithDictionaries:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) WLKComingSoonInfo *contentComingSoonInfo; // @synthesize contentComingSoonInfo=_contentComingSoonInfo;
@property(readonly, nonatomic, getter=isWatchlistable) _Bool watchlistable; // @synthesize watchlistable=_watchlistable;
@property(readonly, nonatomic, getter=isWatchlisted) _Bool watchlisted; // @synthesize watchlisted=_watchlisted;
@property(readonly, nonatomic) NSArray *playables; // @synthesize playables=_playables;
@property(readonly, nonatomic) WLKBrowseItem *currentEpisode; // @synthesize currentEpisode=_currentEpisode;
@property(readonly, nonatomic) WLKBasicContentMetadata *content; // @synthesize content=_content;
- (id)preferredComingSoonInfo;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;

@end

