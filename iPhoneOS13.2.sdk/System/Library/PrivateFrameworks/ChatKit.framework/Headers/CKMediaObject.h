//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/QLPreviewItem-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, UITraitCollection;
@protocol CKFileTransfer, OS_dispatch_group;

@interface CKMediaObject : NSObject <QLPreviewItem>
{
    _Bool _isFromMe;
    _Bool _suppressPreviewForUnknownSender;
    _Bool _forceInlinePreviewGeneration;
    id <CKFileTransfer> _transfer;
    UITraitCollection *_transcriptTraitCollection;
    NSURL *_cachedHighQualityFileURL;
    NSObject<OS_dispatch_group> *_highQualityFetchInProgressGroup;
    unsigned long long _oopPreviewRequestCount;
}

+ (id)mediaClasses;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)iconCache;
+ (_Bool)shouldUseTranscoderGeneratedPreviewSize;
+ (_Bool)shouldShadePreview;
+ (_Bool)shouldScaleUpPreview;
+ (_Bool)isPreviewable;
@property(nonatomic) unsigned long long oopPreviewRequestCount; // @synthesize oopPreviewRequestCount=_oopPreviewRequestCount;
@property(nonatomic) _Bool forceInlinePreviewGeneration; // @synthesize forceInlinePreviewGeneration=_forceInlinePreviewGeneration;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *highQualityFetchInProgressGroup; // @synthesize highQualityFetchInProgressGroup=_highQualityFetchInProgressGroup;
@property(retain, nonatomic) NSURL *cachedHighQualityFileURL; // @synthesize cachedHighQualityFileURL=_cachedHighQualityFileURL;
@property(retain, nonatomic) UITraitCollection *transcriptTraitCollection; // @synthesize transcriptTraitCollection=_transcriptTraitCollection;
@property(nonatomic) _Bool suppressPreviewForUnknownSender; // @synthesize suppressPreviewForUnknownSender=_suppressPreviewForUnknownSender;
@property(nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(retain, nonatomic) id <CKFileTransfer> transfer; // @synthesize transfer=_transfer;
- (_Bool)isPromisedItem;
@property(readonly, nonatomic) NSURL *previewItemURL;
@property(readonly, nonatomic) _Bool canShareItem;
- (void)fetchHighQualityFile:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool validatePreviewFormat;
@property(readonly, nonatomic) _Bool generatePreviewOutOfProcess;
@property(readonly, nonatomic) _Bool needsAnimation;
@property(readonly, nonatomic) int mediaType;
- (id)pasteboardItem;
@property(readonly, copy, nonatomic) NSString *UTIType;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSURL *fileURL;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSString *transferGUID;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)composeImagesForEntryContentViewWidth:(double)arg1;
- (id)ASTCDataFromImage:(id)arg1;
- (id)JPEGDataFromImage:(id)arg1;
- (id)fileManager;
- (id)previewDispatchCache;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (struct CGSize)bbSize;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (_Bool)validPreviewExistsAtURL:(id)arg1;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSString *previewFilenameExtension;
- (struct CGSize)transcodingPreviewPxSize;
- (struct IMPreviewConstraints)transcodingPreviewConstraints;
- (struct CGSize)transcoderGeneratedSizeForConstraints:(struct IMPreviewConstraints)arg1;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (void)_sampleImageEdges:(id)arg1 usingRect:(struct CGRect)arg2 forMostlyWhitePixels:(unsigned long long *)arg3 otherPixels:(unsigned long long *)arg4;
- (struct IMPreviewConstraints)_previewConstraintsForWidth:(double)arg1;
- (id)_transcodeControllerSharedInstance;
- (void)generateOOPPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)cacheAndPersistPreview:(id)arg1 orientation:(BOOL)arg2;
- (id)fileSizeString;
- (id)downloadProgressString;
- (id)downloadProgressImage;
- (_Bool)transcoderPreviewGenerationFailed;
- (_Bool)shouldShowDisclosure;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (void)export:(id)arg1;
- (_Bool)canExport;
- (_Bool)shouldBeQuickLooked;
- (_Bool)shouldShowViewer;
- (id)location;
- (id)_qlThumbnailGeneratorSharedGenerator;
- (id)richIcon;
- (id)icon;
- (id)subtitle;
- (id)title;
- (Class)inlineStickerBalloonViewClass;
- (Class)previewBalloonViewClass;
- (Class)coloredBalloonViewClass;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)isPreviewable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

