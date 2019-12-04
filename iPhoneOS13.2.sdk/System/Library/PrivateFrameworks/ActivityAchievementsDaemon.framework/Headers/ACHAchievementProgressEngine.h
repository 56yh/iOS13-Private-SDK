//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface ACHAchievementProgressEngine : NSObject
{
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_providerQueue;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    _HKDelayedOperation *_delayedOperation;
    NSNumber *_overrideDelay;
}

@property(retain, nonatomic) NSNumber *overrideDelay; // @synthesize overrideDelay=_overrideDelay;
@property(retain, nonatomic) _HKDelayedOperation *delayedOperation; // @synthesize delayedOperation=_delayedOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
@property(retain, nonatomic) NSHashTable *providers; // @synthesize providers=_providers;
- (unsigned long long)providerCount;
- (_Bool)populateProgressAndGoalForAchievement:(id)arg1;
- (_Bool)shouldPopulateProgressForAchievement:(id)arg1;
- (struct NSObject *)_queue_providerForTemplate:(id)arg1;
- (void)requestProgressUpdateForProgressProvider:(struct NSObject *)arg1;
- (void)deregisterProgressProvider:(struct NSObject *)arg1;
- (void)registerProgressProvider:(struct NSObject *)arg1;
- (void)_notifyObserversOfProgressUpdate;
- (void)removeObserver:(struct NSObject *)arg1;
- (void)addObserver:(struct NSObject *)arg1;
- (id)init;

@end

