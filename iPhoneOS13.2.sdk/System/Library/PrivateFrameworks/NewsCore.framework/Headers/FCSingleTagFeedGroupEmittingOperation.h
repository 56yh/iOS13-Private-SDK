//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (void)_fetchPinnedHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (_Bool)_runningPPT;
- (id)feedTransformations;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performOperation;

@end

