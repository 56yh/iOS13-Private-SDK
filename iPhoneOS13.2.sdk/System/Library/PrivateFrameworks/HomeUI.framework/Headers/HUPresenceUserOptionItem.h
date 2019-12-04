//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFUserItem, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserOptionItem : HFItem
{
    HFUserItem *_userItem;
    HULocationDeviceManager *_locationDeviceManager;
    HUPresenceCurrentUserLocationDevice *_selectedLocationDevice;
}

@property(retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice; // @synthesize selectedLocationDevice=_selectedLocationDevice;
@property(readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property(readonly, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUserItem:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3;

@end

