//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/SPPowerMonitorDelegate-Protocol.h>

@class NSDate, NSString, SPNetworkMonitor;
@protocol OS_dispatch_queue, SPMonitorsWrapperDelegate;

__attribute__((visibility("hidden")))
@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate>
{
    id <SPMonitorsWrapperDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SPNetworkMonitor *_networkMonitor;
    NSDate *_lastStateChangeDate;
    NSDate *_nextStateChangeDate;
}

@property(retain, nonatomic) NSDate *nextStateChangeDate; // @synthesize nextStateChangeDate=_nextStateChangeDate;
@property(retain, nonatomic) NSDate *lastStateChangeDate; // @synthesize lastStateChangeDate=_lastStateChangeDate;
@property(retain, nonatomic) SPNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SPMonitorsWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;
- (void)start;
- (unsigned long long)powerState;
- (_Bool)isNetworkUp;
- (id)initWithBeaconManager:(id)arg1 delegateQueueu:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

