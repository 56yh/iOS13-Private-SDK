//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDRemoteAddressable-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMerging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>


@class HMDAccount, HMDDeviceCapabilities, HMDHomeKitVersion, HMDRPIdentity, HMFProductInfo, HMFUnfairLock, NSArray, NSSet, NSString, NSUUID;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSSet *_handles;
    _Bool _dirty;
    _Bool _locallyTracked;
    _Bool _cloudTracked;
    NSString *_name;
    HMDAccount *_account;
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
    HMDDeviceCapabilities *_capabilities;
    NSUUID *_idsIdentifierHash;
    HMDRPIdentity *_rpIdentity;
    NSUUID *_modelIdentifier;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)deviceWithHandle:(id)arg1;
+ (id)deviceWithDestination:(id)arg1;
+ (id)destinationForDevice:(id)arg1 service:(id)arg2;
@property(getter=isCloudTracked) _Bool cloudTracked; // @synthesize cloudTracked=_cloudTracked;
@property(getter=isLocallyTracked) _Bool locallyTracked; // @synthesize locallyTracked=_locallyTracked;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (_Bool)isBackingStorageEqual:(id)arg1;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly) Class modelClass;
- (void)__updateDeviceWithActions:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (id)logIdentifier;
@property(copy) HMDRPIdentity *rpIdentity; // @synthesize rpIdentity=_rpIdentity;
- (id)remoteDestinationString;
@property(copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash; // @synthesize idsIdentifierHash=_idsIdentifierHash;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(copy) HMDDeviceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)updateWithDevice:(id)arg1;
- (void)updateVersion:(id)arg1;
- (void)setVersion:(id)arg1;
@property(readonly, copy) HMDHomeKitVersion *version; // @synthesize version=_version;
@property(copy) HMFProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property __weak HMDAccount *account; // @synthesize account=_account;
- (void)setName:(id)arg1;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *idsIdentifier;
- (id)destination;
- (void)__handleAccountHandleUpdated:(id)arg1;
- (void)setHandles:(id)arg1;
- (id)globalHandles;
- (id)localHandles;
- (id)handles;
- (_Bool)isRelatedToDevice:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 name:(id)arg3 productInfo:(id)arg4 version:(id)arg5 capabilities:(id)arg6;
- (id)init;
- (id)deviceForIDSService:(id)arg1;
- (id)initWithService:(id)arg1 device:(id)arg2;
@property(readonly, copy) NSArray *identities;
@property(readonly, getter=isCurrentDevice) _Bool currentDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

