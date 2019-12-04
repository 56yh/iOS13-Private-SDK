//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject
{
    PSYSyncSession *_originalSession;
    PSYSyncSession *_updatedSession;
}

@property(readonly, nonatomic) PSYSyncSession *updatedSession; // @synthesize updatedSession=_updatedSession;
@property(readonly, nonatomic) PSYSyncSession *originalSession; // @synthesize originalSession=_originalSession;
- (_Bool)didUpdateCompleteSyncSession;
- (void)enumerateNewlyCompletedActivitiesWithBlock:(id /* block */)arg1;
- (void)enumerateNewlyRunningActivitiesWithBlock:(id /* block */)arg1;
- (void)enumerateChangedActivitiesWithBlock:(id /* block */)arg1;
- (id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2;

@end

