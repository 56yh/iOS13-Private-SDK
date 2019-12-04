//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface SBRecentAppLayoutsPersister : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSURL *_persistenceURL;
    NSTimer *_persistTimer;
    _Bool _initializedNewStoreOnDisk;
    NSArray *_recents;
}

@property(retain, nonatomic) NSArray *recents; // @synthesize recents=_recents;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1;
- (void)_enqueueDiskWrite;
- (void)_persistTimerExpired:(id)arg1;
- (id)_scheduledPersistTimer;
- (void)_loadRecents;
- (void)syncToDiskSynchronously;
- (void)syncToDiskSoonIfDirty;
@property(readonly, nonatomic) _Bool initializedNewStoreOnDisk;
- (id)initWithPersistenceURL:(id)arg1;

@end

