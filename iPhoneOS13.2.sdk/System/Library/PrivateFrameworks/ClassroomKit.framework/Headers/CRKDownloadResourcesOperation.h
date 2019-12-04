//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATOperation.h"



@class NSArray, NSMutableArray, NSString, NSURLCredential, NSURLSession;

@interface CRKDownloadResourcesOperation : CATOperation <NSURLSessionDownloadDelegate>
{
    NSURLCredential *mCredential;
    NSURLSession *mSession;
    NSArray *mDownloadTasks;
    NSMutableArray *mFileURLs;
    NSMutableArray *mCompletedUnitCounts;
    NSArray *_resources;
}

@property(readonly, copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)finalizeDownloadedItem:(id)arg1 forRequestURL:(id)arg2;
- (void)unzipOperationDidFinish:(id)arg1 forRequestURL:(id)arg2;
- (id)moveURLToNonEphemeralLocation:(id)arg1 withFileName:(id)arg2 error:(id *)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)operationWillFinish;
- (void)cancelIfNeeded;
- (void)cancel;
- (void)run;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

