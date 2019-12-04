//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (void)performBlockOnWriterQueue:(id /* block */)arg1;
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)clearAllAttributesForFileAtUrl:(id)arg1;
+ (id)persistedAttributesForFileAtURL:(id)arg1 exists:(_Bool *)arg2 includeUnknownAttributes:(_Bool)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;
+ (id)sharedInstance;
+ (id)persistenceKeyTypes;
- (void)_performOnWriterQueueWithIdentifier:(const char *)arg1 block:(id /* block */)arg2;
- (void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (id)init;

@end

