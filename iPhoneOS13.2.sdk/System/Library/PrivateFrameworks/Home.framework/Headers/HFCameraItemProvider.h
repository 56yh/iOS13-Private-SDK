//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HMRoom, NSMutableSet;

@interface HFCameraItemProvider : HFItemProvider
{
    _Bool _onlyShowsFavorites;
    id /* block */ _filter;
    HMHome *_home;
    HMRoom *_room;
    NSMutableSet *_cameraItems;
}

@property(retain, nonatomic) NSMutableSet *cameraItems; // @synthesize cameraItems=_cameraItems;
@property(nonatomic) _Bool onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* block */ filter; // @synthesize filter=_filter;
- (id /* block */)_favoriteFilter;
- (id /* block */)_roomFilter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

