//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSIndexSet (CyclicRange)
+ (id)indexSetWithIndexesInCyclicRange:(struct _NSRange)arg1 itemCount:(unsigned long long)arg2;
- (struct _NSRange)_allInclusiveCyclicRangeForItemCount:(unsigned long long)arg1;
- (struct _NSRange)_filteredCyclicRangeForItemCount:(unsigned long long)arg1;
- (struct _NSRange)cyclicRangeForItemCount:(unsigned long long)arg1 includeAllIndexes:(_Bool)arg2;
@end
