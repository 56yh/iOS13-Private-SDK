//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/PCInterfaceMonitorDelegate-Protocol.h>

@protocol OS_dispatch_queue;

@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_updateQueue;
    BOOL _internetReachable;
}

+ (id)sharedInstance;
@property(getter=isInternetReachable) BOOL internetReachable; // @synthesize internetReachable=_internetReachable;
// - (void).cxx_destruct;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (id)init;

@end

