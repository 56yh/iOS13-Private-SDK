//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFFileCacheStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore>
{
    NSMutableDictionary *_fileWrappers;
}

- (void)removeAllFileWrappersForFileCache:(id)arg1;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

