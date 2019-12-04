//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>






@class BRFileObjectID, NSArray, NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSMutableDictionary, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL;
@protocol NSFileProviderItemFlags;

@interface BRQueryItem : NSObject <NSFileProviderItem_Private, NSFileProviderItemDecorating, NSSecureCoding, NSCopying>
{
    NSString *_appLibraryID;
    NSString *_parentPath;
    NSString *_logicalName;
    NSString *_physicalName;
    NSString *_bookmarkData;
    BRFileObjectID *_fileObjectID;
    BRFileObjectID *_parentFileObjectID;
    NSNumber *_size;
    NSNumber *_mtime;
    NSNumber *_btime;
    NSNumber *_lastUsedTime;
    NSNumber *_favoriteRank;
    NSNumber *_childItemCount;
    NSURL *_url;
    NSURL *_localRepresentationURL;
    NSNumber *_parentZoneRowID;
    NSNumber *_zoneRowID;
    NSMutableDictionary *_attrs;
    id _replacement;
    union {
        struct {
            unsigned int downloadStatus:2;
            unsigned int uploadStatus:2;
            unsigned int itemStatus:2;
            unsigned int conflicted:1;
            unsigned int preCrashMarker:1;
            unsigned int isUploadActive:1;
            unsigned int isDownloadActive:1;
            unsigned int isDownloadRequested:1;
            unsigned int shareOptions:3;
            unsigned int isHiddenExt:1;
            unsigned int isBRAlias:1;
            unsigned int isTrashed:1;
            unsigned int itemMode:3;
            unsigned int fromReadOnlyDB:1;
            unsigned char BRQueryItemKind;
            unsigned char kind;
        } ;
        unsigned long long value;
    } _flags;
    long long _logicalHandle;
    long long _physicalHandle;
    unsigned long long _parentFileID;
    unsigned short _diffs;
    _Bool _isNetworkOffline;
}

+ (id)containerItemForContainer:(id)arg1 forceScan:(_Bool)arg2;
+ (id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 zoneRowID:(id)arg3;
+ (id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2;
+ (id)askDaemonQueryItemForURL:(id)arg1 andFakeFSEvent:(_Bool)arg2 error:(id *)arg3;
+ (id)askDaemonQueryItemForURL:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (id)attributesForNames:(id)arg1;
- (id)attributeNames;
- (id)valueForKey:(id)arg1;
- (id)attributeForName:(id)arg1;
@property(nonatomic) id replacement;
- (void)mergeProgressUpdate:(id)arg1;
- (void)merge:(id)arg1;
- (_Bool)canMerge:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (void)_mergeAttrs:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToQueryItem:(id)arg1;
@property(readonly, nonatomic) NSString *path;
@property(readonly, copy) NSString *description;
- (id)subclassDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
- (id)sharedItemRole;
- (_Bool)isHiddenExt;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, nonatomic) _Bool isBRAlias;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isFinderBookmark;
@property(readonly, nonatomic) _Bool isSymlink;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) _Bool isUploadActive;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, nonatomic) _Bool isDownloadActive;
@property(nonatomic) _Bool isPreCrash;
- (void)clearDiffs;
- (void)markDead;
@property(readonly, nonatomic) _Bool isDead;
@property(readonly, nonatomic) _Bool isLive;
@property(readonly, nonatomic) _Bool isConflicted;
@property(readonly, nonatomic) _Bool isInTransfer;
@property(readonly, nonatomic) unsigned int br_shareOptions;
@property(readonly, nonatomic) unsigned int br_uploadStatus;
@property(readonly, nonatomic) unsigned int br_downloadStatus;
- (id)parentFileID;
@property(nonatomic) _Bool isNetworkOffline;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, nonatomic) NSNumber *favoriteRank;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, nonatomic) NSNumber *lastUsedTime;
@property(readonly, nonatomic) NSNumber *btime;
@property(readonly, nonatomic) NSNumber *mtime;
@property(readonly, nonatomic) NSNumber *size;
@property(readonly, nonatomic) NSString *appLibraryID;
@property(readonly, nonatomic) NSString *physicalName;
@property(readonly, nonatomic) NSString *logicalName;
@property(readonly, nonatomic) NSString *parentPath;
@property(readonly, nonatomic) BRFileObjectID *fileObjectID;
@property(readonly, nonatomic) unsigned short diffs;
@property(readonly, nonatomic) NSURL *localRepresentationURL;
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
- (id)owner;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly, copy, nonatomic) NSError *downloadingError;
- (id)downloadingStatus;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, nonatomic, getter=isUploading) _Bool uploading;
@property(readonly, nonatomic, getter=isUploaded) _Bool uploaded;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
- (id)filePath;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
- (id)fileSize;
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) NSArray *decorations;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, copy) NSURL *fileURL;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;
@property(readonly, copy) NSString *fp_cloudContainerIdentifier;
@property(readonly) _Bool fp_isContainer;
- (id)localizedFileNameIfDesktopOrDocuments;
- (id)containerIDIfDesktopOrDocuments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isExcludedFromSync) _Bool excludedFromSync;
@property(readonly, nonatomic) NSDictionary *extendedAttributes;
@property(readonly, copy) NSString *fileSystemFilename;
@property(readonly, nonatomic) id <NSFileProviderItemFlags> flags;
@property(readonly, nonatomic, getter=fp_isAddedByCurrentUser) _Bool fp_addedByCurrentUser;
@property(readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property(readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly) _Bool fp_isContainerPristine;
@property(readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) _Bool fp_lastModifiedByCurrentUser;
@property(readonly, copy) NSString *fp_parentDomainIdentifier;
@property(readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property(readonly, nonatomic) NSNumber *isDownloadRequested;
@property(readonly, nonatomic) _Bool isTrashed;
@property(readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTopLevelSharedItem) _Bool topLevelSharedItem;

@end

