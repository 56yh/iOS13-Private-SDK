//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFSelectedUserCollection, HMHome;

@interface HUPresenceActivationOptionItem : HFItem
{
    _Bool _selected;
    HMHome *_home;
    unsigned long long _activationGranularity;
    unsigned long long _eventType;
    unsigned long long _style;
    HFSelectedUserCollection *_selectedUsers;
}

@property(retain, nonatomic) HFSelectedUserCollection *selectedUsers; // @synthesize selectedUsers=_selectedUsers;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) unsigned long long activationGranularity; // @synthesize activationGranularity=_activationGranularity;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_summaryTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 selectedUsers:(id)arg2 activationGranularity:(unsigned long long)arg3 style:(unsigned long long)arg4 home:(id)arg5;
- (id)init;

@end

