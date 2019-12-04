//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSource-Protocol.h>
#import <FileProvider/FPXEnumeratorObserver-Protocol.h>

@class FPExtensionEnumerationSettings, NSData, NSString;
@protocol FPCollectionDataSourceDelegate, FPDLifetimeServicing, FPXEnumerator, OS_dispatch_queue;

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource>
{
    FPExtensionEnumerationSettings *_enumerationSettings;
    id <FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _started;
    _Bool _invalidated;
    _Bool _shouldUpdate;
    _Bool _enumeratingExtensionResults;
    NSData *_nextPageToken;
    NSData *_changeToken;
    unsigned long long _numGatheredItems;
    id <FPDLifetimeServicing> _lifetimeExtender;
    _Bool _hasMoreIncoming;
    id <FPCollectionDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <FPCollectionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasMoreIncoming; // @synthesize hasMoreIncoming=_hasMoreIncoming;
- (void)_gatherInitialItems;
- (id)_initialPageFromSortDescriptors:(id)arg1;
- (void)_updateItems;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)enumerationMightHaveResumed;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidateWithError:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (void)start;
@property(readonly, copy) NSString *description;
- (id)initWithEnumerationSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

