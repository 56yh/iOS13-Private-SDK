//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome;

@interface HUAddTriggerItem : HFItem
{
    HMHome *_home;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (_Bool)_itemisHidden;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 mode:(unsigned long long)arg2;

@end

