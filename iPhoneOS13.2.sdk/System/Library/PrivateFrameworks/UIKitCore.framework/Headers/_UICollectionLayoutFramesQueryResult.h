//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <UIKitCore/_UICollectionLayoutFramesQueryResult-Protocol.h>

@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;
@protocol _UICollectionLayoutAuxillaryItem;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutFramesQueryResult : NSObject <_UICollectionLayoutFramesQueryResult, NSCopying>
{
    long long _index;
    long long _zIndex;
    long long _resultKind;
    NSCollectionLayoutItem *_item;
    NSUUID *_supplementaryEnrollmentIdentifier;
    long long _auxillaryKind;
    struct CGRect _frame;
}

+ (id)kindIndexKeyForKind:(id)arg1 index:(long long)arg2;
@property(readonly, nonatomic) long long auxillaryKind; // @synthesize auxillaryKind=_auxillaryKind;
@property(readonly, nonatomic) NSUUID *supplementaryEnrollmentIdentifier; // @synthesize supplementaryEnrollmentIdentifier=_supplementaryEnrollmentIdentifier;
@property(readonly, nonatomic) NSCollectionLayoutItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long resultKind; // @synthesize resultKind=_resultKind;
@property(readonly, nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)copyWithIndex:(long long)arg1;
- (id)copyWithFrame:(struct CGRect)arg1 index:(long long)arg2;
- (id)copyWithOffset:(struct CGPoint)arg1;
- (id)copyWithOffset:(struct CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3;
- (id)kindIndexKey;
@property(readonly, nonatomic) _Bool isAuxillaryKindItem;
@property(readonly, nonatomic) _Bool isAuxillaryKindGroup;
@property(readonly, nonatomic) _Bool isAuxillaryKindSection;
@property(readonly, nonatomic) _Bool isAuxillaryKindGlobal;
@property(readonly, nonatomic) _Bool isItem;
@property(readonly, nonatomic) _Bool isAuxillary;
@property(readonly, nonatomic) _Bool isDecoration;
@property(readonly, nonatomic) _Bool isSupplementary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) long long effectiveZIndex;
@property(readonly, nonatomic) id <_UICollectionLayoutAuxillaryItem> auxillaryItem;
@property(readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5 auxillaryKind:(long long)arg6 supplementaryEnrollmentIdentifier:(id)arg7;

@end

