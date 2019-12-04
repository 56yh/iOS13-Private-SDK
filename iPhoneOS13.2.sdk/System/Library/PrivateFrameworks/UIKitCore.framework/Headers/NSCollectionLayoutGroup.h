//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSCollectionLayoutItem.h>



@class NSArray, NSCollectionLayoutSpacing;

@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <NSCopying>
{
    _Bool _hasCheckedIfDecorationItemRequiresRegistration;
    _Bool __hasDecorationItemRequiringRegistration;
    NSCollectionLayoutSpacing *_interItemSpacing;
    NSArray *_subitems;
    long long _layoutDirection;
    NSArray *_visualFormats;
    id /* block */ _customGroupItemProvider;
    id /* block */ _itemsProvider;
    id /* block */ _visualFormatItemProvider;
    long long _count;
    long long _groupOptions;
}

+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(id /* block */)arg3;
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(id /* block */)arg2;
+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(id /* block */)arg2;
+ (id)customGroupWithLayoutSize:(id)arg1 itemProvider:(id /* block */)arg2;
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
@property(nonatomic) long long groupOptions; // @synthesize groupOptions=_groupOptions;
@property(nonatomic) _Bool _hasDecorationItemRequiringRegistration; // @synthesize _hasDecorationItemRequiringRegistration=__hasDecorationItemRequiringRegistration;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) id /* block */ visualFormatItemProvider; // @synthesize visualFormatItemProvider=_visualFormatItemProvider;
@property(copy, nonatomic) id /* block */ itemsProvider; // @synthesize itemsProvider=_itemsProvider;
@property(copy, nonatomic) id /* block */ customGroupItemProvider; // @synthesize customGroupItemProvider=_customGroupItemProvider;
@property(copy, nonatomic) NSArray *visualFormats; // @synthesize visualFormats=_visualFormats;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(copy, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
@property(copy, nonatomic) NSCollectionLayoutSpacing *interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
- (_Bool)_isListSolverCompatibleForLayoutAxis:(int)arg1;
- (id)_effectiveSizeForSize:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;
- (id)_effectiveCopiedSubitemsForSubitems:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)visualDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasVisualFormat;
- (_Bool)hasItemProvider;
- (_Bool)isCustomGroup;
- (int)layoutAxis;
- (_Bool)isHorizontalGroup;
- (_Bool)isVerticalGroup;
- (id)description;
- (id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(struct NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 visualFormats:(id)arg9 itemsProvider:(id /* block */)arg10 visualFormatItemProvider:(id /* block */)arg11 customGroupItemProvider:(id /* block */)arg12 options:(long long)arg13 name:(id)arg14 identifier:(id)arg15;

// Remaining properties
@property(copy, nonatomic) NSArray *supplementaryItems; // @dynamic supplementaryItems;

@end

