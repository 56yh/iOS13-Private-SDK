//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsTransport/NTPBArticleRecord.h>

@class NSArray;

@interface NTPBArticleRecord (FCAdditions)
@property(readonly, nonatomic) NSArray *topicIDs;
- (_Bool)isAllowedInStorefront:(id)arg1;
- (id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1;
- (id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1;
- (id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2;
@end

