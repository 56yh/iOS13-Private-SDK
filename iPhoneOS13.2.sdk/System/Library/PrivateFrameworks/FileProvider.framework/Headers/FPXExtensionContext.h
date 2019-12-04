//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <FileProvider/FPItemHierarchyLookingUp-Protocol.h>
#import <FileProvider/FPXVendor-Protocol.h>

@class FPXDomainContext, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPXExtensionContext : NSExtensionContext <FPXVendor, FPItemHierarchyLookingUp>
{
    NSMutableSet *_listenerDelegates;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_actionsQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_runningEnumerators;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSUserDefaults *_userDefaults;
    FPXDomainContext *_domainContext;
    _Bool _isBeingDeallocated;
    _Bool _usesFPFS;
    NSString *_providerIdentifier;
}

+ (Class)principalClass;
+ (void)setPrincipalClass:(Class)arg1;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(readonly, nonatomic) _Bool usesFPFS; // @synthesize usesFPFS=_usesFPFS;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)arg1;
- (void)importDidFinishWithCompletionHandler:(id /* block */)arg1;
- (void)signalEnumeratorForMaterializedItemsWithCompletionHandler:(id /* block */)arg1;
- (id)itemForItemID:(id)arg1;
- (void)wakeForPushWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCustomPushTopicsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchTrashIdentifiersWithCompletionHandler:(id /* block */)arg1;
- (void)userInteractionErrorsForPerformingAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)bulkEvictItemsWithItemIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wakeForSessionIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 domainIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)disconnectDomainID:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchPublishingURLForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDefaultContainerForBundleIdentifier:(id)arg1 defaultName:(id)arg2 inDomainIdentifier:(id)arg3 reply:(id /* block */)arg4;
- (void)fetchItemID:(id)arg1 reply:(id /* block */)arg2;
- (void)fetchHierarchyForItemID:(id)arg1 recursively:(_Bool)arg2 reply:(id /* block */)arg3;
- (void)_createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 targetName:(id)arg5 bounce:(_Bool)arg6 bounceNumber:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 bounce:(_Bool)arg5 completionHandler:(id /* block */)arg6;
- (void)deleteItemsWithIDs:(id)arg1 baseVersions:(id)arg2 options:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)preflightReparentItemID:(id)arg1 underParentID:(id)arg2 reply:(id /* block */)arg3;
- (void)_reparentItem:(id)arg1 underParent:(id)arg2 withNewName:(id)arg3 shouldBounce:(_Bool)arg4 bounceIndex:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (id)_proxyWithCancellationHandler:(id)arg1 forClientOperation:(id)arg2;
- (void)fetchVendorEndpoint:(id /* block */)arg1;
- (void)fetchOperationServiceEndpoint:(id /* block */)arg1;
- (void)fetchServicesForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeListenerDelegate:(id)arg1;
- (void)addListenerDelegate:(id)arg1;
- (void)enumeratorWasInvalidated:(id)arg1;
- (void)fetchAndStartEnumeratingWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)valuesForAttributes:(id)arg1 forItemID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toFetchThumbnailsForItemIdentifiers:(id)arg2 size:(struct CGSize)arg3 completionHandler:(id /* block */)arg4;
- (void)trashItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_persistedDocumentURLForURL:(id)arg1 itemID:(id)arg2 extension:(id)arg3 creatingPlaceholderIfMissing:(_Bool)arg4 completionHandler:(id /* block */)arg5;
- (void)itemForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)itemForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)identifierForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentWithItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAlternateContentsURL:(id)arg1 forDocumentWithItemID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)alternateContentsURLWrapperForItemID:(id)arg1;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLastUsedDate:(id)arg1 forItemIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)preflightTrashItemIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpIndexStateForDomain:(id)arg1 toFileHandler:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dropIndexForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCurrentIndexingAnchorForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)indexOneBatchInDomain:(id)arg1 fromAnchor:(id)arg2 toAnchor:(id)arg3 updatedItems:(id)arg4 deletedItems:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)indexOneBatchInDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)bulkItemChanges:(id)arg1 changedFields:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_singleItemChange:(id)arg1 changedFields:(unsigned long long)arg2 bounce:(_Bool)arg3 bounceIndex:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)singleItemChange:(id)arg1 changedFields:(unsigned long long)arg2 bounce:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (void)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (id)updateExistingContents:(id)arg1 ofItemWithIdentifier:(id)arg2 existingVersion:(id)arg3 toVersion:(id)arg4 request:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)contentsForItemWithIdentifier:(id)arg1 version:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)acknowledgeUserVisibleRootDidChangeForDomain:(id)arg1 urlWrapper:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)itemChangedAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpInternalStateToTermDumper:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)evictItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)didChangeItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dropDomainWithCompletionHandler:(id /* block */)arg1;
- (void)_deleteIndexInDomainContexts:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)instanceForItemIDs:(id)arg1;
- (id)domainContextForItemIDs:(id)arg1;
- (id)domainContextForItemID:(id)arg1;
- (id)instanceForItemID:(id)arg1;
- (id)instanceForURL:(id)arg1;
- (id)domainContextForURL:(id)arg1;
- (id)instanceForDomainIdentifier:(id)arg1;
- (id)domainContextForIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sendBlacklistedProcessNamesUpdate;
- (void)invalidate;
- (void)dealloc;
- (void)_setTransaction:(id)arg1;
- (void)beginRequestWithDomain:(id)arg1 alternateContentsDictionary:(id)arg2 usesFPFS:(_Bool)arg3;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)importDocumentAtURL:(id)arg1 intoFolderWithIdentifier:(id)arg2 originalName:(id)arg3 extensionInstance:(id)arg4 reply:(id /* block */)arg5;
- (void)applyItemChange:(id)arg1 baseVersion:(id)arg2 contents:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)applyFieldChangesToItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 lastKnownVendorItem:(id)arg5 extensionInstance:(id)arg6 completionHandler:(id /* block */)arg7;

@end

