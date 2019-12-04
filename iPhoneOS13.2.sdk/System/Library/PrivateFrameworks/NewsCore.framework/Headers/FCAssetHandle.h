//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCInterestToken, FCOperation, NFUnfairLock, NSDate, NSError, NSHashTable, NSString, NSURL, NTPBAsset;
@protocol FCAssetDataProvider, FCAssetHandleDelegate, OS_dispatch_group;

@interface FCAssetHandle : NSObject
{
    id <FCAssetDataProvider> _dataProvider;
    NSError *_downloadError;
    NSURL *_remoteURL;
    FCOperation *_fetchOperation;
    NSHashTable *_downloadRequests;
    NSObject<OS_dispatch_group> *_fetchGroup;
    unsigned long long _countOfPenalizedDownloadAttempts;
    NSDate *_dateOfLastDownloadAttempt;
    NFUnfairLock *_stateLock;
    id <FCAssetHandleDelegate> _delegate;
    FCInterestToken *_holdToken;
    NSString *_assetKey;
    long long _lifetimeHint;
    NSString *_rawFilePath;
    NTPBAsset *_assetMetadata;
}

@property(retain) NTPBAsset *assetMetadata; // @synthesize assetMetadata=_assetMetadata;
@property(copy) NSString *rawFilePath; // @synthesize rawFilePath=_rawFilePath;
@property(nonatomic) long long lifetimeHint; // @synthesize lifetimeHint=_lifetimeHint;
@property(copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) FCInterestToken *holdToken; // @synthesize holdToken=_holdToken;
@property(nonatomic) __weak id <FCAssetHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NFUnfairLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain) NSDate *dateOfLastDownloadAttempt; // @synthesize dateOfLastDownloadAttempt=_dateOfLastDownloadAttempt;
@property unsigned long long countOfPenalizedDownloadAttempts; // @synthesize countOfPenalizedDownloadAttempts=_countOfPenalizedDownloadAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(retain, nonatomic) NSHashTable *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property(retain, nonatomic) FCOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain) id <FCAssetDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (_Bool)_canRetryDownload;
- (void)_completeFetchWithDataProvider:(id)arg1 error:(id)arg2;
- (void)_revisitDownloadRequestPriorities;
- (void)_removeDownloadRequest:(id)arg1;
- (id)fetchDataProviderWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)fetchDataProviderWithCompletion:(id /* block */)arg1;
@property(readonly, copy, nonatomic) NSString *uniqueKey;
@property(readonly, copy) NSString *filePath;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)_downloadIfNeededWithPriority:(long long)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadIfNeededWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)downloadIfNeededWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1;

@end

