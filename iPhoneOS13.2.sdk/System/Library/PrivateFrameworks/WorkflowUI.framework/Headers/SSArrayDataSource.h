//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/SSBaseDataSource.h>

@class NSMutableArray, NSString;

@interface SSArrayDataSource : SSBaseDataSource
{
    id _target;
    NSString *_keyPath;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterKVO;
- (void)registerKVO;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)indexPathForItemWithId:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)removeItemsInRange:(struct _NSRange)arg1;
- (void)moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceItemsAtIndexes:(id)arg1 withItemsFromArray:(id)arg2;
- (void)replaceItemsInRange:(struct _NSRange)arg1 withItemsFromArray:(id)arg2;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendItems:(id)arg1;
- (void)appendItem:(id)arg1;
- (id)allItems;
- (void)updateItems:(id)arg1;
- (void)removeAllItems;
- (void)clearItems;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

