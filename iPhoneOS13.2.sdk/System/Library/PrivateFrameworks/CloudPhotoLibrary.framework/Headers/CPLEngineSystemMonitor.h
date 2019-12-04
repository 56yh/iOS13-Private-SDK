//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLNetworkWatcherDelegate-Protocol.h>
#import <CloudPhotoLibrary/_CPLScheduledOverrideDelegate-Protocol.h>

@class CPLEngineLibrary, CPLNetworkWatcher, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent>
{
    _Bool _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    _Bool _modifyingBudgetOverride;
    unsigned long long _newBudgetsToOverride;
    unsigned long long _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    _Bool _allowOperationsBoost;
    _Bool _allowBackgroundOperationsBoost;
    CPLEngineLibrary *_engineLibrary;
}

+ (void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
+ (id)descriptionForBudgets:(unsigned long long)arg1;
+ (id)descriptionForBudget:(unsigned long long)arg1;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void)watcher:(id)arg1 stateDidChangeToNetworkState:(id)arg2;
- (void)scheduledOverrideDidEnd:(id)arg1;
@property(readonly) _Bool isDataBudgetOverriden;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)_withSystemBudgetOverride:(id /* block */)arg1;
- (void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
- (void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
@property(readonly) _Bool canBoostBackgroundOperations;
@property(readonly) _Bool canBoostOperations;
@property(readonly) _Bool isOnCellularOrUnknown;
@property(readonly) _Bool isNetworkConstrained;
@property(readonly) _Bool isNetworkConnected;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
@property(readonly) unsigned long long freeDiskSpaceSize;
- (void)updateDiskPressureState;
@property(readonly) unsigned long long diskPressureState;
- (id)componentName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
