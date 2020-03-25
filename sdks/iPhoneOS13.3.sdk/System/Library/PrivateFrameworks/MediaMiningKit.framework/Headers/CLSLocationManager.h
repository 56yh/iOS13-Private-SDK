//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSUUID;
@protocol OS_dispatch_queue;

@interface CLSLocationManager : NSObject <CLLocationManagerDelegate>
{
    double _desiredAccuracy;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _minimumDelayReached;
    BOOL _isBrowsing;
    NSMutableArray *_pendingBlocks;
    CLLocationManager *_locationManager;
    BOOL _isUpdatingLocation;
    NSUUID *_shutdownUUID;
}

+ (id)defaultManager;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
// - (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_dispatchProximityPendingBlocks:(BOOL)arg1;
- (id)currentLocation;
- (void)locationResult:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end
