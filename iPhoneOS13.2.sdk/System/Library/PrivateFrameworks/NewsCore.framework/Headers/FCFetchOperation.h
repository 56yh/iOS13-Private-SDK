//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFetchOperationResult, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchOperation : FCOperation
{
    FCFetchOperationResult *_result;
    _Bool _wifiOnly;
    _Bool _shouldFailOnMissingObjects;
    _Bool _canSendFetchCompletionSynchronously;
    unsigned long long _cachePolicy;
    double _maximumCachedAge;
    id /* block */ _fetchCompletionBlock;
    NSObject<OS_dispatch_queue> *_fetchCompletionQueue;
}

@property(readonly) FCFetchOperationResult *result; // @synthesize result=_result;
@property _Bool canSendFetchCompletionSynchronously; // @synthesize canSendFetchCompletionSynchronously=_canSendFetchCompletionSynchronously;
@property(retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // @synthesize fetchCompletionQueue=_fetchCompletionQueue;
@property(copy) id /* block */ fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property _Bool shouldFailOnMissingObjects; // @synthesize shouldFailOnMissingObjects=_shouldFailOnMissingObjects;
@property double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property _Bool wifiOnly; // @synthesize wifiOnly=_wifiOnly;
- (void)finishFromEarlyCancellation;
- (void)operationDidFinishWithError:(id)arg1;
- (void)takeInputsFromFetchOperation:(id)arg1;
- (void)finishExecutingWithError:(id)arg1;
- (void)finishExecutingWithStatus:(unsigned long long)arg1;
- (void)finishExecutingWithFetchedObject:(id)arg1;
- (void)finishExecutingWithResult:(id)arg1;
- (void)cancel;
- (id)init;

@end

