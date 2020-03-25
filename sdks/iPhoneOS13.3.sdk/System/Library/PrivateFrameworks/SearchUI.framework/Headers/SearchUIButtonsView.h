//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerBoxView.h>

@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView
{
    SearchUIMovieCardSectionView *_cardSectionView;
}

@property __weak SearchUIMovieCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
// - (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (id)buttonForChannelOffer:(id)arg1 channel:(id)arg2 episode:(id)arg3;
- (id)buttonForOffer:(id)arg1 playable:(id)arg2;
- (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(BOOL)arg3 isContinuing:(BOOL)arg4 isContainerItem:(BOOL)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7;
- (id)buttonForPlayable:(id)arg1;
- (BOOL)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;
- (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(BOOL)arg4 isUpNexted:(BOOL)arg5;
- (void)sendErrorFeedbackIfNecessary:(id)arg1;
- (void)fetchButtonsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCardSectionView:(id)arg1;

@end
