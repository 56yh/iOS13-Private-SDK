//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject
{
    NSMutableOrderedSet *_itemsWithExactNameMatch;
    NSMutableOrderedSet *_itemsWithNameMatch;
    NSMutableOrderedSet *_itemsWithCategoryMatch;
    NSMutableOrderedSet *_itemsWithKeywordMatch;
}

- (id)rankedItems;
- (void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2;
- (void)addItem:(id)arg1 forType:(unsigned long long)arg2;
- (id)orderedSetForType:(unsigned long long)arg1;
- (id)init;

@end

