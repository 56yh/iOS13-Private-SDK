//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/TSUZipArchive.h>

@class NSObject, NSURL, TSUZipFileDescriptorWrapper;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUZipFileArchive : TSUZipArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    TSUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (_Bool)isZipArchiveAtFD:(int)arg1;
+ (_Bool)isZipArchiveAtURL:(id)arg1 error:(id *)arg2;
- (id)debugDescription;
- (_Bool)isValid;
- (id)newArchiveReadChannel;
- (unsigned long long)archiveLength;
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)reopenWithTemporaryURL:(id)arg1 error:(id *)arg2;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)openWithURL:(id)arg1 error:(id *)arg2;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)URL;

@end

