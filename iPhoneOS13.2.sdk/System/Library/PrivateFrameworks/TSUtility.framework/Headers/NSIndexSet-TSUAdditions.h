//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSIndexSet (TSUAdditions)
+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
@property(readonly, nonatomic) _Bool tsu_isSingleContiguousRange;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
@end

