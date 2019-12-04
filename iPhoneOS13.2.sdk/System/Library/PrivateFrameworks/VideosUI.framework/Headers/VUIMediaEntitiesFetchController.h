//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIMediaLibraryFetchController.h>

@class NSArray, VUIMediaEntityFetchResponse;
@protocol VUIMediaEntitiesFetchControllerDelegate;

@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController
{
    id <VUIMediaEntitiesFetchControllerDelegate> _delegate;
    NSArray *_requests;
    VUIMediaEntityFetchResponse *_response;
    NSArray *_responses;
}

@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(readonly, nonatomic) VUIMediaEntityFetchResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) __weak id <VUIMediaEntitiesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyFetchRequests:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyFetchRequests:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_notifyDelegateWithBlock:(id /* block */)arg1;
- (_Bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(_Bool)arg2;
- (void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1;
- (void)_handleManualFetchControllerOperationDidComplete:(id)arg1;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)cancelFetch;
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;

@end

