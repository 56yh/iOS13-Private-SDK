//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface PPRecordMonitoringHelper : NSObject
{
    NSMapTable *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
}

- (id)_handleRecentChangesWithDelegates:(id)arg1 changeGenerator:(id /* block */)arg2 recordGenerator:(id /* block */)arg3;
- (id)_setupRecentChangesWithDelegates:(id)arg1 recordGenerator:(id /* block */)arg2;
- (void)sendChangesToDelegatesWithChangeGenerator:(id /* block */)arg1 recordGenerator:(id /* block */)arg2;
- (void)resetWithDelegate:(id)arg1 recordGenerator:(id /* block */)arg2;
- (void)sendResetToAllDelegatesWithRecordGenerator:(id /* block */)arg1;
- (void)handleChangeNotificationWithName:(id)arg1 afterDelaySeconds:(double)arg2 handler:(id /* block */)arg3;
- (void)loadRecordsWithDelegate:(id)arg1 recordGenerator:(id /* block */)arg2;
- (_Bool)loadRecordsAndMonitorChangesWithDelegate:(id)arg1 recordGenerator:(id /* block */)arg2 notificationRegistrationBlock:(id /* block */)arg3;
- (id)initWithName:(id)arg1;

@end

