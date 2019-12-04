//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <iWorkImport/TSUURLWrapper-Protocol.h>

@class NSString, NSUUID, TSUSandboxedURL;

@interface NSURL (TSUAdditions) <TSUURLWrapper>
+ (id)tsu_fileURLWithPath:(id)arg1;
+ (id)tsp_iWorkAVAssetURLWithUUID:(id)arg1 filename:(id)arg2 contentTypeUTI:(id)arg3;
+ (id)sheetHyperlinkURLScheme;
- (id)tsu_URLExceptPrivate;
- (id)tsu_pathExceptPrivate;
- (id)tsu_contentModificationDateWithLogContext:(id)arg1;
@property(readonly, getter=tsu_isInTrash) _Bool tsu_inTrash;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (id)tsu_fileProviderBookmarkableStringAndReturnError:(id *)arg1;
- (void)tsu_fileProviderBookmarkableStringWithCompletion:(id /* block */)arg1;
- (_Bool)tsu_isOnSameVolumeAs:(id)arg1;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (_Bool)tsu_isOnAPFSVolume;
- (_Bool)tsu_isOnForeignVolume;
- (id)tsu_fileSystemTypeName;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (_Bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;
- (_Bool)tsu_isDocumentUploaded:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isDocumentUploaded;
- (_Bool)tsu_isShared:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShared;
- (_Bool)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;
- (unsigned long long)tsu_fileSize;
- (_Bool)tsu_isFileSizeTooLargeForSharing;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(id /* block */)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(id /* block */)arg1;
- (id)tsu_documentIdentifier;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;
- (_Bool)tsu_conformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *tsu_UTI;
@property(readonly) TSUSandboxedURL *sandboxedURL;
@property(readonly) NSURL *URL;
- (id)tsp_queryDictionary;
- (_Bool)tsp_getIsUbiquitousValue:(_Bool *)arg1 promised:(_Bool)arg2 error:(id *)arg3;
- (_Bool)tsp_isUbiquitous;
- (id)tsp_fileIdentifier;
- (id)tsp_embeddedUTI;
- (_Bool)tsp_matchesURL:(id)arg1 canCompareFileID:(_Bool)arg2;
- (_Bool)tsp_matchesURL:(id)arg1;
- (_Bool)tsp_isIWorkAVAssetURL;
- (id)initWithDefaultSheetURLForDocumentRoot:(id)arg1;
- (id)initWithSheet:(id)arg1;
@property(readonly, nonatomic) NSUUID *sheetUUID;
@property(readonly, nonatomic) _Bool isSheetURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

