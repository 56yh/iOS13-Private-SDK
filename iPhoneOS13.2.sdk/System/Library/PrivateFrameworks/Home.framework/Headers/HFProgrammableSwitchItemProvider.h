//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFProgrammableSwitchItemProvider : HFItemProvider
{
    id /* block */ _filter;
    HMHome *_home;
    NSMutableSet *_programmableSwitchAccessoryItems;
}

@property(retain, nonatomic) NSMutableSet *programmableSwitchAccessoryItems; // @synthesize programmableSwitchAccessoryItems=_programmableSwitchAccessoryItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* block */ filter; // @synthesize filter=_filter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end

