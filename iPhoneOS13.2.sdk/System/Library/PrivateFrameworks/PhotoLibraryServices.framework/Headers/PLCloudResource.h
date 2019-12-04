//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudResourceCommon-Protocol.h>
#import <PhotoLibraryServices/PLResourceAvailabilityMarking-Protocol.h>

@class CPLScopedIdentifier, NSDate, NSManagedObjectID, NSString, PLCloudMaster, PLManagedAsset;

@interface PLCloudResource : PLManagedObject <PLCloudResourceCommon, PLResourceAvailabilityMarking>
{
}

+ (id)entityName;
+ (_Bool)_countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(_Bool)arg3 localCount:(unsigned long long *)arg4 unavailableCount:(unsigned long long *)arg5 error:(id *)arg6;
+ (_Bool)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long *)arg3 unavailableCount:(unsigned long long *)arg4 error:(id *)arg5;
+ (_Bool)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long *)arg2 unavailableCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)arg1;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(_Bool)arg4 withCreationDate:(id)arg5;
- (void)markAsNotLocallyAvailable;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
@property(readonly, nonatomic) unsigned int resourceRecipeID;
@property(readonly, retain, nonatomic) NSString *utiString;
@property(readonly, nonatomic) unsigned long long sourceCplType;
@property(readonly, nonatomic) unsigned long long cplType;
- (void)prepareForDeletion;
@property(retain, nonatomic) NSDate *prunedAt; // @dynamic prunedAt;
@property(nonatomic) short prefetchCount; // @dynamic prefetchCount;
@property(retain, nonatomic) NSDate *lastPrefetchDate; // @dynamic lastPrefetchDate;
@property(nonatomic) _Bool isLocallyAvailable; // @dynamic isLocallyAvailable;
- (id)cplResourceIncludeFile:(_Bool)arg1;
@property(readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSString *assetUuid; // @dynamic assetUuid;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(readonly) NSUInteger hash;
@property(nonatomic) long long height; // @dynamic height;
@property(nonatomic) _Bool isAvailable; // @dynamic isAvailable;
@property(retain, nonatomic) NSString *itemIdentifier; // @dynamic itemIdentifier;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate; // @dynamic lastOnDemandDownloadDate;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) int sourceType; // @dynamic sourceType;
@property(readonly) Class superclass;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(nonatomic) long long width; // @dynamic width;

@end

