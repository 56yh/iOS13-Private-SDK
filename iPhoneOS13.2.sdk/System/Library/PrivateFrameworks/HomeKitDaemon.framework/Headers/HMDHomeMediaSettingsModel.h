//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelNamespace;

// Remaining properties
@property(copy, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(copy, nonatomic) NSNumber *mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(copy, nonatomic) NSNumber *minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;

@end

