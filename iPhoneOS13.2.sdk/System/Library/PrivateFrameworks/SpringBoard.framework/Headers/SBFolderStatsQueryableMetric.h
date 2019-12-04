//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETDistributionEventTracker;

@interface SBFolderStatsQueryableMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETDistributionEventTracker *_dockAppsTracker;
    PETDistributionEventTracker *_dockFoldersTracker;
    PETDistributionEventTracker *_dockItemsTracker;
    PETDistributionEventTracker *_pageTracker;
    PETDistributionEventTracker *_folderTracker;
}

- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

