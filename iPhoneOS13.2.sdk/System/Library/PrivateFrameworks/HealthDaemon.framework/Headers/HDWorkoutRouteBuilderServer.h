//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSeriesBuilderServer.h>

#import <HealthDaemon/HKWorkoutRouteBuilderServerInterface-Protocol.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface>
{
    HKWorkoutRoute *_route;
}

+ (id)taskIdentifier;
@property(retain, nonatomic) HKWorkoutRoute *route; // @synthesize route=_route;
- (_Bool)_validateRouteData:(id)arg1 error:(out id *)arg2;
- (void)queue_recoverBuilder;
- (void)createSeriesSampleIfNeeded:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)seriesSample;
- (void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (void)server_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

