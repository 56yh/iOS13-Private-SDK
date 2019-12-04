//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPRemoteDataStorageDelegate-Protocol.h>
#import <iWorkImport/TSPSplitableData-Protocol.h>

@class NSDate, NSString, TSPDataAttributes, TSPDataManager, TSPDataMetadata, TSPDataUniqueIdentifier, TSPDigest, TSPObjectContext;
@protocol OS_dispatch_queue, TSPDataStorage;

__attribute__((visibility("hidden")))
@interface TSPData : NSObject <TSPSplitableData, TSPRemoteDataStorageDelegate>
{
    // Error parsing type: AB, name: _didCull
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataAttributes *_attributes;
    long long _identifier;
    TSPDataUniqueIdentifier *_uniqueIdentifier;
    TSPDataManager *_manager;
    NSDate *_lastModificationDate;
    TSPDataMetadata *_metadata;
}

+ (_Bool)writeStorage:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)normalizedExtensionForFilename:(id)arg1;
+ (id)typeForFilename:(id)arg1;
+ (id)requiredAVAssetOptions;
+ (void)removeCullingListener:(id)arg1;
+ (void)addCullingListener:(id)arg1;
+ (void)performDataCullingOperationSynchronously:(_Bool)arg1 usingBlock:(id /* block */)arg2;
+ (id)null;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2;
+ (id)readOnlyDataFromURL:(id)arg1;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 useFileCoordination:(_Bool)arg3 filename:(id)arg4 context:(id)arg5;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 useFileCoordination:(_Bool)arg3 context:(id)arg4;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
+ (_Bool)isSupportedURL:(id)arg1;
+ (id)pasteboardTypeForIdentifier:(long long)arg1;
+ (id)remoteDataWithURL:(id)arg1 digest:(id)arg2 filename:(id)arg3 canDownload:(_Bool)arg4 downloadPriority:(long long)arg5 context:(id)arg6;
+ (id)resourceNameForFilename:(id)arg1 identifier:(long long)arg2;
@property(retain, nonatomic) TSPDataMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) __weak TSPDataManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) TSPDataUniqueIdentifier *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) TSPDataAttributes *unsafeAttributes; // @synthesize unsafeAttributes=_attributes;
- (void)upgradeFallbackColorIfNeeded;
- (id)createMetadataIfNeeded;
- (struct CGSize)pixelSize;
- (void)setFallbackColor:(id)arg1;
- (id)fallbackColor;
@property(readonly, nonatomic) _Bool gilligan_isRemote;
-     // Error parsing type: B40@0:8^{DataInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DataAttributes}^{EncryptionInfo}QBi}16@24@32, name: archiveInfoMessage:archiver:packageWriter:
- (_Bool)isStorageInPackage:(id)arg1;
- (id)preferredFilename;
- (void)setFilename:(id)arg1 storage:(id)arg2 ifStorageIs:(id)arg3;
- (void)setFilename:(id)arg1 storage:(id)arg2;
@property(retain, nonatomic) id <TSPDataStorage> storage;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 filename:(id)arg3 lastModificationDate:(id)arg4 storage:(id)arg5 manager:(id)arg6;
- (id)init;
@property(readonly, nonatomic) unsigned long long encodedLengthIfLocal;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (_Bool)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long lengthIfLocal;
@property(readonly, nonatomic) unsigned long long length;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)addDownloadObserver:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)performInputStreamReadWithAccessor:(id /* block */)arg1;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)setToCopyOfMetadataIfNil:(id)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *digestString;
@property(readonly, nonatomic) TSPDigest *digest;
@property(readonly, nonatomic) __weak TSPObjectContext *context;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
@property(readonly, nonatomic) _Bool isEncrypted;
@property(readonly, nonatomic) _Bool isExternalData;
@property(readonly, nonatomic) _Bool isApplicationData;
@property(readonly, nonatomic) _Bool isReadable;
@property(readonly, nonatomic) NSString *normalizedExtension;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *filename;
- (id)AVAssetWithOptions:(id)arg1;
- (id)AVAsset;
- (struct CGImage *)newCGImage;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (id)NSData;
- (_Bool)bookmarkDataNeedsWriteWithContext:(id)arg1;
- (id)makeBookmarkDataWithContext:(id)arg1 filename:(id)arg2 error:(out id *)arg3;
@property(copy) TSPDataAttributes *attributes;
- (void)didReplaceDataContents;
- (void)willCullWithFlags:(unsigned long long)arg1;
- (void)willCull;
- (void)dealloc;
@property(nonatomic, getter=isAcknowledgedByServer) _Bool acknowledgedByServer;
- (id)UIImage;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(id /* block */)arg2;
@property(readonly, nonatomic) unsigned long long tsp_length;
- (id)pasteboardType;
- (id)temporaryDataStorageURLForRemoteDataStorage:(id)arg1;
- (void)didReceiveRemoteDataWithReadChannel:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)didReceiveRemoteDataAtURL:(id)arg1 canMove:(_Bool)arg2 decryptionInfo:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)didReceiveRemoteData:(id)arg1 decryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)didReceiveRemoteDataWithHandler:(id /* block */)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
@property(readonly, nonatomic) _Bool tsd_allowedToConvertDataAlreadyInDocument;
@property(nonatomic, setter=tsd_setShouldBeInterpretedAsGenericIfUntagged:) _Bool tsd_shouldBeInterpretedAsGenericIfUntagged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

