//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker
{
}

+ (id)workerWithLibrary:(id)arg1;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (_Bool)isInterruptible;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)managedObjectIDsNeedingProcessing;
- (_Bool)hasPendingJobs;
- (id)_predicateToFetchDeferredAssets;

@end

