//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderDaemon/FPDIterator.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface FPDDiskIterator : FPDIterator
{
    NSURL *_rootURL;
    _Bool _stopAccessingRoot;
    _Bool _sentRoot;
    _Bool _lastItemWasPackage;
    _Bool _done;
    NSError *_error;
    unsigned long long _numFoldersPopped;
    struct __CFURLEnumerator *_enumerator;
}

- (void)dealloc;
- (unsigned long long)numFoldersPopped;
- (_Bool)done;
- (id)error;
- (id)nextWithError:(id *)arg1;
- (_Bool)skipMaterializedTreeTraversal;
- (id)initWithURL:(id)arg1 isDirectory:(_Bool)arg2;

@end

