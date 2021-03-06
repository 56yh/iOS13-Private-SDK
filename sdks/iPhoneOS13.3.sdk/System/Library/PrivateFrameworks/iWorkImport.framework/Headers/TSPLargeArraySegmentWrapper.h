//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@class TSPAbstractMutableLargeArraySegment;

__attribute__((visibility("hidden")))
@interface TSPLargeArraySegmentWrapper : NSMutableArray
{
    TSPAbstractMutableLargeArraySegment *_backingStore;
}

// - (void).cxx_destruct;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (id)initWithLargeArraySegment:(id)arg1;

@end

