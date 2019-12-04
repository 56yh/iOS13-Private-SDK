//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTimeToLeaveRefreshStorage-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>
{
    NSMutableDictionary *_refreshDateMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *refreshDateMap; // @synthesize refreshDateMap=_refreshDateMap;
- (void)removeRefreshDates;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (id)refreshDateWithIdentifier:(id)arg1;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (id)refreshDates;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

