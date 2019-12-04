//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSLifetimeMonitor-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class NSArray, NSString;
@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, OS_dispatch_queue;

@interface DNDSBaseLifetimeMonitor : NSObject <DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_activeLifetimeAssertionUUIDs;
    id <DNDSLifetimeMonitorDataSource> _dataSource;
    id <DNDSLifetimeMonitorDelegate> _delegate;
}

+ (Class)lifetimeClass;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs; // @synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)sysdiagnoseDataForDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (void)refreshMonitorFromQueueForDate:(id)arg1;
- (void)refreshMonitorForDate:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

