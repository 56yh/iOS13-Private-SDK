//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKSeriesBuilderServerInterface-Protocol.h>

@class HDSeriesBuilderEntity, HKSeriesBuilderConfiguration, HKSeriesSample, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDSeriesBuilderServer : HDStandardTaskServer <HKSeriesBuilderServerInterface>
{
    HKSeriesBuilderConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    long long _queue_state;
    HKSeriesSample *_seriesSample;
    HDSeriesBuilderEntity *_persistentEntity;
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
@property(retain, nonatomic) HDSeriesBuilderEntity *persistentEntity; // @synthesize persistentEntity=_persistentEntity;
@property(retain, nonatomic) HKSeriesSample *seriesSample; // @synthesize seriesSample=_seriesSample;
@property(nonatomic, setter=queue_setState:) long long queue_state; // @synthesize queue_state=_queue_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) HKSeriesBuilderConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)_queue_discardIfAuthorizedWithCompletion:(id /* block */)arg1;
- (void)_queue_discardSeriesWithCompletion:(id /* block */)arg1;
- (void)discardSeriesWithCompletion:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)queue_recoverBuilder;
- (void)_queue_recoverOrCreatePersistentEntity;
- (void)queue_freezeBuilderWithCompletion:(id /* block */)arg1;
- (void)_queue_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_recoverWithCompletion:(id /* block */)arg1;
- (void)remote_freezeWithCompletion:(id /* block */)arg1;
- (void)remote_discardWithCompletion:(id /* block */)arg1;
- (void)remote_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)queue_canInsertDataWithErrorHandler:(id /* block */)arg1;
- (_Bool)canAddMetadata:(id)arg1 errorOut:(id *)arg2;
- (void)createSeriesSampleIfNeeded:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)associateToWorkoutBuilderWithCompletion:(id /* block */)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

