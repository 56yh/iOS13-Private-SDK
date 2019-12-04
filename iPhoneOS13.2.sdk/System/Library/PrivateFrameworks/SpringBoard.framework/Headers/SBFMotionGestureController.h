//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMGestureManager, NSMutableDictionary;

@interface SBFMotionGestureController : NSObject
{
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}

+ (id)sharedInstance;
- (void)_removeGestureManager;
- (void)_addGestureManager;
- (void)_updateGestureManager;
- (id)_observersForPriority:(unsigned long long)arg1;
- (id)_highestPriorityObservers;
- (void)_enumerateObserversByPriority:(id /* block */)arg1;
- (_Bool)_hasObservers;
- (void)_notifyObserversOfGesture:(int)arg1;
- (void)_removeGestureObserver:(id)arg1;
- (void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)removeGestureObserver:(id)arg1;
- (void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)addGestureObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

