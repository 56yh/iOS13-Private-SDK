//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFActionSetItemProvider, HFReorderableHomeKitItemList, HMRoom;

@interface HUGridActionSetItemManager : HFItemManager
{
    _Bool _onlyShowsFavorites;
    HMRoom *_room;
    unsigned long long _actionSetStyle;
    HFActionSetItemProvider *_actionSetItemProvider;
    HFReorderableHomeKitItemList *_clientReorderableActionSetList;
}

@property(retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableActionSetList; // @synthesize clientReorderableActionSetList=_clientReorderableActionSetList;
@property(retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider; // @synthesize actionSetItemProvider=_actionSetItemProvider;
@property(readonly, nonatomic) unsigned long long actionSetStyle; // @synthesize actionSetStyle=_actionSetStyle;
@property(nonatomic) _Bool onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void)_updateFilters;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemForSorting;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
@property(retain, nonatomic) HFReorderableHomeKitItemList *reorderableActionSetList;
- (id)actionSetItemAssociatedWithActionSet:(id)arg1;
- (id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned long long)arg2 room:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

