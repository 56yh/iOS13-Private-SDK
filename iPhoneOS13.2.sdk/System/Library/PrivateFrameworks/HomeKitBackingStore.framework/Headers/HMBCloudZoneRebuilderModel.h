//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBCloudZoneRebuilderModel : HMBModel
{
}

+ (id)sentinelUUID;
+ (id)hmbProperties;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSNumber *hasCompleted; // @dynamic hasCompleted;
@property(retain, nonatomic) NSUUID *uniqueToken; // @dynamic uniqueToken;

@end

