//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSArray (_PASAdditions)
- (void)_pas_enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)_pas_shuffledArrayUsingRng:(id)arg1;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 accumulate:(id /* block */)arg2;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 indexedAccumulate:(id /* block */)arg2;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 accumulate:(id /* block */)arg2;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 indexedAccumulate:(id /* block */)arg2;
- (id)_pas_filteredArrayWithTest:(id /* block */)arg1;
- (id)_pas_filteredArrayWithIndexedTest:(id /* block */)arg1;
- (id)_pas_mappedArrayWithTransform:(id /* block */)arg1;
- (id)_pas_mappedArrayWithIndexedTransform:(id /* block */)arg1;
@end

