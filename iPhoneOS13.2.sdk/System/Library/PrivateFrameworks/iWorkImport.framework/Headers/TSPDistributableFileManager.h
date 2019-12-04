//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TSUPathSet, TSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSPDistributableFileManager : NSObject
{
    NSString *_directoryPath;
    _Bool _shouldCreate;
    TSUPathSet *_claimedPaths;
    NSMutableSet *_newIdentifiers;
    NSMutableSet *_modifiedIdentifiers;
    NSMutableSet *_deletedIdentifiers;
    TSUTemporaryDirectory *_modifiedFilesDirectory;
    _Bool _isCullingDisabled;
}

- (void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3;
- (id)_filePathForIdentifier:(id)arg1;
- (id)_filePathForModifiedIdentifier:(id)arg1;
- (id)_modifiedFilesDirectoryPath;
- (id)_claimedPaths;
- (_Bool)rehomeOntoPath:(id)arg1;
- (_Bool)prepareForSaveToPath:(id)arg1 error:(id *)arg2;
- (void)disableFileCulling;
- (void)removeIdentifier:(id)arg1;
- (id)representationForIdentifier:(id)arg1;
- (void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3;
- (void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3;
- (id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2;
- (_Bool)commitWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 shouldCreate:(_Bool)arg2;

@end

