//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKKeyedDataStoreProtocol-Protocol.h>

@class NSFileManager, NSString, NSURL;

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol>
{
    NSURL *_directoryURL;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (id)URLForKey:(id)arg1;
- (_Bool)isKeyValid:(id)arg1;
- (_Bool)removeAllDataWithError:(id *)arg1;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)initWithDirectoryURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

