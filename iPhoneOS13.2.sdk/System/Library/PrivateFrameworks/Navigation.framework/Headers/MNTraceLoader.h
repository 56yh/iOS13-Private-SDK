//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNTrace;

@interface MNTraceLoader : NSObject
{
    MNTrace *_trace;
}

- (_Bool)_tableExists:(id)arg1;
- (id)_handleUpdateError;
- (_Bool)_executeQuery:(id)arg1 rowHandler:(id /* block */)arg2;
- (_Bool)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id *)arg2;
- (_Bool)_loadTraceVersion;
- (_Bool)_loadMiscInfo;
- (_Bool)_loadCommuteDirectionsRequestsTable;
- (_Bool)_loadCommuteDestinationsTable;
- (_Bool)_loadAnnotatedUserEnvironmentTable;
- (_Bool)_loadAnnotatedUserBehaviorTable;
- (_Bool)_loadRouteSelectionsTable;
- (_Bool)_loadVehicleDataTable;
- (_Bool)_loadMotionDataTable;
- (_Bool)_loadCompassHeadingDataTable;
- (_Bool)_loadETAUpdatesTable;
- (_Bool)_loadDirectionsTable;
- (_Bool)_loadLocationsTable;
- (_Bool)_loadInfoTable;
- (id)loadTraceWithPath:(id)arg1 outError:(id *)arg2;

@end

