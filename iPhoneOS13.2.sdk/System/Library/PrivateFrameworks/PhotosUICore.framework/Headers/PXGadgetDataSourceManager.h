//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXGadgetProviderDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, PXGadgetDataSource, PXGadgetNavigationHelper;
@protocol OS_dispatch_queue, OS_os_log, PXGadgetDelegate, PXGadgetTransition;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate>
{
    _Bool _hasLoadedPriorities;
    _Bool _loadingInitialGadgets;
    _Bool _needsToLoadAllProviders;
    id <PXGadgetDelegate> _nextGadgetResponder;
    NSArray *_cachedProviders;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
}

@property(nonatomic) _Bool needsToLoadAllProviders; // @synthesize needsToLoadAllProviders=_needsToLoadAllProviders;
@property(nonatomic) _Bool loadingInitialGadgets; // @synthesize loadingInitialGadgets=_loadingInitialGadgets;
@property(nonatomic) _Bool hasLoadedPriorities; // @synthesize hasLoadedPriorities=_hasLoadedPriorities;
@property(retain, nonatomic) NSMutableArray *lookupQueue_loadedProviders; // @synthesize lookupQueue_loadedProviders=_lookupQueue_loadedProviders;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(copy, nonatomic) NSArray *cachedProviders; // @synthesize cachedProviders=_cachedProviders;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder; // @synthesize nextGadgetResponder=_nextGadgetResponder;
@property(readonly, nonatomic) NSObject<OS_os_log> *gadgetDataSourceManagerLog;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(id /* block */)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
- (void)dismissGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)presentGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)invalidateGadgets;
- (id)_sortedGadgets;
- (id)_dataSourceSnapshot;
- (void)_updateDataSource;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (void)_loadPriorityForProviders:(id)arg1;
- (id)allGadgets;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(id /* block */)arg1;
- (void)loadRemainingGadgetsIfNeeded;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (id)noContentGadget;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (void)didLoadDataForPriorities;
@property(readonly, nonatomic) id /* block */ gadgetProviderSortComparator;
@property(readonly, nonatomic) id /* block */ gadgetSortComparator;
@property(readonly, nonatomic) NSArray *gadgetProviders;
- (void)removeCachedProviders;
- (id)createInitialDataSource;
- (id)initWithQueueName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXGadgetDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

