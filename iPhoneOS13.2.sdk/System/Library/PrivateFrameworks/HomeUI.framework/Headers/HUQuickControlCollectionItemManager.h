//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUQuickControlCollectionItemManaging-Protocol.h>

@class HFItem, HFItemProvider, NSString;
@protocol NSCopying;

@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging>
{
    HFItemProvider *_gridItemProvider;
    HFItem<NSCopying> *_supplementaryItem;
    id /* block */ _gridItemProviderCreator;
    id /* block */ _supplementaryItemProviderCreator;
    HFItemProvider *_supplementaryItemProvider;
}

@property(retain, nonatomic) HFItemProvider *supplementaryItemProvider; // @synthesize supplementaryItemProvider=_supplementaryItemProvider;
@property(readonly, copy, nonatomic) id /* block */ supplementaryItemProviderCreator; // @synthesize supplementaryItemProviderCreator=_supplementaryItemProviderCreator;
@property(readonly, copy, nonatomic) id /* block */ gridItemProviderCreator; // @synthesize gridItemProviderCreator=_gridItemProviderCreator;
@property(readonly, copy, nonatomic) HFItem<NSCopying> *supplementaryItem; // @synthesize supplementaryItem=_supplementaryItem;
@property(retain, nonatomic) HFItemProvider *gridItemProvider; // @synthesize gridItemProvider=_gridItemProvider;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (_Bool)isGridItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(id /* block */)arg2 supplementaryItemProviderCreator:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

