//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject
{
    unsigned long long _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}

- (_Bool)_isFeedRelevant:(unsigned long long)arg1;
- (void)_purgeOldestNodes;
- (void)_deleteNode:(id)arg1;
- (id)_findNodeForBulletinID:(id)arg1;
- (id)cachedBulletinForID:(id)arg1;
- (id)allBulletins;
- (_Bool)removeBulletinForID:(id)arg1;
- (void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2;
- (id)init;

@end

