//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFServiceLikeBuilder-Protocol.h>

@class HFAppleMusicAccountArbitrator, HFNamingComponents, HFRoomBuilder, HMAccessory, HMMediaSystem, HMMediaSystemBuilder, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFMediaSystemBuilder : HFItemBuilder <HFServiceLikeBuilder>
{
    _Bool _isFavorite;
    _Bool _hasSetRoom;
    _Bool _isCreatingMediaSystem;
    id <HFIconDescriptor> _iconDescriptor;
    HFAppleMusicAccountArbitrator *_accountArbitrator;
    HMAccessory *_firstSetupSourceAccessory;
    HMMediaSystemBuilder *_homeKitMediaSystemBuilder;
    HFNamingComponents *_namingComponent;
    HFRoomBuilder *_roomBuilder;
}

+ (Class)homeKitRepresentationClass;
@property(nonatomic) _Bool isCreatingMediaSystem; // @synthesize isCreatingMediaSystem=_isCreatingMediaSystem;
@property(nonatomic) _Bool hasSetRoom; // @synthesize hasSetRoom=_hasSetRoom;
@property(retain, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property(retain, nonatomic) HFNamingComponents *namingComponent; // @synthesize namingComponent=_namingComponent;
@property(retain, nonatomic) HMMediaSystemBuilder *homeKitMediaSystemBuilder; // @synthesize homeKitMediaSystemBuilder=_homeKitMediaSystemBuilder;
@property(readonly, nonatomic) HMAccessory *firstSetupSourceAccessory; // @synthesize firstSetupSourceAccessory=_firstSetupSourceAccessory;
@property(retain, nonatomic) HFAppleMusicAccountArbitrator *accountArbitrator; // @synthesize accountArbitrator=_accountArbitrator;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
- (id)_firstUnpopulatedRole;
@property(retain, nonatomic) HFRoomBuilder *room;
@property(readonly, nonatomic) _Bool supportsFavoriting;
- (id)_defaultName;
@property(readonly, nonatomic) NSString *originalName;
- (id)_rooms;
- (id)_updateAssistantAccessControl;
- (id)_updateRoom;
- (id)_updateFavorite;
- (id)_commitChangesToMediaSystemBuilder;
- (id)commitItem;
- (_Bool)swapRoles;
- (_Bool)shouldAllowAddingAccessory:(id)arg1;
- (id)removeItemFromHome;
- (id)accessories;
- (id)roleForAccessory:(id)arg1;
- (id)accessoryForRole:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1 role:(id)arg2;
- (void)addAccessory:(id)arg1;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) HMMediaSystem *mediaSystem;
- (void)setMediaSystem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

