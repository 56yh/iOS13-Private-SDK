//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

#import <CloudDocsDaemon/PQLBindable-Protocol.h>
#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSData, NSString;

@interface CKRecord (BRCSerializationAdditions) <PQLValuable, PQLBindable>
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;
+ (id)brc_containerMetadataZoneID;
+ (id)brc_zoneHealthZoneID;
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4 pcsChaining:(_Bool)arg5;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3 inSharedAlias:(_Bool)arg4;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;
- (void)serializeFinderTags:(id)arg1 forCreation:(_Bool)arg2;
- (void)serializeSystemFields:(id)arg1;
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 clientZone:(id)arg3 error:(id *)arg4;
- (_Bool)deserializeSymlinkTarget:(id *)arg1 error:(id *)arg2;
- (_Bool)deserializeStatInfo:(id *)arg1 itemID:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (void)deserializeFolderSharingOptions:(unsigned long long *)arg1;
- (_Bool)deserializeiWorkSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;
- (void)_deserializeRootSharingOptions:(unsigned long long *)arg1;
- (_Bool)deserializeAliasInfo:(id *)arg1 serverZone:(id)arg2 error:(id *)arg3;
- (_Bool)deserializeFilename:(id *)arg1 basename:(id *)arg2 bounceno:(id *)arg3 extension:(id *)arg4 userInfo:(id)arg5 error:(id *)arg6;
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3 expectClass:(Class)arg4 allowNil:(_Bool)arg5 errorDescription:(id *)arg6;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)sanitizeShortTokenFields;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (_Bool)brc_currentUserOwnsLastEditorDevice;
- (id)brc_lastEditorDeviceName;
- (_Bool)brc_safeToGetURL;
- (id)brc_updateDroppedReason;
- (id)brc_oplockMergeEtag;
- (_Bool)brc_isInterestingRecordForSyncDown;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataIconNames;
@property(readonly, nonatomic) NSData *brc_containerMetadataPropertiesData;
- (_Bool)brc_isfakeRecordWithErrorMarkerFor20716676;
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(_Bool)arg2;
- (id)brc_documentName;
- (id)brc_sharedDocumentDisplayName;
- (id)brc_sharedDocumentExtension;
- (_Bool)isFolderShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

