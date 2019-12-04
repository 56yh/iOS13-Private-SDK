//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXArrayChangeDetails.h>

@interface PXMutableArrayChangeDetails : PXArrayChangeDetails
{
    _Bool _isNonIncremental;
}

+ (_Bool)_mutableCopyInputs;
+ (id)changeDetailsWithNoIncrementalChanges;
- (void)addChangeDetails:(id)arg1;
- (void)_updateChangedIndexesWithChangeDetails:(id)arg1;
- (void)_updateMovesWithChangesDetails:(id)arg1;
- (void)_addInsertedIndexes:(id)arg1;
- (void)_addInsertedRange:(struct _NSRange)arg1;
- (void)_addRemovedIndexes:(id)arg1;
- (void)_addRemovedIndex:(unsigned long long)arg1;
- (void)_addAdditionalRemovedIndexSet:(id)arg1 afterChangesIndex:(id)arg2;
- (void)_addAdditionalRemovedIndex:(unsigned long long)arg1 afterChangesIndex:(unsigned long long)arg2;
- (void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)arg1;
- (void)_becomeNonIncremental;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasIncrementalChanges;

@end

