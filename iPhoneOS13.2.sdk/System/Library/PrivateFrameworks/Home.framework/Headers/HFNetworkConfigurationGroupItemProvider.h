//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFNetworkConfigurationGroupItemProvider : HFItemProvider
{
    HMHome *_home;
    NSMutableSet *_groupItems;
}

@property(retain, nonatomic) NSMutableSet *groupItems; // @synthesize groupItems=_groupItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end

