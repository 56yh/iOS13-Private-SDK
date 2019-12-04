//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSSet;

@interface HFUniqueArrayDiff : NSObject
{
    NSArray *_fromArray;
    NSArray *_toArray;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_changedIndexes;
    NSSet *_movedIndexes;
}

+ (id)_createContainerSetFromArray:(id)arg1 options:(id)arg2;
+ (id)diffFromArray:(id)arg1 toArray:(id)arg2 options:(id)arg3;
@property(retain, nonatomic) NSSet *movedIndexes; // @synthesize movedIndexes=_movedIndexes;
@property(retain, nonatomic) NSIndexSet *changedIndexes; // @synthesize changedIndexes=_changedIndexes;
@property(retain, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(retain, nonatomic) NSIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
@property(retain, nonatomic) NSArray *toArray; // @synthesize toArray=_toArray;
@property(retain, nonatomic) NSArray *fromArray; // @synthesize fromArray=_fromArray;
- (void)enumerateMovesUsingBlock:(id /* block */)arg1;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)enumerateDeletesUsingBlock:(id /* block */)arg1;
- (void)enumerateInsertsUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) unsigned long long numberOfOperations;

@end
