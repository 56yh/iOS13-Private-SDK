//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTMergeListWrapper : NSObject
{
    vector_e87daf7b _mergeList;
}

- (id).cxx_construct;
- (id)regionForList;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (void)addRange:(struct TSUCellRect)arg1;
@property(readonly) _Bool isEmpty;
@property(readonly) unsigned long long count;
- (id)initWithMergeList:(const vector_e87daf7b *)arg1;

@end

