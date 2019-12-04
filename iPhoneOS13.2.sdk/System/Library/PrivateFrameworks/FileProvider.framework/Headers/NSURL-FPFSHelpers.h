//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSURL (FPFSHelpers)
+ (id)fp_supportDirectory;
+ (id)fp_cloudStorageDirectory;
+ (id)fp_tempDirectory;
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectoryPathForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectory;
+ (void)fp_createEmptyTempPackageWithName:(id)arg1 completion:(id /* block */)arg2;
+ (void)fp_createEmptyTempFileWithName:(id)arg1 completion:(id /* block */)arg2;
+ (void)_fp_createInTempDirectoryWithName:(id)arg1 creationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)fp_physicalURL;
- (id)fp_withReadWriteAccess:(id /* block */)arg1;
- (_Bool)fp_deleteWithCompletionHandler:(id /* block */)arg1;
- (void)fp_coordinatedDeleteWithHandler:(id /* block */)arg1;
- (_Bool)fp_createSubFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)fp_renameWithNewName:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)fp_trashUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)fp_reparentUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)fp_importUnderFolder:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)fp_importUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(_Bool)arg4 moveHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(_Bool)arg4 completionHandler:(id /* block */)arg5;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(_Bool)arg3 moveHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (id)fp_existingURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2 maximumBounceNumber:(id *)arg3 forceFetchingBounceNumber:(_Bool)arg4;
- (id)_fp_scanForURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2 maximumBounceNumber:(id *)arg3;
- (id)_fp_lookupURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2;
- (id)fp_existingURLOfChildWithName:(id)arg1;
- (id /* block */)fp_defaultMoverBlock;
- (id)fp_matchesUbiquitousHeuristics;
- (_Bool)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (_Bool)fp_isInSyncableRootFast;
- (id)fp_fpfsRootURL;
- (_Bool)fp_matchesAlternateContentsURL:(id)arg1;
- (_Bool)fp_matchesApplicationContainerURL:(id)arg1;
- (_Bool)fp_isAppInboxOrDescendants;
- (_Bool)_fp_partOfAppInboxWithURLComponents:(id)arg1;
- (id)_fp_componentsRelativeToRoot:(id)arg1;
- (_Bool)fp_matchesLiveFilesURL:(id)arg1;
- (_Bool)fp_matchesFPFSURL:(id)arg1;
- (_Bool)fp_matchesCloudDocsURL:(id)arg1;
- (_Bool)fp_matchesFileProviderURL:(id)arg1;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_createTempFolderWithError:(id *)arg1;
- (id)fp_directorySizeWithError:(id *)arg1;
- (_Bool)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id *)arg2;
- (void)fp_attachSecurityScopeFromURL:(id)arg1;
- (id)fp_addDocumentTrackingWithError:(id *)arg1;
- (_Bool)fp_checkSandboxFileMetadataRead;
- (_Bool)fp_makeWritableWithError:(id *)arg1;
- (void)fp_hideExtension:(_Bool)arg1;
- (_Bool)fp_isPackage;
- (_Bool)fp_isFolder;
- (_Bool)fp_isSymlink;
- (id)fp_realpathURL;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)fp_copyToURL:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 replacePlaceholder:(_Bool)arg4 completion:(id /* block */)arg5;
- (_Bool)fp_removeFileProviderXattrsWithError:(id *)arg1;
- (_Bool)fp_getSize:(unsigned long long *)arg1 error:(id *)arg2;
@end

