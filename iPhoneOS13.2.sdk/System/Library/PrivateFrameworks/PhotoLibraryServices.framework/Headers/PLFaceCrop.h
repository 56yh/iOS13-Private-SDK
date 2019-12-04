//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSData, NSString, PLDetectedFace, PLManagedAsset, PLPerson;

@interface PLFaceCrop : PLManagedObject <PLSyncableObject, PLCloudDeletable>
{
    _Bool _needsPersistenceUpdate;
}

+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2;
+ (short)_localTypeFromCloudType:(long long)arg1;
+ (long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2;
+ (id)listOfSyncedProperties;
+ (int)_nameSourceForFaceFromFaceCrop:(id)arg1;
+ (int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1;
+ (id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)allFaceCropsInPhotoLibrary:(id)arg1;
+ (id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property(readonly, copy) NSString *debugDescription;
- (id)cplFaceCropChange;
@property(readonly, retain, nonatomic) id localID;
- (id)momentShare;
- (id)cplFullRecord;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;
- (void)applyPropertiesToTrainingFace;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)prepareForDeletion;
- (void)willSave;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) unsigned short cloudType; // @dynamic cloudType;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) PLDetectedFace *face; // @dynamic face;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) NSString *invalidMergeCandidatePersonUUID; // @dynamic invalidMergeCandidatePersonUUID;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) NSData *resourceData; // @dynamic resourceData;
@property(nonatomic) short state; // @dynamic state;
@property(readonly) Class superclass;
@property(nonatomic) short type; // @dynamic type;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

