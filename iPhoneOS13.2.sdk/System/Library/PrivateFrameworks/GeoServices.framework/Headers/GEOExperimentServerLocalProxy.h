//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>
#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOABAssignmentRequest, GEOABAssignmentResponse, GEOXPCActivity, NSString;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOPListStateCapturing, GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s _experimentsInfoLock;
    GEOABAssignmentRequest *_currentRequest;
    struct os_unfair_lock_s _currentRequestLock;
    GEOXPCActivity *_activity;
    unsigned long long _stateCaptureHandle;
}

+ (void)cancelOldActivities;
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)_deleteExperimentInfoFromDisk;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)arg1;
- (void)_loadExperimentsConfiguration:(id /* block */)arg1;
- (void)forceUpdate;
- (void)_writeExperimentInfoToDisk:(id)arg1;
- (void)_updateIfNecessary;
- (void)_notifyExperimentsInfoChanged:(id)arg1 current:(id)arg2;
- (_Bool)_removeOldExperimentsInfoIfNecessary:(_Bool)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)_executeRefreshWithinTime:(double)arg1;
- (void)_setupRefreshActivity;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)arg1;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

