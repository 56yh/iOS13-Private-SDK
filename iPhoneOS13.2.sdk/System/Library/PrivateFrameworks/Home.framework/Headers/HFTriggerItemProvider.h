//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFTriggerItemProvider : HFItemProvider
{
    id /* block */ _filter;
    HMHome *_home;
    NSMutableSet *_triggerItems;
}

@property(retain, nonatomic) NSMutableSet *triggerItems; // @synthesize triggerItems=_triggerItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* block */ filter; // @synthesize filter=_filter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

