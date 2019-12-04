//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NSArray;

@interface NFLHorizontalSubBatchLayout : NFLSubBatchLayout
{
    NSArray *_components;
}

@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)singleComponentLayouts;
- (unsigned long long)rowSpan;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (id)tileInfosUsed;
- (_Bool)isValid;
- (id)initWithFeedSettings:(id)arg1 components:(id)arg2;
- (id)initWithFeedSettings:(id)arg1;

@end

