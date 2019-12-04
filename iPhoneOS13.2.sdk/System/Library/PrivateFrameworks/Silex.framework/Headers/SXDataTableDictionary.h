//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableArray, NSMutableIndexSet;

@interface SXDataTableDictionary : NSObject <NSFastEnumeration>
{
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
    NSMutableIndexSet *_indexes;
    NSMutableArray *_storage;
}

+ (id)dataTableDictionaryWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableArray *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSMutableIndexSet *indexes; // @synthesize indexes=_indexes;
@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (id)description;
- (id)arrayWithObject:(id)arg1 forCount:(unsigned long long)arg2;
- (unsigned long long)indexForIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_2fea82da)indexPathForIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)removeObjectForIndexPath:(CDStruct_2fea82da)arg1;
- (void)setObject:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (id)objectForIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_2fea82da)indexPathOfObject:(id)arg1;
- (id)initWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;

@end

