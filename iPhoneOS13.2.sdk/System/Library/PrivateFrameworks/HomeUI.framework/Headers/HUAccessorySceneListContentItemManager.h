//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFItem, NSMutableDictionary;
@protocol HFServiceLikeItem;

@interface HUAccessorySceneListContentItemManager : HUServiceGridItemManager
{
    _Bool _persistAddedSuggestions;
    unsigned long long _contentSource;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    NSMutableDictionary *_committedActionBuildersByActionSetID;
}

+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;
+ (id)createItemProviderForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 persistAddedSuggestions:(_Bool)arg4;
@property(readonly, nonatomic) NSMutableDictionary *committedActionBuildersByActionSetID; // @synthesize committedActionBuildersByActionSetID=_committedActionBuildersByActionSetID;
@property(nonatomic) _Bool persistAddedSuggestions; // @synthesize persistAddedSuggestions=_persistAddedSuggestions;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
@property(readonly, nonatomic) unsigned long long contentSource; // @synthesize contentSource=_contentSource;
- (id)suggestionItemProvider;
- (id)_transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)commitSelectionChangesWithSelectedItems:(id)arg1;
- (id)actionSetBuilderForItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 contentSource:(unsigned long long)arg2 serviceLikeItem:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(_Bool)arg3 shouldShowSectionHeaders:(_Bool)arg4 itemProvidersCreator:(id /* block */)arg5;

@end

