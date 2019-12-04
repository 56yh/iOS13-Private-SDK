//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IMItemsController : NSObject
{
    struct __CFArray *_items;
    unsigned long long _capacity;
}

+ (id)_charactersToIgnoreWhenParsingTextContent;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (_Bool)_trimIfNeeded;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (id)_lastIncomingFinishedMessage;
- (id)_lastIncomingMessage;
- (id)_lastFinishedMessage;
- (id)_lastSentMessage;
- (id)_lastMessage;
- (id)_firstMessage;
- (id)_typingMessage;
- (id)_itemForGUID:(id)arg1;
- (id)_member:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1;
- (void)_setSortID:(id)arg1;
- (void)_resortItems;
- (void)_replaceStaleTypingMessage;
- (void)_removeAllItems;
- (void)_replaceItems:(id)arg1;
- (void)_removeItem:(id)arg1;
- (void)_handleItem:(id)arg1;
- (void)_itemsDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_items;
- (id)_initWithItems:(id)arg1;
- (_Bool)_shouldPinUnsentMessagesToBottom;
- (void)assignSortIDsToItems:(id)arg1 shouldRecalculateSortIDForAllMessages:(_Bool)arg2;
- (void)assignSortIDsToItems:(id)arg1;
@property(readonly, nonatomic) _Bool isMoreToLoad;
- (void)dealloc;
- (id)init;

@end

