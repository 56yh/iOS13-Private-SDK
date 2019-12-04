//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class HDDataCollectionManager, HDDataCollectionObserverState, NSSet;

@interface HDDataCollectionAssertion : HDAssertion
{
    struct os_unfair_lock_s _lock;
    HDDataCollectionObserverState *_observerState;
    NSSet *_sampleTypes;
    double _collectionInterval;
    HDDataCollectionManager *_dataCollectionManager;
}

@property(readonly, nonatomic) __weak HDDataCollectionManager *dataCollectionManager; // @synthesize dataCollectionManager=_dataCollectionManager;
@property(readonly, nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(readonly, nonatomic) NSSet *sampleTypes; // @synthesize sampleTypes=_sampleTypes;
@property(copy, nonatomic) HDDataCollectionObserverState *observerState; // @synthesize observerState=_observerState;
- (id)description;
- (id)initWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 dataCollectionManager:(id)arg4;

@end

