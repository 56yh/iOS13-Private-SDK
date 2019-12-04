//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSource-Protocol.h>
#import <FileProvider/FPSpotlightCollectorObserving-Protocol.h>

@class FPQueryEnumerationSettings, FPSpotlightCollectorManager, FPSpotlightQueryDescriptor, NSPredicate, NSString;
@protocol FPSpotlightDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSpotlightDataSource : NSObject <FPSpotlightCollectorObserving, FPCollectionDataSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    FPSpotlightCollectorManager *_collectorManager;
    FPQueryEnumerationSettings *_enumerationSettings;
    NSPredicate *_predicate;
    _Bool _invalidated;
    _Bool _hasMoreIncoming;
    id <FPSpotlightDataSourceDelegate> _delegate;
    FPSpotlightQueryDescriptor *_queryDescriptor;
}

@property(readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor; // @synthesize queryDescriptor=_queryDescriptor;
@property(nonatomic) __weak id <FPSpotlightDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasMoreIncoming; // @synthesize hasMoreIncoming=_hasMoreIncoming;
- (void)enumerationMightHaveResumed;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidateWithError:(id)arg1;
- (void)start;
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;
- (unsigned long long)maximumNumberOfItemsForCollector:(id)arg1;
- (void)collector:(id)arg1 didEncounterError:(id)arg2;
- (void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
- (void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didUpdateItems:(id)arg2;
- (void)collector:(id)arg1 didGatherItems:(id)arg2;
- (id)itemPredicateForCollector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

