//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLThumbPersistenceManager-Protocol.h>

@class NSString, PLImageFormat, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager>
{
    PLImageFormat *_format;
    _Bool _readOnly;
    PLPhotoLibraryPathManager *_pathManager;
    NSString *_path;
    NSString *_filename;
}

+ (CDStruct_1ef3fb1f)maxMasterSizeFromSourceImageSize:(CDStruct_1ef3fb1f)arg1 format:(id)arg2;
@property(readonly) PLImageFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_debugDescription;
- (_Bool)validateData:(id)arg1 withToken:(id)arg2;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (_Bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (_Bool)usesThumbIdentifiers;
@property(readonly, nonatomic) _Bool isReadOnly;
@property(readonly, copy) NSString *description;
- (id)initWithImageFormat:(id)arg1 pathManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

