//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDWACDevice-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CUWACSession, CUWiFiDevice, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging>
{
    CUWiFiDevice *_cuWiFiDevice;
    CUWACSession *_wacSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *deviceID;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)cancelConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)startConfigurationWithCompletionHandler:(id /* block */)arg1;
@property(readonly, nonatomic) id underlyingDevice; // @dynamic underlyingDevice;
@property(readonly, nonatomic) _Bool supportsAirPlay2; // @dynamic supportsAirPlay2;
@property(readonly, nonatomic) _Bool isConfigured; // @dynamic isConfigured;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *ssid; // @dynamic ssid;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

