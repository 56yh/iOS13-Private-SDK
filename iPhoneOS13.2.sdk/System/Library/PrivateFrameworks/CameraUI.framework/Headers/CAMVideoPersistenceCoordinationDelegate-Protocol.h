//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CAMCaptureCoordinationInfo, CAMCaptureRequest, CAMVideoLocalPersistenceResult, CAMVideoPersistenceCoordinator;

@protocol CAMVideoPersistenceCoordinationDelegate 
- (void)videoPersistenceCoordinator:(CAMVideoPersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;
- (void)videoPersistenceCoordinator:(CAMVideoPersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 spatialOverCaptureResult:(CAMVideoLocalPersistenceResult *)arg3 captureRequest:(CAMCaptureRequest *)arg4 powerAssertionReason:(unsigned int)arg5;
@end
