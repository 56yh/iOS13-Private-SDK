//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UNSKeyedObservable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_observersByKey;
}

- (id)_observersForKey:(id)arg1;
- (void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)notifyObserversKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_queue_removeObserver:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;
- (void)_queue_addObserver:(id)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (id)initWithQueue:(id)arg1 callOutQueue:(id)arg2;

@end

