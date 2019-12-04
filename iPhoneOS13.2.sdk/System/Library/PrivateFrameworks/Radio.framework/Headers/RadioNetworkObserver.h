//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RadioNetworkObserver : NSObject
{
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}

+ (id)sharedNetworkObserver;
@property(readonly, nonatomic) _Bool isUsingNetwork;
@property(readonly, nonatomic) _Bool isCellularNetworkingAllowed;
- (void)endUsingNetwork;
- (void)beginUsingNetwork;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

