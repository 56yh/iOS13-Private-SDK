//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSSet, NSString;

@interface PLPTPAssetHandle : NSObject
{
    _Bool _requiresConversion;
    long long _type;
    NSManagedObjectID *_assetID;
    NSManagedObjectID *_sidecarID;
    NSSet *_siblingAssetHandleTypes;
}

@property(readonly, copy, nonatomic) NSSet *siblingAssetHandleTypes; // @synthesize siblingAssetHandleTypes=_siblingAssetHandleTypes;
@property(readonly, nonatomic) _Bool requiresConversion; // @synthesize requiresConversion=_requiresConversion;
@property(readonly, copy, nonatomic) NSManagedObjectID *sidecarID; // @synthesize sidecarID=_sidecarID;
@property(readonly, copy, nonatomic) NSManagedObjectID *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *auxiliaryResourceFilenameMarker;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)hasSiblingAssetWithAssetHandleType:(long long)arg1;
- (id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg1;
- (id)assetHandleBySettingRequiresConversion;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(_Bool)arg4 siblingAssetHandleTypes:(id)arg5;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(_Bool)arg4;

@end
