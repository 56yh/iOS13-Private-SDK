//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <NewsCore/FCOrderedMutableCollectionAdditions-Protocol.h>

@interface NSMutableOrderedSet (FCAdditions) <FCOrderedMutableCollectionAdditions>
- (void)fc_transformWithBlock:(id /* block */)arg1;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)fc_removeAndReturnObjectsPassingTest:(id /* block */)arg1;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
@end

