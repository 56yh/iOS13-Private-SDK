//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOXPCActivity, NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GEORequestCountPowerLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_eventName;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    GEOXPCActivity *_activity;
}

+ (BOOL)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2;
+ (void)cancelOldActivities;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_cancelXpcActivity;
- (void)_scheduleXpcActivity;
- (void)_flushToPowerLog;
- (void)dealloc;
- (void)startNewSessionWithName:(id)arg1;
- (void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2;
- (id)init;

@end

