//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface DCScannedDocument : NSObject
{
    NSString *_title;
    NSMutableArray *_docInfos;
    NSURL *_scannedDocumentImageDirectoryURL;
}

+ (void)initialize;
+ (id)scannedDocumentsFolderURL;
@property(readonly, nonatomic) NSURL *scannedDocumentImageDirectoryURL; // @synthesize scannedDocumentImageDirectoryURL=_scannedDocumentImageDirectoryURL;
@property(retain, nonatomic) NSMutableArray *docInfos; // @synthesize docInfos=_docInfos;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)applicationWillTerminate:(id)arg1;
- (void)deleteAllImages;
- (_Bool)deleteImage:(id)arg1;
- (id)getImage:(id)arg1;
- (id)getImageURL:(id)arg1;
- (id)copyImageAtURL:(id)arg1;
- (id)URLForImageWithUUID:(id)arg1;
- (id)URLForImageInFolder:(id)arg1 withUUID:(id)arg2;
- (_Bool)makeSureScanDirectoryExists:(id *)arg1;
- (_Bool)copyImagesFromDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (id)imageOfPageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long pageCount;
- (id)imageForScanAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)numberOfScans;
- (id)pListURL:(id)arg1;
- (id)copyImageForLoading:(id)arg1 fromFolderURL:(id)arg2;
- (id)copyImageForSaving:(id)arg1 toFolderURL:(id)arg2;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;
- (void)replaceContentsWithDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithDocInfoCollection:(id)arg1 imageCache:(id)arg2;

@end

