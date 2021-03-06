//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/SSDownloadManagerObserver-Protocol.h>
#import <ToneLibrary/SSPurchaseManagerDelegate-Protocol.h>
#import <ToneLibrary/TLToneStoreDownloadController-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString, SSDownloadManager, SSPurchaseManager;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    NSString *_storeAccountName;
    NSMutableDictionary *_toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
    SSDownloadManager *_storeDownloadManager;
    SSPurchaseManager *_storePurchaseManager;
}

// - (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(id /* CDUnknownBlockType */)arg1;
- (void)_handleToneManagerContentsDidChangeNotification:(id)arg1;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)redownloadAllTones;
- (void)_openToneStoreWithStoreItemKind:(id)arg1;
- (void)openRingtoneStore;
- (void)openAlertToneStore;
- (void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3;
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
- (void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_updateStoreAccountName;
@property(readonly, nonatomic) NSString *storeAccountName;
- (void)dealloc;
- (id)init;

@end

