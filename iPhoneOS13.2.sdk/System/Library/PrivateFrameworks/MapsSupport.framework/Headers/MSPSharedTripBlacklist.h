//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripBlacklist : NSObject
{
    NSMutableSet *_blockIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUbiquitousKeyValueStore *_kvStore;
    NSDate *_lastUpdateDate;
}

- (id)description;
- (void)updateBlockedListFromStore:(id)arg1;
- (void)_loadIdentifiers;
- (void)_storeIdentifiers;
- (void)clearList;
- (void)unblockIdentifiers:(id)arg1;
- (void)blockIdentifier:(id)arg1;
- (_Bool)containsIdentifier:(id)arg1;
- (_Bool)containsAnyIdentifiersInArray:(id)arg1;
- (id)init;

@end
