//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDDevice, HMDUser, NSArray, NSDate, NSNumber, NSString;

@interface HMDTriggerModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
- (id)dependentUUIDs;
- (id)createPayload;

// Remaining properties
@property(copy, nonatomic) NSNumber *active; // @dynamic active;
@property(retain, nonatomic) NSArray *currentActionSets; // @dynamic currentActionSets;
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @dynamic mostRecentFireDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HMDUser *owner; // @dynamic owner;
@property(retain, nonatomic) HMDDevice *owningDevice; // @dynamic owningDevice;

@end

