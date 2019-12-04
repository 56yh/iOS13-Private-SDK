//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDoubleLinkedList, NSCountedSet, NSMutableDictionary;

@interface CKCurrentConversationsManager : NSObject
{
    NSCountedSet *_currentConversations;
    NSMutableDictionary *_idToNodeDictionary;
    IMDoubleLinkedList *_orderedKeys;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMDoubleLinkedList *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
@property(retain, nonatomic) NSMutableDictionary *idToNodeDictionary; // @synthesize idToNodeDictionary=_idToNodeDictionary;
@property(retain, nonatomic) NSCountedSet *currentConversations; // @synthesize currentConversations=_currentConversations;
@property(readonly, nonatomic) unsigned long long cacheSize;
- (void)_prepareToDumpCachedConversation:(id)arg1;
- (_Bool)_canDumpConversationFromCache:(id)arg1;
- (void)loadHistoryForConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(_Bool)arg2;
- (void)pruneCacheToSize:(unsigned long long)arg1;
- (void)pruneCache;
- (void)purgeConversations:(id)arg1;
- (void)purgeConversation:(id)arg1;
- (void)removeConversation:(id)arg1;
- (void)addConversation:(id)arg1;

@end

