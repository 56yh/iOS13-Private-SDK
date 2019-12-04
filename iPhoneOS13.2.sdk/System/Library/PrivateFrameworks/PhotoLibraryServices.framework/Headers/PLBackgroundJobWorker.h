//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLBackgroundJobWorkerProtocol-Protocol.h>

@class NSMutableArray, NSString, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol>
{
    id /* block */ _workerCompleteCompletionHandler;
    id /* block */ _currentManagedObjectCompletionHandler;
    // Error parsing type: Aq, name: _workerAtomicCounter
    // Error parsing type: Aq, name: _completionHandlerAtomicCounter
    id /* block */ _workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    unsigned long long _totalJobsCount;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct os_unfair_lock_s _lock;
    _Bool _shouldStop;
    unsigned long long _workerPriority;
    NSString *_workerName;
    NSString *_workerDetailedName;
    PLPhotoLibrary *_photoLibrary;
}

+ (id)workerWithLibrary:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSString *workerDetailedName; // @synthesize workerDetailedName=_workerDetailedName;
@property(readonly, nonatomic) NSString *workerName; // @synthesize workerName=_workerName;
@property(readonly, nonatomic) unsigned long long workerPriority; // @synthesize workerPriority=_workerPriority;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)managedObjectIDsNeedingProcessing;
- (_Bool)hasPendingJobs;
- (_Bool)isInterruptible;
- (void)stopAllWork;
- (void)startWorkWithCompletion:(id /* block */)arg1;
- (void)_handleAllJobsComplete;
- (void)_processNextManagedObject;
@property(readonly, copy) NSString *description;
- (id)initWithPriority:(unsigned long long)arg1 photoLibrary:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

