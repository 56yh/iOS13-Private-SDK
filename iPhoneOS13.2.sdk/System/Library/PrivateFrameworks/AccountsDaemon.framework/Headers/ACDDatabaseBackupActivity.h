//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACDDatabaseBackupActivity : NSObject
{
    _Bool _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
    ACDDatabase *_database;
}

+ (id)new;
@property(readonly, nonatomic) ACDDatabase *database; // @synthesize database=_database;
- (void)scheduleBackupIfNonexistent;
- (void)scheduleBackup;
- (void)_registerActivitySchedulingBackup:(_Bool)arg1;
- (void)_registerActivityIfNeededSchedulingBackup:(_Bool)arg1;
- (void)registerActivityIfNeeded;
- (id)activityCriteria;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end

