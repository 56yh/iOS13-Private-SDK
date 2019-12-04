//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, GEOLocationShifter, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationProvider;
    GEOLocationShifter *_locationShifter;
    NSMutableArray *_requests;
}

+ (void)setLocationProviderClass:(Class)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_requestTimedOut:(id)arg1;
- (void)_processError:(id)arg1;
- (void)_processLocation:(id)arg1;
- (void)_processPendingRequests;
- (void)_removeRequest:(id)arg1;
- (void)_addRequest:(id)arg1;
- (void)_setupLocationProvider;
- (id)locationProvider;
@property(readonly, nonatomic) CLLocation *lastLocation;
- (void)getLocationWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

