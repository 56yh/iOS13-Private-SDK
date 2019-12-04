//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOExperimentConfigurationObserverProxy : NSObject
{
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)observersCount;
- (void)forEachObserver:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)init;

@end
