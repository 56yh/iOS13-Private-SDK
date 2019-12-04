//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATOperation.h"

@class CATRemoteTaskOperation;
@protocol CRKEnableStudentCloudSyncingInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKEnableStudentCloudSyncingInteraction : CATOperation
{
    unsigned long long mLocalCourseCount;
    id <CRKRequestPerformingProtocol> mStudentDaemonProxy;
    id <CRKEnableStudentCloudSyncingInteractionDelegate> mDelegate;
    CATRemoteTaskOperation *mEnableSyncingOperation;
    _Bool mIsPrompting;
}

- (id)makeEnableSyncingRequest;
- (void)endOperationWithSyncingEnabledState:(_Bool)arg1;
- (void)processMergeDecision:(_Bool)arg1;
- (void)stopPromptingToMerge;
- (void)promptToMerge;
- (void)enableSyncingOperationDidFinish:(id)arg1;
- (void)enableSyncing;
- (void)run;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithLocalCourseCount:(unsigned long long)arg1 studentDaemonProxy:(id)arg2 delegate:(id)arg3;

@end

