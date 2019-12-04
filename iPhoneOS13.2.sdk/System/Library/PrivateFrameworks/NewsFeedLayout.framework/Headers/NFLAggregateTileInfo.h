//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@interface NFLAggregateTileInfo : NSObject <NFLFeedTileInfo>
{
    NSString *_identifier;
    unsigned long long _tileInfoType;
    NSString *_groupIdentifier;
    long long _groupType;
    NSArray *_underlyingTileInfos;
}

@property(readonly, copy, nonatomic) NSArray *underlyingTileInfos; // @synthesize underlyingTileInfos=_underlyingTileInfos;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) unsigned long long tileInfoType; // @synthesize tileInfoType=_tileInfoType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
@property(readonly, nonatomic) _Bool pageable;
- (id)underlyingTileInfoForID:(id)arg1;
- (_Bool)underlyingTileInfosContainsTileInfoForID:(id)arg1;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
- (id)initWithGroupIdentifier:(id)arg1 underlyingTileInfos:(id)arg2 groupType:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingTileInfos:(id)arg3 groupType:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

