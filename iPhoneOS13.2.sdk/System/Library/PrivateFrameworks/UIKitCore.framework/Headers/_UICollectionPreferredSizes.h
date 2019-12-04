//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <UIKitCore/_UICollectionPreferredSizes-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSizes : NSObject <_UICollectionPreferredSizes, NSCopying>
{
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    long long _frameOffset;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;
}

@property(retain, nonatomic) id <_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets; // @synthesize supplementaryBaseOffsets=_supplementaryBaseOffsets;
@property(nonatomic) long long frameOffset; // @synthesize frameOffset=_frameOffset;
- (id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2;
- (_Bool)containsSupplementaryOffsets:(id)arg1;
- (void)addPreferredSize:(id)arg1 forSupplementaryWithElementKind:(id)arg2 atIndex:(long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSIndexSet *indexes;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (_Bool)hasSizes;
- (id)init;
- (id)initWithSizes:(id)arg1 indexes:(id)arg2 supplementarySizesDict:(id)arg3 frameOffset:(long long)arg4 supplementaryBaseOffsets:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

