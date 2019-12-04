//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WBSHistoryService, WBSURLCompletionHistorySnapshot;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionDataStore : NSObject
{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    NSDate *_snapshotLastModifiedDate;
    WBSURLCompletionHistorySnapshot *_snapshot;
}

- (void)_loadFromDatabaseIfNecessary;
- (RefPtr_ed2a6bdb)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(id /* block */)arg2;
- (Ref_acc025bb)_completionItemFromRow:(id)arg1;
- (void)getSnapshotWithCompletionHandler:(id /* block */)arg1;
- (id)initWithHistoryService:(id)arg1;

@end

