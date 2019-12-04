//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSString, NSURL;

@interface SKUISwooshPageComponent : SKUIPageComponent
{
    NSArray *_bricks;
    long long _fcKind;
    NSArray *_lockups;
    struct SKUILockupStyle _lockupStyle;
    NSArray *_mediaComponents;
    long long _missingDataCount;
    NSString *_platformKeyProfile;
    long long _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    _Bool _showsIndexNumbers;
    _Bool _showsItemTitles;
    long long _swooshType;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long swooshType; // @synthesize swooshType=_swooshType;
@property(readonly, nonatomic) _Bool showsIndexNumbers; // @synthesize showsIndexNumbers=_showsIndexNumbers;
@property(readonly, nonatomic) NSURL *seeAllURL; // @synthesize seeAllURL=_seeAllURL;
@property(readonly, nonatomic) NSString *seeAllTitle; // @synthesize seeAllTitle=_seeAllTitle;
@property(readonly, nonatomic) long long seeAllStyle; // @synthesize seeAllStyle=_seeAllStyle;
@property(readonly, nonatomic) NSString *platformKeyProfile; // @synthesize platformKeyProfile=_platformKeyProfile;
@property(readonly, nonatomic) NSArray *mediaComponents; // @synthesize mediaComponents=_mediaComponents;
@property(readonly, nonatomic) struct SKUILockupStyle lockupStyle; // @synthesize lockupStyle=_lockupStyle;
@property(readonly, nonatomic) NSArray *lockups; // @synthesize lockups=_lockups;
@property(readonly, nonatomic) NSArray *bricks; // @synthesize bricks=_bricks;
- (void)_updateLockup:(id)arg1 withItem:(id)arg2;
- (void)_setSeeAllValuesWithLinkInfo:(id)arg1;
- (void)_reloadMissingDataCount;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (id)_mediaComponentsWithChildren:(id)arg1 context:(id)arg2;
- (id)_lockupWithItemIdentifier:(id)arg1 context:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 context:(id)arg2;
- (struct SKUILockupStyle)_lockupStyleWithLockups:(id)arg1;
- (_Bool)_isBrickAvailable:(id)arg1 withPageContext:(id)arg2;
- (unsigned long long)_defaultVisibleFieldsForItemKind:(long long)arg1;
- (id)_brickItemsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (id)_brickItemsWithChildren:(id)arg1 customPageContext:(id)arg2;
- (void)_updateLockupItemsWithLookupResponse:(id)arg1;
- (id)_updateLockupItemsWithItems:(id)arg1;
- (void)_updateBricksWithItems:(id)arg1;
- (id)valueForMetricsField:(id)arg1;
- (id)metricsElementName;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (long long)componentType;
@property(readonly, nonatomic) _Bool showsMediaTitles;
@property(readonly, nonatomic) _Bool showsBrickTitles;
- (_Bool)isMissingItemData;
- (id)initWithRoomContext:(id)arg1;
- (id)initWithRelatedContentContext:(id)arg1;
- (id)initWithLockups:(id)arg1 swooshType:(long long)arg2 title:(id)arg3;
- (id)initWithItemList:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

@end

