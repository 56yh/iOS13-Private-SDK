//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CAMCaptureRequest, CAMPersistenceController, CAMStillImageCaptureResult, CAMStillImageLocalPersistenceResult, CAMVideoCaptureResult, CAMVideoLocalPersistenceResult;

@protocol CAMPersistenceResultDelegate 

@optional
- (void)persistenceController:(CAMPersistenceController *)arg1 didCompleteAllLocalPersistenceForRequest:(CAMCaptureRequest *)arg2;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateVideoLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 forCaptureResult:(CAMVideoCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateStillImageLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 forCaptureResult:(CAMStillImageCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
@end

